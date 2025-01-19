// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterHyprlang",
    products: [
        .library(name: "TreeSitterHyprlang", targets: ["TreeSitterHyprlang"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHyprlang",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHyprlangTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHyprlang",
            ],
            path: "bindings/swift/TreeSitterHyprlangTests"
        )
    ],
    cLanguageStandard: .c11
)
