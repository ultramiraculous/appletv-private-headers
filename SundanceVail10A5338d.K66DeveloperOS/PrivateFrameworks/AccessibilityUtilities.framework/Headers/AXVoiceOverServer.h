/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXServer.h"


@interface AXVoiceOverServer : AXServer {
}
+ (id)server;	// 0x35063d7d
- (id)init;	// 0x35063de9
- (BOOL)_connectIfNecessary;	// 0x35063e51
- (id)_serviceName;	// 0x35063e41
- (void)dealloc;	// 0x35063e15
- (void)triggerCommand:(int)command;	// 0x35063f49
@end
