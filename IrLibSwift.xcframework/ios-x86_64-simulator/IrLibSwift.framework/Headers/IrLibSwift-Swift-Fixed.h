// This fix interop between swift and objc, when generated swift header can't see RLMObject and RLMArray superclasses.
#ifndef IrLibSwift_Swift_Fixed_h
#define IrLibSwift_Swift_Fixed_h

@class RLMObject;
//@class RLMArray;
#import <Realm/RLMObject.h>
#import <Realm/RLMArray.h>

#import "IrLibSwift-Swift.h"

#endif /* IrLibSwift_Swift_Fixed_h */
