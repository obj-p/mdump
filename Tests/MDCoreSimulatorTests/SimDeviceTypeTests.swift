import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testExample() throws {
        let bundlePath = "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/DeviceTypes/iPhone 6s.simdevicetype"
        let simDeviceType = try SimDeviceType(bundle: Bundle(path: bundlePath)!)
        XCTAssertEqual("iPhone8,1", simDeviceType.modelIdentifier)
    }
}
