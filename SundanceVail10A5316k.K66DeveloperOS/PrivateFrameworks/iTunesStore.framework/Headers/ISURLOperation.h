/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class SSAuthenticationContext, NSURLConnection, NSMutableData, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLRequestProperties, ISDataProvider, NSURLRequest;
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
	BOOL _usesPrivateCookieStore;	// 97 = 0x61
}
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x33522781; S=0x33522799; @synthesize
@property(assign, getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore;	// G=0x335227b1; S=0x335227c9; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x33522715; S=0x33522729; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x33522739; S=0x3352274d; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x3351eee1; S=0x3351efbd; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x3351ef5d; S=0x3351f031; 
@property(retain) NSURLResponse *response;	// G=0x3352275d; S=0x33522771; @synthesize=_response
+ (id)copyUserAgent;	// 0x3351ee55
- (id)init;	// 0x3351ecf5
- (id)_accountIdentifier;	// 0x3352029d
- (id)_activeURL;	// 0x335210e9
- (id)_copyAcceptLanguageString;	// 0x33521109
- (id)_copyAuthenticationContext;	// 0x33520345
- (id)_copyConnectionProperties;	// 0x335211b9
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x33521275
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x3352139d
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x33521461
- (void)_handleFinishedLoading;	// 0x33520509
- (void)_handleReceivedData:(id)data;	// 0x33520829
- (void)_handleReceivedResponse:(id)response;	// 0x33520915
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x33520ecd
- (void)_logRequest:(id)request;	// 0x33521661
- (void)_logResponseBody:(id)body;	// 0x3352181d
- (id)_requestProperties;	// 0x3352036d
- (void)_retry;	// 0x3352197d
- (void)_run;	// 0x33521b15
- (BOOL)_runRequestWithURL:(id)url;	// 0x33521bf5
- (id)_sanitizedDescriptionForObject:(id)object;	// 0x335203cd
- (id)_sanitizedStringForString:(id)string;	// 0x335203fd
- (id)_sanitizedURLForURL:(id)url;	// 0x33520479
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x33522271
- (void)_sendOutputToDelegate:(id)delegate;	// 0x33522339
- (void)_sendRequestToDelegate:(id)delegate;	// 0x335223bd
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3352241d
- (void)_setActiveURLRequest:(id)request;	// 0x335224a1
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x33522799
// declared property setter: - (void)_setUsesPrivateCookieStore:(BOOL)store;	// 0x335227c9
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x33522781
- (void)_stopConnection;	// 0x335224e5
- (void)_stopIfCancelled;	// 0x33522521
- (void)_updateProgress;	// 0x33522555
// declared property getter: - (BOOL)_usesPrivateCookieStore;	// 0x335227b1
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x33522671
// declared property getter: - (id)authenticationContext;	// 0x33522715
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3351fbcd
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3351fc8d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3351fca1
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3351fcb5
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3351ff01
- (void)connectionDidFinishLoading:(id)connection;	// 0x3352028d
// declared property getter: - (id)dataProvider;	// 0x33522739
- (void)dealloc;	// 0x3351ed79
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x3351f389
- (void)handleResponse:(id)response;	// 0x3351f4f9
- (id)newRequestWithURL:(id)url;	// 0x3351f4fd
// converted property getter: - (id)request;	// 0x3351eee1
// declared property getter: - (id)requestProperties;	// 0x3351ef5d
// declared property getter: - (id)response;	// 0x3352275d
- (void)run;	// 0x3351f099
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x33522729
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x3352274d
// converted property setter: - (void)setRequest:(id)request;	// 0x3351efbd
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x3351f031
// declared property setter: - (void)setResponse:(id)response;	// 0x33522771
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x3351fbc1
@end

