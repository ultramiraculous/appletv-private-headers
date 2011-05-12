/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequester.h> // Unknown library

@class NSArray, NSThread;

@interface GMMRequester : PBRequester {
@private
	GMMRequester *_pbRequester;	// 96 = 0x60
	NSArray *_bundleIdentifiers;	// 100 = 0x64
	BOOL _anonymous;	// 104 = 0x68
	NSThread *_thread;	// 108 = 0x6c
	BOOL _automaticallyCancelled;	// 112 = 0x70
	BOOL _disableReplay;	// 113 = 0x71
}
@property(assign, nonatomic, getter=isAnonymous) BOOL anonymous;	// G=0x32ba3f3d; S=0x32ba3f4d; @synthesize=_anonymous
@property(retain, nonatomic) NSArray *bundleIdentifiers;	// G=0x32ba3f2d; S=0x32ba46a5; @synthesize=_bundleIdentifiers
@property(assign) BOOL disableReplay;	// G=0x32ba3f0d; S=0x32ba3f1d; @synthesize=_disableReplay
@property(readonly, assign) BOOL wasAutomaticallyCancelled;	// G=0x32ba3efd; @synthesize=_automaticallyCancelled
+ (id)_requestHTTPHeaders;	// 0x32ba4855
+ (void)_resetRequestCounts;	// 0x32ba46cd
+ (void)_setupNetworkConfiguration;	// 0x32ba47b5
+ (BOOL)allowRequestForType:(int)type;	// 0x32ba46f1
- (id)initWithRequesterDelegate:(id)requesterDelegate;	// 0x32ba4345
- (void)_applicationDidEnterBackground:(id)_application;	// 0x32ba402d
- (void)_applicationWillEnterForeground:(id)_application;	// 0x32ba3f71
- (void)_handleResumeOnThread;	// 0x32ba3f5d
- (void)_handleSuspendOnThread;	// 0x32ba3fd9
- (void)_prepareClientProperties;	// 0x32ba4459
// declared property getter: - (id)bundleIdentifiers;	// 0x32ba3f2d
- (void)dealloc;	// 0x32ba42d5
// declared property getter: - (BOOL)disableReplay;	// 0x32ba3f0d
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x32ba44a5
// declared property getter: - (BOOL)isAnonymous;	// 0x32ba3f3d
- (BOOL)readResponsePreamble:(id)preamble;	// 0x32ba4131
- (id)requestPreamble;	// 0x32ba4929
// declared property setter: - (void)setAnonymous:(BOOL)anonymous;	// 0x32ba3f4d
// declared property setter: - (void)setBundleIdentifiers:(id)identifiers;	// 0x32ba46a5
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x32ba3f1d
- (void)setLoading:(BOOL)loading;	// 0x32ba4269
- (void)start;	// 0x32ba44e1
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x32ba406d
// declared property getter: - (BOOL)wasAutomaticallyCancelled;	// 0x32ba3efd
- (void)writeRequest:(id)request into:(id)into;	// 0x32ba4185
@end
