import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testExample() throws {
        // TODO: pass legit bundle
        let simDeviceType = try SimDeviceType(bundle: Bundle.main)
        XCTAssertEqual("", simDeviceType.modelIdentifier)
    }
}
