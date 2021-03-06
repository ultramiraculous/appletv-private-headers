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
@property(readonly, assign, nonatomic) NSString *serverIdentifier;	// G=0x33389081; @synthesize=_serverIdentifier
- (id)init;	// 0x33388ff1
- (BOOL)_connectIfNecessary;	// 0x3338926d
- (id)_serviceName;	// 0x33389125
- (void)dealloc;	// 0x3338901d
- (void)sendSimpleMessageForKey:(int)key;	// 0x33389129
- (BOOL)sendSimpleMessageWithResult:(int)result;	// 0x333891ad
// declared property getter: - (id)serverIdentifier;	// 0x33389081
@end

