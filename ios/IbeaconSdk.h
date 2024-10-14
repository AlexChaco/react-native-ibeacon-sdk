
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNIbeaconSdkSpec.h"

@interface IbeaconSdk : NSObject <NativeIbeaconSdkSpec>
#else
#import <React/RCTBridgeModule.h>

@interface IbeaconSdk : NSObject <RCTBridgeModule>
#endif

@end
