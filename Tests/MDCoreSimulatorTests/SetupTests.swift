import MDCoreSimulator

class SetupTests: NSObject {
    override init() {
        try! MDCoreSimulator.loadBundle()
    }
}
