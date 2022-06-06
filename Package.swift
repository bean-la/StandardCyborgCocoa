// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "BeanStandardCyborg",
    platforms: [
        .iOS(.v12),
    ],
    products: [
        .library(
            name: "StandardCyborgUI",
            targets: ["StandardCyborgUI"]),
    ],
    dependencies: [
        // no dependencies
    ],
    targets: [
        .target(
            name: "StandardCyborgUI",
            dependencies: []),
        .testTarget(
            name: "StandardCyborgUITests",
            dependencies: ["StandardCyborgUI"]),
    ]
)
