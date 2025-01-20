import XCTest
import SwiftTreeSitter
import TreeSitterHyprlang

final class TreeSitterHyprlangTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hyprlang())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Hyprlang grammar")
    }
}
