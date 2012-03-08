/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, XPCClient, NSString;

__attribute__((visibility("hidden")))
@interface RequestQueueOperation : ISOperation {
@private
	XPCClient *_client;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _disconnected;	// 68 = 0x44
	NSString *_requestGroupIdentifier;	// 72 = 0x48
	NSString *_requestIdentifier;	// 76 = 0x4c
}
@property(retain) XPCClient *client;	// G=0x3040aca5; S=0x3040adf9; 
@property(assign, getter=isClientConnected) BOOL clientConnected;	// G=0x3040adb5; S=0x3040ae61; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x3040aea9; S=0x3040aebd; @synthesize=_clientIdentity
@property(retain) NSString *requestGroupIdentifier;	// G=0x3040aee1; S=0x3040aef5; @synthesize=_requestGroupIdentifier
@property(retain) NSString *requestIdentifier;	// G=0x3040af19; S=0x3040af2d; @synthesize=_requestIdentifier
- (id)initWithRequest:(id)request;	// 0x3040ab91
// declared property getter: - (id)client;	// 0x3040aca5
// declared property getter: - (id)clientIdentity;	// 0x3040aea9
- (id)copyRequest;	// 0x3040ad05
- (id)copyResponseDictionary;	// 0x3040ad09
- (void)dealloc;	// 0x3040ac1d
// declared property getter: - (BOOL)isClientConnected;	// 0x3040adb5
// declared property getter: - (id)requestGroupIdentifier;	// 0x3040aee1
// declared property getter: - (id)requestIdentifier;	// 0x3040af19
// declared property setter: - (void)setClient:(id)client;	// 0x3040adf9
// declared property setter: - (void)setClientConnected:(BOOL)connected;	// 0x3040ae61
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x3040aebd
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x3040aef5
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x3040af2d
@end
