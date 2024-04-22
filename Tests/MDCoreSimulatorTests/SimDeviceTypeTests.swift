import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testInitWithBundle() throws {
        // Given
        let bundlePath = Directories.deviceType(.iPhone14_7)
        let simProfileBundle = try SimProfileBundle(path: bundlePath)
        
        // When
        let simDeviceType = try SimDeviceType(bundle: simProfileBundle)

        // Then
        XCTAssertEqual("iPhone14,7", simDeviceType.modelIdentifier)
    }
}
