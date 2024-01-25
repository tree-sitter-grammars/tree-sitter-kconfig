/**
 * @file Kconfig grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 * @see {@link https://www.kernel.org/doc/html/next/kbuild/kconfig-language.html|Kconfig Language Specification}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  OR: 1,
  AND: 2,
  EQUAL: 3,
  ASSIGN: 4,
  UNARY: 5,
};

module.exports = grammar({
  name: 'kconfig',

  extras: $ => [
    /\s/,
    /\\\r?\n/,
    $.comment,
  ],

  externals: $ => [
    $._help_text,
  ],

  supertypes: $ => [
    $.expression,
  ],

  word: $ => $.symbol,

  rules: {
    configuration: $ => seq(
      optional($.mainmenu),
      repeat($._entry),
    ),

    mainmenu: $ => seq('mainmenu', field('name', $.prompt)),

    _entry: $ => choice(
      $.config,
      $.menuconfig,
      $.choice,
      $.comment_entry,
      $.menu,
      $.if,
      $.source,
      $.variable,
    ),

    config: $ => seq(
      'config',
      field('name', $.symbol),
      repeat1($._config_option),
    ),

    menuconfig: $ => seq(
      'menuconfig',
      field('name', $.symbol),
      repeat1($._config_option),
    ),

    choice: $ => seq(
      'choice',
      optional(field('name', $.symbol)),
      repeat1($._config_option),
      repeat1($._entry),
      'endchoice',
    ),

    comment_entry: $ => seq(
      'comment',
      field('name', $.prompt),
      repeat($._config_option),
    ),

    menu: $ => seq(
      'menu',
      field('name', $.prompt),
      repeat($._config_option),
      repeat($._entry),
      'endmenu',
    ),

    if: $ => seq(
      'if',
      field('condition', $.expression),
      repeat($._entry),
      'endif',
    ),

    source: $ => seq('source', $.prompt),

    variable: $ => seq(
      field('left', $.symbol),
      ':=',
      field('right', $.expression),
    ),

    _config_option: $ => choice(
      $.type_definition,
      $.input_prompt,
      $.default_value,
      $.type_definition_default,
      $.dependencies,
      $.reverse_dependencies,
      $.weak_reverse_dependencies,
      $.limiting_menu_display,
      $.numerical_ranges,
      $.help_text,
      $.optional,
      $.modules,
    ),

    type_definition: $ => seq(
      choice('bool', 'tristate', 'int', 'hex', 'string'),
      optional(choice($.prompt, $.input_prompt)),
      optional($.conditional_clause),
      /\n/,
    ),

    input_prompt: $ => seq(
      'prompt',
      $.prompt,
      optional($.conditional_clause),
      /\n/,
    ),

    default_value: $ => seq(
      'default',
      $.expression,
      optional($.conditional_clause),
      /\n/,
    ),

    type_definition_default: $ => seq(
      choice('def_bool', 'def_tristate'),
      $.expression,
      optional($.conditional_clause),
      /\n/,
    ),

    dependencies: $ => seq(
      'depends on',
      $.expression,
      /\n/,
    ),

    reverse_dependencies: $ => seq(
      'select',
      $.symbol,
      optional($.conditional_clause),
      /\n/,
    ),

    weak_reverse_dependencies: $ => seq(
      'imply',
      $.symbol,
      optional($.conditional_clause),
      /\n/,
    ),

    limiting_menu_display: $ => seq(
      'visible if',
      $.expression,
    ),

    numerical_ranges: $ => seq(
      'range',
      $.symbol,
      $.symbol,
      optional($.conditional_clause),
      /\n/,
    ),

    help_text: $ => seq(
      'help',
      alias($._help_text, $.text),
    ),

    optional: _ => 'optional',

    modules: _ => 'modules',

    conditional_clause: $ => seq('if', $.expression),

    expression: $ => choice(
      $.symbol,
      $.prompt,
      $.macro_variable,
      $.unary_expression,
      $.binary_expression,
      $.parenthesized_expression,
    ),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      '!',
      $.expression,
    )),

    binary_expression: $ => {
      const table = [
        ['||', PREC.OR],
        ['&&', PREC.AND],
        ['=', PREC.ASSIGN],
        [choice('!=', '<', '>', '<=', '>='), PREC.EQUAL],
      ];

      // @ts-ignore
      return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
        field('left', $.expression),
        // @ts-ignore
        field('operator', operator),
        field('right', $.expression),
      ))));
    },

    parenthesized_expression: $ => seq('(', $.expression, ')'),

    macro_variable: $ => seq(
      '$(',
      repeat(choice(
        $.macro_variable,
        $.macro_content,
        alias($.prompt, $.text),
      )),
      ')',
    ),
    macro_content: _ => /([^\$'"\)]|(\([^\)]*\))|(\\\$)|\$[^(])+/,

    prompt: _ => token(choice(
      seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
      seq('\'', repeat(choice(/[^'\\]/, /\\./)), '\''),
    )),

    symbol: _ => /-?[a-zA-Z0-9_]+/,

    comment: _ => token(seq('#', /.*/)),
  },
});
