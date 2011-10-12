/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString, NSURL;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
@private
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x31c4efe1; S=0x31c4eff1; @synthesize=_delegate
@property(readonly, assign) NSString *personID;	// G=0x31c4efd1; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x31c4ed41
- (void)_didFailAuthenticationWithError:(id)error;	// 0x31c4efad
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x31c4ef7d
- (void)abort;	// 0x31c4ef69
- (void)dealloc;	// 0x31c4eed5
// declared property getter: - (id)delegate;	// 0x31c4efe1
// declared property getter: - (id)personID;	// 0x31c4efd1
- (void)queryConfiguration;	// 0x31c4ef35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c4eff1
@end

