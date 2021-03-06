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
@property(assign) id delegate;	// G=0x3075acd1; S=0x3075acfd; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3075ad29
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x3075af95
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x3075aec1
- (void)abort;	// 0x3075ae15
- (void)dealloc;	// 0x3075ae29
// converted property getter: - (id)delegate;	// 0x3075acd1
- (void)resetServerState;	// 0x3075ae71
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3075acfd
@end

