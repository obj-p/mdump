import XCTest

@testable import MDCoreSimulator

final class SimServiceContextTests: XCTestCase {
    func testExample() throws {
        let simServiceContext = try SimServiceContext.sharedServiceContext(forDeveloperDir: Directories.developer)
        let supportedDeviceTypes = simServiceContext.supportedDeviceTypes
        let iPhone14 = supportedDeviceTypes.first { simDeviceType in
            simDeviceType.modelIdentifier == "iPhone14,7"
        }

        XCTAssertNotNil(iPhone14)
    }
}
