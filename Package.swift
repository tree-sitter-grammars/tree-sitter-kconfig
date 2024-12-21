// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKconfig",
    products: [
        .library(name: "TreeSitterKconfig", targets: ["TreeSitterKconfig"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterKconfig",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterKconfigTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterKconfig",
            ],
            path: "bindings/swift/TreeSitterKconfigTests"
        )
    ],
    cLanguageStandard: .c11
)
