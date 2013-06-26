/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>


@interface MPServerObjectProxy : NSObject {
	unsigned _didPrepareForRemoteSelectorInvocation : 1;	// 4 = 0x4
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;	// 4 = 0x4
	double _lastPrepareAttemptTime;	// 8 = 0x8
}
+ (id)_center;	// 0x2e2bc6e9
- (id)init;	// 0x2e2bc23d
- (void)_messagingCenterDied:(id)died;	// 0x2e2bc741
- (BOOL)_performRemoteSelector:(SEL)selector userInfo:(id)info timeout:(double)timeout;	// 0x2e2bc791
- (id)_performRemoteSelectorAndReceiveReply:(SEL)reply userInfo:(id)info timeout:(double)timeout;	// 0x2e2bc8e9
- (void)_serverConnectionDied;	// 0x2e2bc76d
- (void)dealloc;	// 0x2e2bc2e5
- (void)didPrepareForRemoteSelectorInvocation;	// 0x2e2bc6e1
- (void)forwardInvocation:(id)invocation;	// 0x2e2bc379
- (BOOL)prepareForRemoteSelectorInvocation;	// 0x2e2bc54d
- (BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double *)timeout;	// 0x2e2bc551
- (void)serverConnectionDied;	// 0x2e2bc6e5
@end
