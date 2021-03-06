/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTitleProvider.h"

@class NSMutableArray, NSURL, ATVDataType, NSString, BRMediaType, NSDictionary;

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
	BOOL _storeRestricted;	// 40 = 0x28
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
	NSString *_URLKey;	// 60 = 0x3c
	BOOL _fallBackEnabled;	// 64 = 0x40
	unsigned _primaryRetryCount;	// 68 = 0x44
	BOOL _requiresStoreAccount;	// 72 = 0x48
	ATVDataType *_redownloadMediaType;	// 76 = 0x4c
}
@property(assign) ATVDataType *redownloadMediaType;	// G=0x1edf91; S=0x1edfa5; @synthesize=_redownloadMediaType
@property(assign, nonatomic) BOOL requiresStoreAccount;	// G=0x1edfbd; S=0x1edc81; @synthesize=_requiresStoreAccount
@property(readonly, retain) NSString *title;	// G=0x1edb19; converted property
+ (id)providerWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x1ed8ad
+ (id)storeMainMenuPresentsURLKey;	// 0x1ed83d
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x1ed8f9
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back requiresStoreAccount:(BOOL)account;	// 0x1ed925
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x1eee8d
- (void)_clearStoreData;	// 0x1ee049
- (void)_loadStoreDataFromURL:(id)url;	// 0x1ee53d
- (void)_networkChanged:(id)changed;	// 0x1eebe9
- (BOOL)_okToFetchNewData;	// 0x1ee421
- (void)_parentalControlAccessChanged:(id)changed;	// 0x1eecc9
- (void)_parseCatalogCollection:(id)collection;	// 0x1ee921
- (void)_preferredAccountRemoved:(id)removed;	// 0x1eee09
- (void)_redownloadAcquired:(id)acquired;	// 0x1eed9d
- (void)_resetStoreData;	// 0x1ee14d
- (void)_setTitle:(id)title;	// 0x1edfcd
- (void)_supplementalResponseReceived:(id)received redirectURL:(id)url;	// 0x1ee825
- (id)controlFactory;	// 0x1edd71
- (id)dataAtIndex:(long)index;	// 0x1eddc1
- (long)dataCount;	// 0x1edd8d
- (void)dealloc;	// 0x1edb29
- (id)hashForDataAtIndex:(long)index;	// 0x1edf15
- (BOOL)isLoading;	// 0x1edc71
// declared property getter: - (id)redownloadMediaType;	// 0x1edf91
- (void)reloadStoreData;	// 0x1edc1d
// declared property getter: - (BOOL)requiresStoreAccount;	// 0x1edfbd
// declared property setter: - (void)setRedownloadMediaType:(id)type;	// 0x1edfa5
// declared property setter: - (void)setRequiresStoreAccount:(BOOL)account;	// 0x1edc81
// converted property getter: - (id)title;	// 0x1edb19
@end

