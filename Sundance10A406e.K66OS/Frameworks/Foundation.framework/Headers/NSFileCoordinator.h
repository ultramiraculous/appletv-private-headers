/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMutableDictionary;

@interface NSFileCoordinator : NSObject {
	id _accessArbiter;	// 4 = 0x4
	id _fileReactor;	// 8 = 0x8
	id _purposeID;	// 12 = 0xc
	NSURL *_recentFilePresenterURL;	// 16 = 0x10
	id _accessClaimIDOrIDs;	// 20 = 0x14
	BOOL _isCancelled;	// 24 = 0x18
	NSMutableDictionary *_movedItems;	// 28 = 0x1c
}
@property(retain) id purposeIdentifier;	// G=0x356289a9; S=0x35628965; converted property
+ (void)__itemAtURL:(id)url didDisconnectWithPurposeID:(id)purposeID;	// 0x35628385
+ (void)__itemAtURL:(id)url didGainVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3562852d
+ (void)__itemAtURL:(id)url didLoseVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3562861d
+ (void)__itemAtURL:(id)url didMoveToURL:(id)url2 purposeID:(id)anId;	// 0x35628299
+ (void)__itemAtURL:(id)url didReconnectWithPurposeID:(id)purposeID;	// 0x35628459
+ (void)__itemAtURL:(id)url didResolveConflictVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x3562870d
+ (void)_addFileProvider:(id)provider;	// 0x356287fd
+ (void)_addFileProvider:(id)provider completionHandler:(id)handler;	// 0x3562881d
+ (id)_canonicalURLForURL:(id)url;	// 0x356245e9
+ (id)_currentFileCoordinator;	// 0x356289e1
+ (id)_fileProviders;	// 0x356288a9
+ (void)_removeFileProvider:(id)provider;	// 0x35628865
+ (BOOL)_skipCoordinationWork;	// 0x35625339
+ (void)addFilePresenter:(id)presenter;	// 0x35624329
+ (id)filePresenters;	// 0x356243b1
+ (void)removeFilePresenter:(id)presenter;	// 0x3562436d
- (id)init;	// 0x356243f1
- (id)initWithFilePresenter:(id)filePresenter;	// 0x35624405
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x3562700d
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x356276e5
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x35627385
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x35627aa5
- (void)__prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 byAccessor:(id)accessor;	// 0x35627e4d
- (void)_blockOnAccessClaim:(id)claim;	// 0x35625645
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x35625aa1
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x35626469
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x35626049
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x35626a39
- (void)_forgetAccessClaimForID:(id)anId;	// 0x35625589
- (void)_invokeAccessor:(id)accessor orDont:(BOOL)dont thenRelinquishAccessClaimForID:(id)anId;	// 0x35625885
- (void)_invokeAccessor:(id)accessor thenCompletionHandler:(id)handler;	// 0x356245ed
- (void)_itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x35626f19
- (void)_itemAtURL:(id)url willMoveToURL:(id)url2;	// 0x35626f15
- (void)_requestAccessClaim:(id)claim withProcedure:(id)procedure;	// 0x356253d1
- (void)_setFileProvider:(id)provider;	// 0x356288e9
- (void)cancel;	// 0x356251d1
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x3562471d
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x356249ad
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x35624865
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x35624b21
- (void)dealloc;	// 0x35624535
- (void)itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x35625145
- (void)itemAtURL:(id)url willMoveToURL:(id)url2;	// 0x356250b9
- (void)prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x35624c95
// converted property getter: - (id)purposeIdentifier;	// 0x356289a9
// converted property setter: - (void)setPurposeIdentifier:(id)identifier;	// 0x35628965
@end

