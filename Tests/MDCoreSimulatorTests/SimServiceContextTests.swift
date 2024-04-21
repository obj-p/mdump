import XCTest

@testable import MDCoreSimulator

final class SimServiceContextTests: XCTestCase {
    func testExample() throws {
        let dir = "/Applications/Xcode.app/Contents/Developer"
        let simServiceContext = try SimServiceContext.sharedServiceContext(forDeveloperDir: dir)
        let supportedDeviceTypes = simServiceContext.supportedDeviceTypes
        print(supportedDeviceTypes)
    }
}
