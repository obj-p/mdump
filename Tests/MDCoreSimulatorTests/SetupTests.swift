import MDCoreSimulator

class SetupTests: NSObject {
    override init() {
        try! CoreSimulator.loadBundle()
    }
}
