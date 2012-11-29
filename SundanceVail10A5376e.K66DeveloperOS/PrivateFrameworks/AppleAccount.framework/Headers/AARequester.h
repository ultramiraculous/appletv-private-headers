/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSOperation.h> // Unknown library

@class NSURLConnection, NSMutableData, AAResponse, NSHTTPURLResponse, AARequest;

@interface AARequester : NSOperation {
	AARequest *_request;	// 12 = 0xc
	AAResponse *_response;	// 16 = 0x10
	NSURLConnection *_urlConnection;	// 20 = 0x14
	id _handler;	// 24 = 0x18
	NSMutableData *_data;	// 28 = 0x1c
	NSHTTPURLResponse *_httpResponse;	// 32 = 0x20
	Class _responseClass;	// 36 = 0x24
	BOOL _isExecuting;	// 40 = 0x28
	BOOL _isFinished;	// 41 = 0x29
	BOOL _canceled;	// 42 = 0x2a
	BOOL _isCanceled;	// 43 = 0x2b
}
@property(assign, getter=isCanceled) BOOL canceled;	// G=0x35fb3231; S=0x35fb3249; @synthesize=_isCanceled
@property(assign, nonatomic, getter=isExecuting) BOOL executing;	// G=0x35fb31e1; S=0x35fb31f1; @synthesize=_isExecuting
@property(assign, getter=isFinished) BOOL finished;	// G=0x35fb3201; S=0x35fb3219; @synthesize=_isFinished
- (id)initWithRequest:(id)request handler:(id)handler;	// 0x35fb2861
- (void).cxx_destruct;	// 0x35fb3261
- (void)_callHandler;	// 0x35fb2c1d
- (void)cancel;	// 0x35fb2985
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x35fb2c71
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35fb30c5
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x35fb2d79
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35fb2f81
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x35fb2f29
- (void)connectionDidFinishLoading:(id)connection;	// 0x35fb2fe9
// declared property getter: - (BOOL)isCanceled;	// 0x35fb3231
// declared property getter: - (BOOL)isExecuting;	// 0x35fb31e1
// declared property getter: - (BOOL)isFinished;	// 0x35fb3201
// declared property setter: - (void)setCanceled:(BOOL)canceled;	// 0x35fb3249
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x35fb31f1
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x35fb3219
- (void)start;	// 0x35fb2a05
@end
