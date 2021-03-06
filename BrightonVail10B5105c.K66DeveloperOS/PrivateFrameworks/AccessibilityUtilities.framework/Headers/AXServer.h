/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class AXIPCServer, AXIPCClient, NSString;

@interface AXServer : NSObject {
	AXIPCClient *_client;	// 4 = 0x4
	AXIPCServer *_server;	// 8 = 0x8
	NSString *_serverIdentifier;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *serverIdentifier;	// G=0x31ca5081; @synthesize=_serverIdentifier
- (id)init;	// 0x31ca4ff1
- (BOOL)_connectIfNecessary;	// 0x31ca526d
- (id)_serviceName;	// 0x31ca5125
- (void)dealloc;	// 0x31ca501d
- (void)sendSimpleMessageForKey:(int)key;	// 0x31ca5129
- (BOOL)sendSimpleMessageWithResult:(int)result;	// 0x31ca51ad
// declared property getter: - (id)serverIdentifier;	// 0x31ca5081
@end

