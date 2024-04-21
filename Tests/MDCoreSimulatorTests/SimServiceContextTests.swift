import XCTest

@testable import MDCoreSimulator

final class SimServiceContextTests: XCTestCase {
    func testExample() throws {
        let dir = "/Applications/Xcode.app/Contents/Developer"
        let simServiceContext = try SimServiceContext.sharedServiceContext(forDeveloperDir: dir)
        let supportedDeviceTypes = simServiceContext.supportedDeviceTypes
        let iPhone8 = supportedDeviceTypes.first { simDeviceType in
            simDeviceType.modelIdentifier == "iPhone8,1"
        }
        
        XCTAssertNotNil(iPhone8)
    }
}
