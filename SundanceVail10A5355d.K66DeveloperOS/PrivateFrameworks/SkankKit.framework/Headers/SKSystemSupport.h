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
+ (id)sharedInstance;	// 0x34f43d6d
- (void)disableWatchdogTimer;	// 0x34f43fbd
- (void)enableWatchdogTimer;	// 0x34f43fd1
- (void)petTheDog:(id)dog;	// 0x34f43f7d
- (int)runCommand:(id)command fork:(BOOL)fork;	// 0x34f43fe9
- (void)setWatchdogInterval:(float)interval;	// 0x34f43e3d
@end

