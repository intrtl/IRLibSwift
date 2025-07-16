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
  
post_install do |installer|
 installer.pods_project.targets.each do |target|
  if target.name == "GRDB.swift"
   target.build_configurations.each do |config|
    config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
   end
  end
 end
end

```

4. Run `pod install` via terminal in directory with your project.
