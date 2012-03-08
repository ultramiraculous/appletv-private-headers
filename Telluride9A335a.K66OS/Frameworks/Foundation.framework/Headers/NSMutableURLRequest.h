/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLRequest.h"
#import "Foundation-Structs.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x320cbb5d; S=0x320cbb39; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3201139d
- (id)copyWithZone:(NSZone *)zone;	// 0x320cb589
// converted property getter: - (unsigned)requestPriority;	// 0x320cbb5d
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x3204e3fd
- (void)setBoundInterfaceIdentifier:(id)identifier;	// 0x320cb5bd
- (void)setCachePolicy:(unsigned)policy;	// 0x320cb539
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x320cbba1
- (void)setHTTPBody:(id)body;	// 0x3203b54d
- (void)setHTTPBodyStream:(id)stream;	// 0x320cba31
- (void)setHTTPContentType:(id)type;	// 0x320cba55
- (void)setHTTPExtraCookies:(id)cookies;	// 0x320cba71
- (void)setHTTPMethod:(id)method;	// 0x3203b501
- (void)setHTTPReferrer:(id)referrer;	// 0x320cba95
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x3203b4dd
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x320cbb7d
- (void)setHTTPUserAgent:(id)agent;	// 0x320cbb1d
- (void)setMainDocumentURL:(id)url;	// 0x320cb565
- (void)setNetworkServiceType:(unsigned)type;	// 0x320cb599
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x320cbb39
- (void)setTimeoutInterval:(double)interval;	// 0x3204b615
- (void)setURL:(id)url;	// 0x320cb515
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3203b525
@end
