/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSData, NSDictionary;

@interface HSResponse : NSObject {
	CFHTTPMessageRef _CFHTTPMessage;	// 4 = 0x4
	NSData *_responseData;	// 8 = 0x8
	unsigned _responseCode;	// 12 = 0xc
	NSDictionary *_responseHeaderFields;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(assign, nonatomic) CFHTTPMessageRef CFHTTPMessage;	// G=0x342a1419; S=0x342a13e5; @synthesize=_CFHTTPMessage
@property(readonly, assign, nonatomic) NSError *error;	// G=0x342a1459; @synthesize=_error
@property(readonly, assign, nonatomic) unsigned responseCode;	// G=0x342a1439; @synthesize=_responseCode
@property(readonly, assign, nonatomic) NSData *responseData;	// G=0x342a1429; @synthesize=_responseData
@property(readonly, assign, nonatomic) NSDictionary *responseHeaderFields;	// G=0x342a1449; @synthesize=_responseHeaderFields
+ (id)responseWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x342a1249
+ (id)responseWithResponse:(id)response;	// 0x342a12a5
- (id)initWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x342a1115
// declared property getter: - (CFHTTPMessageRef)CFHTTPMessage;	// 0x342a1419
- (void)dealloc;	// 0x342a11bd
- (id)description;	// 0x342a1359
// declared property getter: - (id)error;	// 0x342a1459
// declared property getter: - (unsigned)responseCode;	// 0x342a1439
// declared property getter: - (id)responseData;	// 0x342a1429
// declared property getter: - (id)responseHeaderFields;	// 0x342a1449
// declared property setter: - (void)setCFHTTPMessage:(CFHTTPMessageRef)message;	// 0x342a13e5
@end

