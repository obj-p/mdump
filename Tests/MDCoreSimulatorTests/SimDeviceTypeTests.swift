import XCTest

@testable import MDCoreSimulator

final class SimDeviceTypeTests: XCTestCase {
    func testExample() throws {
        // TODO: pass legit bundle
        let sim = try SimDeviceType(bundle: Bundle.main)
        // TODO: swiftyfyi?
        print(sim.modelIdentifier)
    }
}
