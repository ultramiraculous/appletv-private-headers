/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class MicroPaymentQueueRequest, NSString, MicroPaymentQueueResponse;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation {
@private
	MicroPaymentQueueRequest *_request;	// 60 = 0x3c
	MicroPaymentQueueResponse *_response;	// 64 = 0x40
	NSString *_urlBagKey;	// 68 = 0x44
}
@property(retain) NSString *URLBagKey;	// G=0x33beded5; S=0x33bedee9; @synthesize=_urlBagKey
@property(copy) MicroPaymentQueueRequest *request;	// G=0x33bede65; S=0x33bede79; @synthesize=_request
@property(retain) MicroPaymentQueueResponse *response;	// G=0x33bede9d; S=0x33bedeb1; @synthesize=_response
// declared property getter: - (id)URLBagKey;	// 0x33beded5
- (BOOL)_appendRangeRequestsToResponse:(id)response error:(id *)error;	// 0x33bed985
- (BOOL)_loadResponseReturningError:(id *)error;	// 0x33bedb81
- (BOOL)_parsePropertyList:(id)list error:(id *)error;	// 0x33bedd25
- (void)dealloc;	// 0x33bed881
// declared property getter: - (id)request;	// 0x33bede65
// declared property getter: - (id)response;	// 0x33bede9d
- (void)run;	// 0x33bed8f5
// declared property setter: - (void)setRequest:(id)request;	// 0x33bede79
// declared property setter: - (void)setResponse:(id)response;	// 0x33bedeb1
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x33bedee9
@end

