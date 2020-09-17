
#if __has_include("RCTBridgeModule.h")
#import "RCTViewManager.h"
#else
#import <React/RCTViewManager.h>
#endif

#import "SCSiriWaveformView.h"

@interface RNSiriWaveView : RCTViewManager

@property (nonatomic, assign) CGFloat decibels;

@end
  
