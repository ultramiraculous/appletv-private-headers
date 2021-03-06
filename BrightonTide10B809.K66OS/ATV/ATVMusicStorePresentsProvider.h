/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTitleProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, BRMediaType, NSMutableArray, NSString, NSDictionary, ATVDataType;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePresentsProvider : XXUnknownSuperclass <BRTitleProvider> {
	NSString *_requestID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_fallbackURL;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	NSDictionary *_catalogCollection;	// 24 = 0x18
	BOOL _storeLoadInProgress;	// 28 = 0x1c
	double _lastStoreLoadTime;	// 32 = 0x20
	BOOL _networkIsOK;	// 40 = 0x28
	BOOL _storeRestricted;	// 41 = 0x29
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
	NSString *_URLKey;	// 60 = 0x3c
	BOOL _fallBackEnabled;	// 64 = 0x40
	unsigned _primaryRetryCount;	// 68 = 0x44
	ATVDataType *_redownloadMediaType;	// 72 = 0x48
	BOOL _requiresStoreAccount;	// 76 = 0x4c
}
@property(assign) ATVDataType *redownloadMediaType;	// G=0x20d049; S=0x20d05d; @synthesize=_redownloadMediaType
@property(assign, nonatomic) BOOL requiresStoreAccount;	// G=0x20d075; S=0x20cd41; @synthesize=_requiresStoreAccount
@property(readonly, retain) NSString *title;	// G=0x20cbd9; converted property
+ (id)providerWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x20c96d
+ (id)storeMainMenuPresentsURLKey;	// 0x20c8f9
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x20c9b9
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back requiresStoreAccount:(BOOL)account;	// 0x20c9e5
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x20df89
- (void)_clearStoreData;	// 0x20d101
- (void)_loadStoreDataFromURL:(id)url;	// 0x20d5f9
- (void)_networkChanged:(id)changed;	// 0x20dcb5
- (BOOL)_okToFetchNewData;	// 0x20d4ed
- (void)_parentalControlAccessChanged:(id)changed;	// 0x20ddc9
- (void)_parseCatalogCollection:(id)collection;	// 0x20d9ed
- (void)_preferredAccountRemoved:(id)removed;	// 0x20df05
- (void)_redownloadAcquired:(id)acquired;	// 0x20de99
- (void)_resetStoreData;	// 0x20d205
- (void)_setTitle:(id)title;	// 0x20d085
- (void)_supplementalResponseReceived:(id)received redirectURL:(id)url;	// 0x20d8e1
- (id)controlFactory;	// 0x20ce29
- (id)dataAtIndex:(long)index;	// 0x20ce79
- (long)dataCount;	// 0x20ce45
- (void)dealloc;	// 0x20cbe9
- (id)hashForDataAtIndex:(long)index;	// 0x20cfcd
- (BOOL)isLoading;	// 0x20cd31
// declared property getter: - (id)redownloadMediaType;	// 0x20d049
- (void)reloadStoreData;	// 0x20ccdd
// declared property getter: - (BOOL)requiresStoreAccount;	// 0x20d075
// declared property setter: - (void)setRedownloadMediaType:(id)type;	// 0x20d05d
// declared property setter: - (void)setRequiresStoreAccount:(BOOL)account;	// 0x20cd41
// converted property getter: - (id)title;	// 0x20cbd9
@end

