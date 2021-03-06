/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURLRequest, SSAuthenticationContext, NSURLConnection, NSMutableData, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLRequestProperties, ISDataProvider;
@protocol ISURLOperationDelegate;

@interface ISURLOperation : ISOperation {
	NSURLRequest *_activeURLRequest;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	NSURLConnection *_connection;	// 68 = 0x44
	NSMutableData *_dataBuffer;	// 72 = 0x48
	ISDataProvider *_dataProvider;	// 76 = 0x4c
	int _networkRetryCount;	// 80 = 0x50
	NSCountedSet *_redirectURLs;	// 84 = 0x54
	SSMutableURLRequestProperties *_requestProperties;	// 88 = 0x58
	NSURLResponse *_response;	// 92 = 0x5c
	BOOL _shouldSetCookies;	// 96 = 0x60
}
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x32714391; S=0x327143a1; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x327142e9; S=0x327142fd; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x32714321; S=0x32714335; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x32710d61; S=0x32710e3d; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x32710ddd; S=0x32710eb1; 
@property(retain) NSURLResponse *response;	// G=0x32714359; S=0x3271436d; @synthesize=_response
+ (id)copyUserAgent;	// 0x32710969
- (id)init;	// 0x32710831
- (id)_accountIdentifier;	// 0x32711f85
- (id)_activeURL;	// 0x32712be1
- (id)_copyAcceptLanguageString;	// 0x32712c01
- (id)_copyAuthenticationContext;	// 0x3271202d
- (id)_copyConnectionProperties;	// 0x32712d3d
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x32712df5
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x32712f01
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x32712fbd
- (void)_handleFinishedLoading;	// 0x327120b5
- (void)_handleReceivedData:(id)data;	// 0x32712369
- (void)_handleReceivedResponse:(id)response;	// 0x32712455
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x32712a09
- (void)_logRequest:(id)request;	// 0x327131c5
- (void)_logResponseBody:(id)body;	// 0x32713365
- (id)_requestProperties;	// 0x32712055
- (void)_retry;	// 0x32713495
- (void)_run;	// 0x32713635
- (BOOL)_runRequestWithURL:(id)url;	// 0x327136f9
- (id)_sanitizedStringForString:(id)string;	// 0x32713d49
- (id)_sanitizedURLForURL:(id)url;	// 0x32713dc9
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x32713e5d
- (void)_sendOutputToDelegate:(id)delegate;	// 0x32713f21
- (void)_sendRequestToDelegate:(id)delegate;	// 0x32713f9d
- (void)_sendResponseToDelegate:(id)delegate;	// 0x32713ff5
- (void)_setActiveURLRequest:(id)request;	// 0x32714071
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x327143a1
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x32714391
- (void)_stopConnection;	// 0x327140b5
- (void)_stopIfCancelled;	// 0x327140f1
- (void)_updateProgress;	// 0x32714125
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x32714245
// declared property getter: - (id)authenticationContext;	// 0x327142e9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x327119b9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32711a59
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32711a6d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x32711a81
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x32711cb5
- (void)connectionDidFinishLoading:(id)connection;	// 0x32711f75
// declared property getter: - (id)dataProvider;	// 0x32714321
- (void)dealloc;	// 0x327108a5
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x327111e5
- (void)handleResponse:(id)response;	// 0x32711359
- (id)newRequestWithURL:(id)url;	// 0x3271135d
// converted property getter: - (id)request;	// 0x32710d61
// declared property getter: - (id)requestProperties;	// 0x32710ddd
// declared property getter: - (id)response;	// 0x32714359
- (void)run;	// 0x32710f19
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x327142fd
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x32714335
// converted property setter: - (void)setRequest:(id)request;	// 0x32710e3d
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x32710eb1
// declared property setter: - (void)setResponse:(id)response;	// 0x3271436d
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x327119ad
@end

