// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "BeanStandardCyborg",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "StandardCyborgCocoa",
            targets: ["StandardCyborgCocoa"]),
    ],
    dependencies: [
        // no dependencies
    ],
    targets: [
        .target(
            name: "StandardCyborgCocoa",
            dependencies: [],
            path: "StandardCyborgCocoa/StandardCyborgCocoa/StandardCyborgUI"),
    ]
)
