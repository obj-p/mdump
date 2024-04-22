import XCTest

@testable import MDCoreSimulator

final class SimProfileBundleTests: XCTestCase {
    func testExtraCheckMap() {
        let map = SimProfileBundle.extraCheckMap()
        
        XCTAssertEqual(
            ["Contents/Resources/RuntimeRoot/System/Library/CoreServices/SystemVersion.plist"],
            map["simruntime"] as? [String]
        )
    }
    
    func testInitWithPath() throws {
        // Given
        let iPhone14Path = Directories.deviceType(.iPhone14_7)
        
        // When
        let simProfileBundle = try SimProfileBundle(path: iPhone14Path)
        
        // Then
        XCTAssertEqual("\(iPhone14Path)/Contents/Info.plist", simProfileBundle.infoPlistPath)
    }
    
    func testIsEqualToProfile() throws {
        // Given
        let iPhone14Path = Directories.deviceType(.iPhone14_7)
        let iPhone15Path = Directories.deviceType(.iPhone15_4)
        let simProfileBundle = try SimProfileBundle(path: iPhone14Path)
        let anEqualSimProfileBundle = try SimProfileBundle(path: iPhone14Path)
        let anUnequalSimProfileBundle = try SimProfileBundle(path: iPhone15Path)
        
        // Then
        XCTAssertTrue(simProfileBundle.isEqual(toProfile: anEqualSimProfileBundle))
        XCTAssertFalse(simProfileBundle.isEqual(toProfile: anUnequalSimProfileBundle))
    }
}
