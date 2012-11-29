/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSLock;

@interface SBLaunchAppListener : NSObject {
	NSString *_displayIdentifier;	// 4 = 0x4
	id _block;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	BOOL _launched;	// 16 = 0x10
	int _notifyToken;	// 20 = 0x14
	int _notifyAppExitedToken;	// 24 = 0x18
	unsigned _notifyRegisterStatus;	// 28 = 0x1c
	unsigned _notifyAppExitedStatus;	// 32 = 0x20
}
+ (BOOL)waitForLaunchThatSpringBoardKnowsAbout:(id)launchThatSpringBoardKnowsAbout timeout:(double)timeout;	// 0x32ef6391
- (id)initWithDisplayIdentifier:(id)displayIdentifier handlerBlock:(id)block;	// 0x32ef5e09
- (void)_didFailToLaunch;	// 0x32ef61bd
- (void)_didLaunch;	// 0x32ef60d5
- (void)dealloc;	// 0x32ef6075
- (void)invalidate;	// 0x32ef62ad
@end
