/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import </libobjc.A.h>

@class SYDClient, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SYDRemotePreferencesSource : NSObject {
	long _generationCount;	// 4 = 0x4
	long _lastGenerationFromDisk;	// 8 = 0x8
	CFStringRef preferenceID;	// 12 = 0xc
	CFURLRef urlOnDisk;	// 16 = 0x10
	CFDictionaryRef cache;	// 20 = 0x14
	long long storageChangeCount;	// 24 = 0x18
	long long initialSyncChangeCount;	// 32 = 0x20
	unsigned char isInitialSync;	// 40 = 0x28
	CFSetRef dirtyKeys;	// 44 = 0x2c
	CFDictionaryRef configurationDictionary;	// 48 = 0x30
	NSMutableDictionary *externalChanges;	// 52 = 0x34
	SYDClient *client;	// 56 = 0x38
	id registrationBlock;	// 60 = 0x3c
	NSObject<OS_dispatch_queue> *registrationQueue;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_protectionQueue;	// 68 = 0x44
	NSObject<OS_dispatch_source> *_memoryWarningSource;	// 72 = 0x48
	double _lastAccess;	// 76 = 0x4c
	BOOL _forceNextSynchronization;	// 84 = 0x54
}
@property(readonly, assign) long generationCount;	// G=0x3298cfdd; converted property
@property(readonly, assign) unsigned char isInitialSync;	// G=0x3298c981; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x3298d5c9
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x3298d5bd
+ (void)initialize;	// 0x3298ad69
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)bundleIdentifier;	// 0x3298d8b5
+ (void)noteAccountChanges:(id)changes;	// 0x3298d799
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x3298d5d5
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x3298b1c9
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared;	// 0x3298b1ed
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared additionalSource:(BOOL)source;	// 0x3298b211
- (void)_cachePlistFromDisk;	// 0x3298bbbd
- (void)_createMemoryWarningSource;	// 0x3298d3f9
- (void)_didReceiveMemoryWarning;	// 0x3298d509
- (void)_forceRegistrationNow;	// 0x3298b729
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x3298adb1
- (unsigned char)_synchronizeForced:(unsigned char)forced;	// 0x3298c64d
- (id)_warningSource;	// 0x3298d3e9
- (long)configurationValueForKey:(CFStringRef)key;	// 0x3298af41
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x3298ae85
- (CFDictionaryRef)copyDictionary;	// 0x3298ce71
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x3298c9bd
- (CFArrayRef)copyKeyList;	// 0x3298cd2d
- (void)dealloc;	// 0x3298b4d1
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x3298ccc1
- (void)finalize;	// 0x3298b66d
// converted property getter: - (long)generationCount;	// 0x3298cfdd
- (void *)getValueForKey:(CFStringRef)key;	// 0x3298b7ad
- (unsigned char)hasExternalChanges;	// 0x3298c991
// converted property getter: - (unsigned char)isInitialSync;	// 0x3298c981
- (long)maximumDataLengthPerKey;	// 0x3298b191
- (long)maximumKeyCount;	// 0x3298b159
- (long)maximumKeyLength;	// 0x3298b175
- (long)maximumTotalDataLength;	// 0x3298b1ad
- (void)registerForSynchronizedDefaults;	// 0x3298d0ad
- (void)scheduleRemoteSynchronization;	// 0x3298c229
- (id)serverSideDebugDescription;	// 0x3298d579
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x3298b97d
- (void)synchronizationWithCompletionHandler:(id)completionHandler;	// 0x3298c2cd
- (unsigned char)synchronize;	// 0x3298c489
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x3298c569
- (void)unregisterForSynchronizedDefaults;	// 0x3298d2b1
- (void)updateConfiguration;	// 0x3298d2f5
@end
