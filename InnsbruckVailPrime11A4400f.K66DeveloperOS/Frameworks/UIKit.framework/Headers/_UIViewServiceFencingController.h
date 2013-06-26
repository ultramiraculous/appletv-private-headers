/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSMutableSet, NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIViewServiceFencingController : NSObject {
	int _lock;	// 4 = 0x4
	NSMutableSet *_pendingFenceSendRights;	// 8 = 0x8
	NSMutableArray *_resumeActions;	// 12 = 0xc
	unsigned _expectedParticipatingFencingProxyCount;	// 16 = 0x10
	NSTimer *_fencingControlTimeoutTimer;	// 20 = 0x14
}
+ (id)activeFencePort;	// 0x2f904ea9
- (id)init;	// 0x2f904ecd
- (void)_fencingControlTimedOut;	// 0x2f905669
- (void)dealloc;	// 0x2f904f5d
- (void)fencingControlProxy:(id)proxy didBeginFencingWithSendRight:(id)sendRight expectedParticipatingFencingProxyCount:(unsigned)count;	// 0x2f9050d9
- (void)fencingControlProxy:(id)proxy didEndFencingWithSendRight:(id)sendRight;	// 0x2f90533d
@end
