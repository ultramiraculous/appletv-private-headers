/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISStoreURLOperationDelegate.h"

@class NSTimer, BRBackgroundTask, NSArray, NSDictionary, ATVStoreEnvironment, ISURLBag;

__attribute__((visibility("hidden")))
@interface ATVStoreFront : XXUnknownSuperclass <ISStoreURLOperationDelegate> {
	BRBackgroundTask *_bagReloadTask;	// 4 = 0x4
	NSArray *_storeFronts;	// 8 = 0x8
	NSDictionary *_currentStoreFront;	// 12 = 0xc
	NSArray *_rootCollection;	// 16 = 0x10
	NSArray *_vendorBags;	// 20 = 0x14
	ISURLBag *_bag;	// 24 = 0x18
	NSTimer *_timer;	// 28 = 0x1c
	unsigned _retryAttempt;	// 32 = 0x20
	BOOL _isStoreFrontChanging;	// 36 = 0x24
	ATVStoreEnvironment *_environment;	// 40 = 0x28
	BOOL _bagCanBeRefreshedByStoreServices;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x3b7481; 
@property(readonly, assign, nonatomic) ISURLBag *bag;	// G=0x3b7b09; @synthesize=_bag
@property(assign) BOOL bagCanBeRefreshedByStoreServices;	// G=0x3b919d; S=0x3b91b5; @synthesize=_bagCanBeRefreshedByStoreServices
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x3b7195; 
@property(retain) NSDictionary *currentStoreFront;	// G=0x3b9079; S=0x3b908d; @synthesize=_currentStoreFront
@property(retain, nonatomic) ATVStoreEnvironment *environment;	// G=0x3b9165; S=0x3b9175; @synthesize=_environment
@property(assign) BOOL isChangingStoreFront;	// G=0x3b9135; S=0x3b914d; @synthesize=_isStoreFrontChanging
@property(assign) unsigned retryAttempt;	// G=0x3b9109; S=0x3b911d; @synthesize=_retryAttempt
@property(retain) NSArray *rootCollection;	// G=0x3b909d; S=0x3b90b1; @synthesize=_rootCollection
@property(retain) NSArray *storeFronts;	// G=0x3b9055; S=0x3b9069; @synthesize=_storeFronts
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x3b7269; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x3b732d; 
@property(retain) NSTimer *timer;	// G=0x3b90e5; S=0x3b90f9; @synthesize=_timer
@property(retain) NSArray *vendorBags;	// G=0x3b90c1; S=0x3b90d5; @synthesize=_vendorBags
+ (id)storeFront;	// 0x3b6e3d
- (id)init;	// 0x3b6ef5
- (void).cxx_destruct;	// 0x3b91cd
- (double)_BagReloadInterval;	// 0x3b93b1
- (id)_acceptLanguage;	// 0x3b8d21
- (void)_accountStoreChanged:(id)changed;	// 0x3b7c19
- (id)_bagContext;	// 0x3b7f85
- (id)_init;	// 0x3b6f45
- (void)_languageChanged:(id)changed;	// 0x3b7c65
- (void)_loadAvailableStoreFronts;	// 0x3b8091
- (void)_loadBag;	// 0x3b7ca5
- (void)_loadStoreFront;	// 0x3b8445
- (void)_networkStateChanged:(id)changed;	// 0x3b7b8d
- (void)_processStoreFront:(id)front;	// 0x3b8745
- (void)_retry;	// 0x3b8b99
- (void)_setCurrentStoreFront;	// 0x3b89c1
- (void)_sniffEnvironment:(id)environment;	// 0x3b8fa9
- (void)_storeFrontChanged:(id)changed;	// 0x3b7bcd
- (BOOL)_switchToStoreFront:(id)storeFront force:(BOOL)force;	// 0x3b76b9
- (void)_updateDateAndTimeFromResponse:(id)response;	// 0x3b8dd1
- (void)_updateReloadTaskWithInterval:(double)interval;	// 0x3b9279
- (id)_userIdentifier;	// 0x3b8005
// declared property getter: - (id)atvHeaders;	// 0x3b7481
// declared property getter: - (id)bag;	// 0x3b7b09
// declared property getter: - (BOOL)bagCanBeRefreshedByStoreServices;	// 0x3b919d
- (id)bagURLForKey:(id)key;	// 0x3b757d
- (id)bagValueForKey:(id)key;	// 0x3b75dd
// declared property getter: - (id)commonHeaders;	// 0x3b7195
// declared property getter: - (id)currentStoreFront;	// 0x3b9079
- (void)dealloc;	// 0x3b7129
// declared property getter: - (id)environment;	// 0x3b9165
// declared property getter: - (BOOL)isChangingStoreFront;	// 0x3b9135
- (void)refreshURLBag;	// 0x3b763d
// declared property getter: - (unsigned)retryAttempt;	// 0x3b9109
// declared property getter: - (id)rootCollection;	// 0x3b909d
- (id)rootCollectionForMediaType:(id)mediaType;	// 0x3b7909
// declared property setter: - (void)setBagCanBeRefreshedByStoreServices:(BOOL)services;	// 0x3b91b5
// declared property setter: - (void)setCurrentStoreFront:(id)front;	// 0x3b908d
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x3b9175
// declared property setter: - (void)setIsChangingStoreFront:(BOOL)front;	// 0x3b914d
// declared property setter: - (void)setRetryAttempt:(unsigned)attempt;	// 0x3b911d
// declared property setter: - (void)setRootCollection:(id)collection;	// 0x3b90b1
// declared property setter: - (void)setStoreFronts:(id)fronts;	// 0x3b9069
// declared property setter: - (void)setTimer:(id)timer;	// 0x3b90f9
// declared property setter: - (void)setVendorBags:(id)bags;	// 0x3b90d5
// declared property getter: - (id)storeFronts;	// 0x3b9055
// declared property getter: - (id)storeHeadersDictionary;	// 0x3b7269
// declared property getter: - (id)storeHeadersWithDsid;	// 0x3b732d
- (BOOL)switchToStoreFront:(id)storeFront;	// 0x3b78f1
// declared property getter: - (id)timer;	// 0x3b90e5
// declared property getter: - (id)vendorBags;	// 0x3b90c1
@end

