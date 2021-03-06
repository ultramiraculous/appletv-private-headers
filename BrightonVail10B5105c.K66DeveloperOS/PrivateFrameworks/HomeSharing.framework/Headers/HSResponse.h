/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSError;

@interface HSResponse : NSObject {
	CFHTTPMessageRef _CFHTTPMessage;	// 4 = 0x4
	NSData *_responseData;	// 8 = 0x8
	unsigned _responseCode;	// 12 = 0xc
	NSDictionary *_responseHeaderFields;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(assign, nonatomic) CFHTTPMessageRef CFHTTPMessage;	// G=0x35604a91; S=0x35604a5d; @synthesize=_CFHTTPMessage
@property(readonly, assign, nonatomic) NSError *error;	// G=0x35604ad1; @synthesize=_error
@property(readonly, assign, nonatomic) unsigned responseCode;	// G=0x35604ab1; @synthesize=_responseCode
@property(readonly, assign, nonatomic) NSData *responseData;	// G=0x35604aa1; @synthesize=_responseData
@property(readonly, assign, nonatomic) NSDictionary *responseHeaderFields;	// G=0x35604ac1; @synthesize=_responseHeaderFields
+ (id)responseWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x356048c1
+ (id)responseWithResponse:(id)response;	// 0x3560491d
- (id)initWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x3560478d
// declared property getter: - (CFHTTPMessageRef)CFHTTPMessage;	// 0x35604a91
- (void)dealloc;	// 0x35604835
- (id)description;	// 0x356049d1
// declared property getter: - (id)error;	// 0x35604ad1
// declared property getter: - (unsigned)responseCode;	// 0x35604ab1
// declared property getter: - (id)responseData;	// 0x35604aa1
// declared property getter: - (id)responseHeaderFields;	// 0x35604ac1
// declared property setter: - (void)setCFHTTPMessage:(CFHTTPMessageRef)message;	// 0x35604a5d
@end

