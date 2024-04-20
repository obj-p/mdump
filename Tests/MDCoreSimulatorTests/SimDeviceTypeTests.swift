import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testExample() throws {
        let foo = SimDeviceType()
        print(foo.bundle)
        print(foo.modelIdentifier)
    }
}
