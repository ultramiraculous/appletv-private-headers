/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, NSString, NSError;
@protocol OS_xpc_object, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject {
@private
	NSObject<OS_xpc_object> *_client;	// 4 = 0x4
	NSString *_claimID;	// 8 = 0x8
	NSString *_purposeIDOrNil;	// 12 = 0xc
	BOOL _cameFromSuperarbiter;	// 16 = 0x10
	unsigned _blockageCount;	// 20 = 0x14
	BOOL _didWait;	// 24 = 0x18
	BOOL _isRevoked;	// 25 = 0x19
	unsigned _claimerBlockageCount;	// 28 = 0x1c
	NSError *_claimerError;	// 32 = 0x20
	NSMutableOrderedSet *_pendingClaims;	// 36 = 0x24
	NSMutableSet *_blockingClaims;	// 40 = 0x28
	NSMutableSet *_blockingReactorIDs;	// 44 = 0x2c
	id _providerCancellationProcedure;	// 48 = 0x30
	NSMutableDictionary *_reacquisitionProceduresByPresenterID;	// 52 = 0x34
	NSMutableArray *_revocationProcedures;	// 56 = 0x38
	id _claimerOrNil;	// 60 = 0x3c
	NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;	// 64 = 0x40
	BOOL _didMakePresentersRelinquishToWriter;	// 68 = 0x44
	BOOL _revokingIsInexorable;	// 69 = 0x45
}
@property(readonly, assign) BOOL cameFromSuperarbiter;	// G=0x31af8ba9; converted property
@property(readonly, retain) NSString *claimID;	// G=0x31af8b21; converted property
@property(retain) NSError *claimerError;	// G=0x31af8cf9; S=0x31af8cb5; converted property
@property(readonly, assign) BOOL didWait;	// G=0x31af8c49; converted property
@property(readonly, assign) BOOL isRevoked;	// G=0x31af9e39; converted property
@property(readonly, retain) NSMutableOrderedSet *pendingClaims;	// G=0x31af9209; converted property
+ (BOOL)canReadingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x31af87d9
+ (BOOL)canWritingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x31af8831
- (id)initWithClient:(id)client claimID:(id)anId purposeID:(id)anId3;	// 0x31af88ad
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31af8999
- (void)addPendingClaim:(id)claim;	// 0x31af9111
- (void)block;	// 0x31af8bb9
- (void)blockClaimer;	// 0x31af8c59
// converted property getter: - (BOOL)cameFromSuperarbiter;	// 0x31af8ba9
- (void)cancelled;	// 0x31af9d3d
// converted property getter: - (id)claimID;	// 0x31af8b21
// converted property getter: - (id)claimerError;	// 0x31af8cf9
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)anId;	// 0x31af8db9
- (id)client;	// 0x31af8b11
- (void)dealloc;	// 0x31af899d
- (id)description;	// 0x31afa185
- (id)descriptionWithIndenting:(id)indenting;	// 0x31af9e4d
- (void)devalueOldClaim:(id)claim;	// 0x31af9e05
- (void)devalueSelf;	// 0x31af9b69
// converted property getter: - (BOOL)didWait;	// 0x31af8c49
- (void)evaluateNewClaim:(id)claim;	// 0x31af8f99
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31af8d31
- (void)finalize;	// 0x31af8acd
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31af8b91
- (void)granted;	// 0x31af9349
- (void)ifSymbolicLinkAtURL:(id)url withResolutionCount:(int *)resolutionCount thenReevaluateSelf:(id)aSelf elseInvokeClaimer:(id)claimer;	// 0x31afa1a1
- (void)invokeClaimer;	// 0x31af9ab1
- (BOOL)isBlockedByClaimWithPurposeID:(id)purposeID;	// 0x31af8eb5
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31af9341
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31af9345
- (BOOL)isGranted;	// 0x31af9e09
// converted property getter: - (BOOL)isRevoked;	// 0x31af9e39
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31af9e49
- (void)makePresentersOfItemAtLocation:(id)location orContainedItem:(BOOL)item relinquishUsingProcedureGetter:(id)getter;	// 0x31af95b9
- (void)makeProviderOfItemAtLocation:(id)location provideThenContinue:(id)aContinue;	// 0x31af934d
- (id)newClaimerWaiter;	// 0x31af9ab5
// converted property getter: - (id)pendingClaims;	// 0x31af9209
- (id)purposeID;	// 0x31af8b59
- (id)purposeIDOfClaimOnItemAtLocation:(id)location forMessagingPresenter:(id)messagingPresenter;	// 0x31afa3b9
- (void)removePendingClaims:(id)claims;	// 0x31af9241
- (void)revoked;	// 0x31af9b29
- (void)setCameFromSuperarbiter;	// 0x31af8b95
// converted property setter: - (void)setClaimerError:(id)error;	// 0x31af8cb5
- (void)unblock;	// 0x31af8be9
- (void)unblockClaimer;	// 0x31af8c89
- (void)whenRevokedPerformProcedure:(id)procedure;	// 0x31af8d35
- (BOOL)willBeRevoked;	// 0x31af9b09
@end

