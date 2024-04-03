import Foundation

@objc public protocol MDFramework {
    static var bundlePath: String { get }
}

public extension MDFramework {
    static func loadBundle() throws {
        let bundle = Bundle(path: bundlePath)
        guard let bundle else {
            // TODO: throw specific error
            return
        }

        try bundle.loadAndReturnError()
    }
}
