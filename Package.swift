// swift-tools-version: 5.9

import PackageDescription

let package = Package(
    name: "xcframeworks",
    platforms: [.macOS(.v13)],
    products: [
        .library(name: "SimulatorKitObjC", targets: ["SimulatorKitObjC"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "SimulatorKitObjC"),
        .testTarget(name: "SimulatorKitObjCTests", dependencies: ["SimulatorKitObjC"]),
    ]
)
