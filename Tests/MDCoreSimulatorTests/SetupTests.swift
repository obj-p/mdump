import MDCoreSimulator

class SetupTests: NSObject {
    override init() {
        // swiftlint:disable:next force_try
        try! CoreSimulator.loadBundle()
    }
}
