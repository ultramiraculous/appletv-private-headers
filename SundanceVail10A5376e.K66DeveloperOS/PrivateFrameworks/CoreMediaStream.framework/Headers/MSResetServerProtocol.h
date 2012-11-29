/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"


@interface MSResetServerProtocol : MSStreamsProtocol {
	MSRSPCContext _context;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x316a0a79; S=0x316a0aa5; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x316a0ad1
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x316a0d3d
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x316a0c69
- (void)abort;	// 0x316a0bbd
- (void)dealloc;	// 0x316a0bd1
// converted property getter: - (id)delegate;	// 0x316a0a79
- (void)resetServerState;	// 0x316a0c19
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x316a0aa5
@end
