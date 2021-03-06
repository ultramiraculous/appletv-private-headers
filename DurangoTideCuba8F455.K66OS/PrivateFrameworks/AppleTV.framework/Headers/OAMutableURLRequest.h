/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSMutableURLRequest.h> // Unknown library

@class NSString, OAConsumer, OAToken;

__attribute__((visibility("hidden")))
@interface OAMutableURLRequest : NSMutableURLRequest {
@private
	OAConsumer *consumer;	// 8 = 0x8
	OAToken *token;	// 12 = 0xc
	NSString *realm;	// 16 = 0x10
	NSString *verifier;	// 20 = 0x14
	NSString *signature;	// 24 = 0x18
	NSString *nonce;	// 28 = 0x1c
	NSString *timestamp;	// 32 = 0x20
}
@property(retain) OAConsumer *consumer;	// G=0x3073b3f4; S=0x3073b4d4; @synthesize
@property(copy) NSString *nonce;	// G=0x3073b494; S=0x3073b5e0; @synthesize
@property(copy) NSString *realm;	// G=0x3073b434; S=0x3073b544; @synthesize
@property(copy) NSString *signature;	// G=0x3073b474; S=0x3073b5ac; @synthesize
@property(copy) NSString *timestamp;	// G=0x3073b4b4; S=0x3073b614; @synthesize
@property(retain) OAToken *token;	// G=0x3073b414; S=0x3073b50c; @synthesize
@property(copy) NSString *verifier;	// G=0x3073b454; S=0x3073b578; @synthesize
+ (id)requestWithURL:(id)url consumer:(id)consumer token:(id)token realm:(id)realm verifier:(id)verifier;	// 0x3073ac1c
- (id)initWithURL:(id)url consumer:(id)consumer token:(id)token realm:(id)realm verifier:(id)verifier;	// 0x3073ad60
// declared property getter: - (id)consumer;	// 0x3073b3f4
- (void)dealloc;	// 0x3073ac94
// declared property getter: - (id)nonce;	// 0x3073b494
- (void)prepare;	// 0x3073a7d8
// declared property getter: - (id)realm;	// 0x3073b434
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x3073b4d4
// declared property setter: - (void)setNonce:(id)nonce;	// 0x3073b5e0
// declared property setter: - (void)setRealm:(id)realm;	// 0x3073b544
// declared property setter: - (void)setSignature:(id)signature;	// 0x3073b5ac
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x3073b614
// declared property setter: - (void)setToken:(id)token;	// 0x3073b50c
// declared property setter: - (void)setVerifier:(id)verifier;	// 0x3073b578
// declared property getter: - (id)signature;	// 0x3073b474
- (id)signatureBaseString;	// 0x3073af6c
// declared property getter: - (id)timestamp;	// 0x3073b4b4
// declared property getter: - (id)token;	// 0x3073b414
// declared property getter: - (id)verifier;	// 0x3073b454
@end

