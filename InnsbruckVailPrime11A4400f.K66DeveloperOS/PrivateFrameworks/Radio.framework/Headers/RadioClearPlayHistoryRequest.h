/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioRequest.h"

@class SSURLConnectionRequest;

@interface RadioClearPlayHistoryRequest : RadioRequest {
	SSURLConnectionRequest *_request;	// 24 = 0x18
}
- (void).cxx_destruct;	// 0x32639a35
- (void)cancel;	// 0x32639479
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x32639499
@end
