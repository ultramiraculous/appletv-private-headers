/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "ProtocolBuffer-Structs.h"

@class NSURL, NSURLConnection, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray, PBDataReader, NSMutableData;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	id<PBRequesterDelegate> _delegate;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	PBDataReader *_dataReader;	// 20 = 0x14
	unsigned _lastGoodDataOffset;	// 24 = 0x18
	unsigned _uploadPayloadSize;	// 28 = 0x1c
	int _responseStatusCode;	// 32 = 0x20
	NSMutableArray *_requests;	// 36 = 0x24
	NSMutableArray *_responses;	// 40 = 0x28
	NSMutableArray *_internalRequests;	// 44 = 0x2c
	NSMutableArray *_internalResponses;	// 48 = 0x30
	NSDictionary *_httpResponseHeaders;	// 52 = 0x34
	NSMutableDictionary *_httpRequestHeaders;	// 56 = 0x38
	double _timeoutSeconds;	// 60 = 0x3c
	CFRunLoopTimerRef _timeoutTimer;	// 68 = 0x44
	NSString *_logRequestToFile;	// 72 = 0x48
	NSString *_logResponseToFile;	// 76 = 0x4c
	NSArray *_clientCertificates;	// 80 = 0x50
	BOOL _shouldHandleCookies;	// 84 = 0x54
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 85 = 0x55
}
@property(retain, nonatomic) NSURL *URL;	// G=0x33fc63d5; S=0x33fc63e5; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x33fc6525; S=0x33fc6535; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x33fc6419; S=0x33fc6429; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x33fc6409; S=0x33fc4119; @synthesize=_delegate
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x33fc445d; S=0x33fc446d; 
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x33fc644d; S=0x33fc645d; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x33fc40e1; S=0x33fc40f5; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x33fc4351; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x33fc64ad; S=0x33fc64bd; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x33fc64e1; S=0x33fc64f1; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x33fc41fd; S=0x33fc4211; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x33fc4249; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x33fc6559; S=0x33fc6569; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) double timeoutSeconds;	// G=0x33fc6481; S=0x33fc6499; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x33fc6515; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x33fc63c1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x33fc3e19
// declared property getter: - (id)URL;	// 0x33fc63d5
- (id)_applicationID;	// 0x33fc460d
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x33fc53e5
- (void)_cleanup;	// 0x33fc4001
- (void)_failWithError:(id)error;	// 0x33fc5335
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x33fc5375
- (id)_languageLocale;	// 0x33fc452d
- (id)_osVersion;	// 0x33fc4641
- (void)_removeTimeoutTimer;	// 0x33fc62bd
- (void)_resetTimeoutTimer;	// 0x33fc62ed
- (void)_sendPayload:(id)payload;	// 0x33fc4931
- (void)_startTimeoutTimer;	// 0x33fc61cd
- (void)_timeoutTimerFired;	// 0x33fc6369
- (BOOL)_tryParseData;	// 0x33fc5581
- (void)addInternalRequest:(id)request;	// 0x33fc4361
- (void)addRequest:(id)request;	// 0x33fc4259
- (void)cancel;	// 0x33fc50d9
- (void)cancelWithErrorCode:(int)errorCode;	// 0x33fc5471
// declared property getter: - (id)clientCertificates;	// 0x33fc6525
// declared property getter: - (id)connection;	// 0x33fc6419
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33fc614d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33fc5bb9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33fc59fd
- (void)connectionDidFinishLoading:(id)connection;	// 0x33fc5e29
- (void)dealloc;	// 0x33fc3e9d
- (id)decodeResponseData:(id)data;	// 0x33fc63d1
// declared property getter: - (id)delegate;	// 0x33fc6409
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x33fc63c5
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x33fc4459
// declared property getter: - (id)httpRequestHeaders;	// 0x33fc445d
// declared property getter: - (id)httpResponseHeaders;	// 0x33fc644d
// declared property getter: - (BOOL)ignoresResponse;	// 0x33fc40e1
// converted property getter: - (id)internalRequests;	// 0x33fc4351
- (BOOL)isPaused;	// 0x33fc52d1
// declared property getter: - (id)logRequestToFile;	// 0x33fc64ad
// declared property getter: - (id)logResponseToFile;	// 0x33fc64e1
// declared property getter: - (BOOL)needsCancel;	// 0x33fc41fd
- (void)pause;	// 0x33fc5179
- (BOOL)readResponsePreamble:(id)preamble;	// 0x33fc549d
- (id)requestPreamble;	// 0x33fc46f5
// declared property getter: - (id)requests;	// 0x33fc4249
- (id)responseForInternalRequest:(id)internalRequest;	// 0x33fc43c9
- (id)responseForRequest:(id)request;	// 0x33fc42c1
- (void)resume;	// 0x33fc52e5
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x33fc6535
// declared property setter: - (void)setConnection:(id)connection;	// 0x33fc6429
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fc4119
- (void)setHttpRequestHeader:(id)header forKey:(id)key;	// 0x33fc44b1
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x33fc446d
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x33fc645d
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x33fc40f5
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x33fc64bd
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x33fc64f1
- (void)setNeedsCancel;	// 0x33fc4235
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x33fc4211
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x33fc6569
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x33fc6499
// declared property setter: - (void)setURL:(id)url;	// 0x33fc63e5
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x33fc6559
- (void)start;	// 0x33fc4d91
// declared property getter: - (double)timeoutSeconds;	// 0x33fc6481
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x33fc54f9
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x33fc6515
- (void)writeRequest:(id)request into:(id)into;	// 0x33fc4885
@end
