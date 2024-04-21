import XCTest

@testable import MDCoreSimulator

final class SimProfileBundleTests: XCTestCase {
    func testExample() throws {
        let simProfileBundle = try SimProfileBundle(path: Directories.deviceType(.iPhone14_7))
        
        XCTAssertNotNil(simProfileBundle)
    }
}
