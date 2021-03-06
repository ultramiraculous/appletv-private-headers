/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "ProtocolBuffer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, PBDataReader, NSMutableData, NSURL, NSURLConnection, NSMutableArray, NSDictionary;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject {
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
	NSDictionary *_httpRequestHeaders;	// 56 = 0x38
	double _timeoutSeconds;	// 60 = 0x3c
	CFRunLoopTimerRef _timeoutTimer;	// 68 = 0x44
	NSString *_logRequestToFile;	// 72 = 0x48
	NSString *_logResponseToFile;	// 76 = 0x4c
	NSString *_logEncodedRequestToFile;	// 80 = 0x50
	NSString *_logEncodedResponseToFile;	// 84 = 0x54
	NSArray *_clientCertificates;	// 88 = 0x58
	BOOL _shouldHandleCookies;	// 92 = 0x5c
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned silentLoading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 93 = 0x5d
}
@property(retain, nonatomic) NSURL *URL;	// G=0x31f32159; S=0x31f34309; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x31f320b5; S=0x31f343f9; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x31f32139; S=0x31f34331; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x31f32149; S=0x31f33429; @synthesize=_delegate
@property(retain, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x31f32119; S=0x31f34381; @synthesize=_httpRequestHeaders
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x31f32129; S=0x31f34359; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x31f31f3d; S=0x31f31f51; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x31f3200d; converted property
@property(assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x31f31f6d; S=0x31f31f81; 
@property(retain) NSString *logEncodedRequestToFile;	// G=0x31f32065; S=0x31f32055; converted property
@property(retain) NSString *logEncodedResponseToFile;	// G=0x31f32085; S=0x31f32075; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x31f320e5; S=0x31f343a9; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x31f320d5; S=0x31f343d1; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x31f31fcd; S=0x31f31fe1; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x31f31ffd; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x31f32095; S=0x31f320a5; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) BOOL silentLoading;	// G=0x31f31f9d; S=0x31f31fb1; 
@property(assign, nonatomic) double timeoutSeconds;	// G=0x31f320f5; S=0x31f32105; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x31f320c5; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x31f32039
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x31f33709
// declared property getter: - (id)URL;	// 0x31f32159
- (id)_applicationID;	// 0x31f33149
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x31f32ccd
- (void)_cleanup;	// 0x31f334f9
- (void)_failWithError:(id)error;	// 0x31f32d89
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x31f32d25
- (id)_languageLocale;	// 0x31f33175
- (id)_osVersion;	// 0x31f330a9
- (void)_removeTimeoutTimer;	// 0x31f34269
- (void)_resetTimeoutTimer;	// 0x31f34291
- (void)_sendPayload:(id)payload;	// 0x31f338d9
- (void)_startTimeoutTimer;	// 0x31f341a9
- (void)_timeoutTimerFired;	// 0x31f32169
- (BOOL)_tryParseData;	// 0x31f327c9
- (void)addInternalRequest:(id)request;	// 0x31f332cd
- (void)addRequest:(id)request;	// 0x31f333b1
- (void)cancel;	// 0x31f32f55
- (void)cancelWithErrorCode:(int)errorCode;	// 0x31f32ca1
// declared property getter: - (id)clientCertificates;	// 0x31f320b5
// declared property getter: - (id)connection;	// 0x31f32139
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x31f321b9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x31f3256d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x31f34011
- (void)connectionDidFinishLoading:(id)connection;	// 0x31f32229
- (void)dealloc;	// 0x31f335c5
- (id)decodeResponseData:(id)data;	// 0x31f32051
// declared property getter: - (id)delegate;	// 0x31f32149
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x31f3203d
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x31f3201d
// declared property getter: - (id)httpRequestHeaders;	// 0x31f32119
// declared property getter: - (id)httpResponseHeaders;	// 0x31f32129
// declared property getter: - (BOOL)ignoresResponse;	// 0x31f31f3d
// converted property getter: - (id)internalRequests;	// 0x31f3200d
// declared property getter: - (BOOL)isLoading;	// 0x31f31f6d
- (BOOL)isPaused;	// 0x31f32021
// converted property getter: - (id)logEncodedRequestToFile;	// 0x31f32065
// converted property getter: - (id)logEncodedResponseToFile;	// 0x31f32085
// declared property getter: - (id)logRequestToFile;	// 0x31f320e5
// declared property getter: - (id)logResponseToFile;	// 0x31f320d5
// declared property getter: - (BOOL)needsCancel;	// 0x31f31fcd
- (void)pause;	// 0x31f32e09
- (BOOL)readResponsePreamble:(id)preamble;	// 0x31f32c4d
- (id)requestPreamble;	// 0x31f337a5
// declared property getter: - (id)requests;	// 0x31f31ffd
- (id)responseForInternalRequest:(id)internalRequest;	// 0x31f33249
- (id)responseForRequest:(id)request;	// 0x31f3332d
- (void)resume;	// 0x31f32dc5
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x31f343f9
// declared property setter: - (void)setConnection:(id)connection;	// 0x31f34331
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f33429
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x31f34381
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x31f34359
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x31f31f51
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x31f31f81
// converted property setter: - (void)setLogEncodedRequestToFile:(id)file;	// 0x31f32055
// converted property setter: - (void)setLogEncodedResponseToFile:(id)file;	// 0x31f32075
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x31f343a9
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x31f343d1
- (void)setNeedsCancel;	// 0x31f33411
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x31f31fe1
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x31f320a5
// declared property setter: - (void)setSilentLoading:(BOOL)loading;	// 0x31f31fb1
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x31f32105
// declared property setter: - (void)setURL:(id)url;	// 0x31f34309
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x31f32095
// declared property getter: - (BOOL)silentLoading;	// 0x31f31f9d
- (void)start;	// 0x31f33d15
// declared property getter: - (double)timeoutSeconds;	// 0x31f320f5
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x31f32bd1
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x31f320c5
- (void)writeRequest:(id)request into:(id)into;	// 0x31f3300d
@end

