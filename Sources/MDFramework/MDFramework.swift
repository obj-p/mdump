import Foundation

@objc public protocol MDFramework {
    static var bundlePath: String { get }
}

public extension MDFramework {
    static func loadBundle() throws {
        guard let bundle = Bundle(path: bundlePath) else {
            throw BundlePathError(path: bundlePath)
        }

        try bundle.loadAndReturnError()
    }
}

public struct BundlePathError: Error {
    public let path: String
}
