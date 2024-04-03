import XCTest

@testable import MDCoreSimulator

final class EmptyTests: XCTestCase {
    func testExample() throws {
        try MDCoreSimulator.loadBundle()
    }
}
