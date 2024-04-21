enum Directories {
    static let coreSimulator = "\(developer)/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator"
    static let developer = "/Applications/Xcode.app/Contents/Developer"
    static let deviceType = "\(coreSimulator)/Profiles/DeviceTypes"
    
    static func deviceType(_ device: Device) -> String {
        let simDeviceType =
        switch device {
        case .iPhone14_7:
            "iPhone 14.simdevicetype"
        }
        
        return "\(deviceType)/\(simDeviceType)"
    }
}
