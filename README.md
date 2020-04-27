## Installation via [Cocoapods](https://cocoapods.org) ##

1. Add repo with Intelligence Retail specs and official Cocoapods specs into your project `Podfile` :

```
     source 'https://github.com/CocoaPods/Specs.git'
     source 'https://github.com/intrtl/specs'
```

2. Add  `use_frameworks!` param to your `Podfile`.

3. Add `IrLibSwift` pod as a dependency to your projects targets:

```
  target 'YourTarget' do
    pod 'IrLibSwift'
  end
```

4. Run `pod install` via terminal in directory with your project.
