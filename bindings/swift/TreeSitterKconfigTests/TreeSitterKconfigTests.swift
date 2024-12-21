import XCTest
import SwiftTreeSitter
import TreeSitterKconfig

final class TreeSitterKconfigTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kconfig())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kconfig grammar")
    }
}
