/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer;

@interface SKSystemSupport : NSObject {
	NSTimer *_petTheDog;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x3027ea45
- (void)disableWatchdogTimer;	// 0x3027ec95
- (void)enableWatchdogTimer;	// 0x3027eca9
- (void)petTheDog:(id)dog;	// 0x3027ec55
- (int)runCommand:(id)command fork:(BOOL)fork;	// 0x3027ecc1
- (void)setWatchdogInterval:(float)interval;	// 0x3027eb15
@end

