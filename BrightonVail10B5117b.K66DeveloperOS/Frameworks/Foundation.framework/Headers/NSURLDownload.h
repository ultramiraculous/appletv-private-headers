/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"

@class NSURLDownloadInternal;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
	NSURLDownloadInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL deletesFileUponFailure;	// G=0x31a237a1; S=0x31a2377d; converted property
+ (id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x31a23049
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x31a22e75
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x31a2310d
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x31a2383d
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x31a237c9
- (id)init;	// 0x31a22b61
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x31a22bd5
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x31a23355
- (id)_delegate;	// 0x31a239ed
- (BOOL)_deletesFileAfterFailure;	// 0x31a23755
- (id)_directoryPath;	// 0x31a23855
- (BOOL)_downloadActive;	// 0x31a23a0d
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x31a22ec9
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x31a22db1
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x31a2309d
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x31a23155
- (id)_originatingURL;	// 0x31a2396d
- (id)_resumeInformation;	// 0x31a23555
- (void)_setDelegate:(id)delegate;	// 0x31a238a5
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x31a23731
- (void)_setDirectoryPath:(id)path;	// 0x31a238fd
- (void)_setOriginatingURL:(id)url;	// 0x31a23949
- (void)cancel;	// 0x31a23629
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x31a22a4d
- (void)cleanupChallenges;	// 0x31a2290d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x31a229ed
- (void)dealloc;	// 0x31a235dd
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x31a237a1
- (void)releaseDelegate;	// 0x31a239b1
- (id)request;	// 0x31a23661
- (id)resumeData;	// 0x31a23599
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x31a240f1
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x31a23f09
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x31a23f79
- (void)sendDidFail:(CFErrorRef)send;	// 0x31a24069
- (void)sendDidFinish;	// 0x31a23ffd
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x31a23c2d
- (void)sendDidReceiveData:(long)send;	// 0x31a23e25
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x31a23d05
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x31a23a2d
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x31a23bbd
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x31a23e95
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x31a23d91
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x31a23aad
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x31a2377d
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x31a236d5
- (id)url;	// 0x31a237d9
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x31a22975
@end
