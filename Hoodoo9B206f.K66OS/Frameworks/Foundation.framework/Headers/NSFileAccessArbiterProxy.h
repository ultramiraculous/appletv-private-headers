/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSFileAccessArbiter.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
@private
	xpc_connection_s *_server;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x31df79b5
- (id)initWithServer:(xpc_connection_s *)server;	// 0x31df608d
- (id)_idForReactor:(id)reactor;	// 0x31df61cd
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x31df7c8d
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x31df812d
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x31df82d9
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x31df8585
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x31df9281
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x31df995d
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x31df8d2d
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x31df9139
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x31df92ad
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x31df7a45
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x31df9d21
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x31df9989
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x31df627d
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x31df6315
- (void)addFilePresenter:(id)presenter;	// 0x31df6e2d
- (void)addFileProvider:(id)provider;	// 0x31df732d
- (void)cancelAccessClaimForID:(id)anId;	// 0x31df68cd
- (void)dealloc;	// 0x31df60f5
- (id)filePresenters;	// 0x31df7159
- (id)fileProviders;	// 0x31df7625
- (void)finalize;	// 0x31df6179
- (dispatch_semaphore_s *)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x31df63ad
- (void)grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;	// 0x31df664d
- (void)handleCanceledServer;	// 0x31dfa709
- (void)handleMessage:(void *)message;	// 0x31df9e25
- (id)idForFileReactor:(id)fileReactor;	// 0x31df77f9
- (void)removeFilePresenter:(id)presenter;	// 0x31df6fd9
- (void)removeFileProvider:(id)provider;	// 0x31df74d9
- (void)revokeAccessClaimForID:(id)anId;	// 0x31df6549
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x31df67c9
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x31df6cf9
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x31df69d1
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x31df6b39
@end

