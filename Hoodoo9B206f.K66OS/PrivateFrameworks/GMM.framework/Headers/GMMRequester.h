/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequester.h> // Unknown library

@class NSArray, NSThread;

@interface GMMRequester : PBRequester {
	GMMRequester *_pbRequester;	// 88 = 0x58
	NSArray *_bundleIdentifiers;	// 92 = 0x5c
	BOOL _anonymous;	// 96 = 0x60
	NSThread *_thread;	// 100 = 0x64
	BOOL _automaticallyCancelled;	// 104 = 0x68
	BOOL _disableReplay;	// 105 = 0x69
}
@property(assign, nonatomic, getter=isAnonymous) BOOL anonymous;	// G=0x33cd5f35; S=0x33cd5f45; @synthesize=_anonymous
@property(retain, nonatomic) NSArray *bundleIdentifiers;	// G=0x33cd5f55; S=0x33cd5f65; @synthesize=_bundleIdentifiers
@property(assign) BOOL disableReplay;	// G=0x33cd5f89; S=0x33cd5f99; @synthesize=_disableReplay
@property(readonly, assign) BOOL wasAutomaticallyCancelled;	// G=0x33cd5fa9; @synthesize=_automaticallyCancelled
+ (id)_requestHTTPHeaders;	// 0x33cd5531
+ (void)_resetRequestCounts;	// 0x33cd5251
+ (void)_setupNetworkConfiguration;	// 0x33cd527d
+ (BOOL)allowRequests:(id)requests;	// 0x33cd532d
- (id)initWithRequesterDelegate:(id)requesterDelegate;	// 0x33cd5611
- (void)_applicationDidEnterBackground:(id)_application;	// 0x33cd5e19
- (void)_applicationWillEnterForeground:(id)_application;	// 0x33cd5eb1
- (void)_handleResumeOnThread;	// 0x33cd5f25
- (void)_handleSuspendOnThread;	// 0x33cd5e55
- (void)_prepareClientProperties;	// 0x33cd57b9
// declared property getter: - (id)bundleIdentifiers;	// 0x33cd5f55
- (void)dealloc;	// 0x33cd573d
// declared property getter: - (BOOL)disableReplay;	// 0x33cd5f89
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x33cd5811
// declared property getter: - (BOOL)isAnonymous;	// 0x33cd5f35
- (BOOL)readResponsePreamble:(id)preamble;	// 0x33cd5ce9
- (id)requestPreamble;	// 0x33cd59e9
// declared property setter: - (void)setAnonymous:(BOOL)anonymous;	// 0x33cd5f45
// declared property setter: - (void)setBundleIdentifiers:(id)identifiers;	// 0x33cd5f65
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x33cd5f99
- (void)start;	// 0x33cd5855
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x33cd5d45
// declared property getter: - (BOOL)wasAutomaticallyCancelled;	// 0x33cd5fa9
- (void)writeRequest:(id)request into:(id)into;	// 0x33cd5bf1
@end

