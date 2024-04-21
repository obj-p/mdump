import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testExample() throws {
        let bundlePath = "\(Directories.deviceType)/iPhone 14.simdevicetype"
        let simDeviceType = try SimDeviceType(bundle: SimProfileBundle(path: bundlePath))

        XCTAssertEqual("iPhone14,7", simDeviceType.modelIdentifier)
    }
}
