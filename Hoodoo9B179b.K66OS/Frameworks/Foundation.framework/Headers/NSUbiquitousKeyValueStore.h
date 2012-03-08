/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSUbiquitousKeyValueStore : NSObject {
@private
	id _private1;	// 4 = 0x4
	id _private2;	// 8 = 0x8
	id _private3;	// 12 = 0xc
	void *_private4;	// 16 = 0x10
	void *_reserved[3];	// 20 = 0x14
}
+ (void)_appWillActivate;	// 0x3104349d
+ (void)_appWillDeactivate;	// 0x3102d9c5
+ (void)_synchronizeStoresForced:(BOOL)forced;	// 0x3102d9d9
+ (id)defaultStore;	// 0x31034b49
- (id)init;	// 0x31034b75
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x31034b89
- (void)_adjustTimer:(id)timer;	// 0x3103540d
- (void)_adjustTimerForAutosync;	// 0x31052d59
- (void)_configurationDidChange;	// 0x31137ec1
- (BOOL)_hasPendingSynchronize;	// 0x31136f75
- (void)_pleaseSynchronize:(id)synchronize;	// 0x31037859
- (BOOL)_postDidChangeNotificationExternalChanges:(id)_post sourceChangeCount:(int)count;	// 0x31137059
- (void)_registerToDaemon;	// 0x31034e09
- (void)_rethrowException:(id)exception;	// 0x31137289
- (void)_scheduleRemoteSynchronization;	// 0x31137999
- (void)_setHasPendingSynchronize:(BOOL)synchronize;	// 0x31136fcd
- (void)_setShouldAvoidSynchronize:(BOOL)_set;	// 0x31136f01
- (BOOL)_shouldAvoidSynchronize;	// 0x31034eb1
- (void)_sourceDidChange:(id)_source;	// 0x31137dc5
- (int)_storeChangeFromSourceChange:(int)sourceChange;	// 0x31137049
- (void)_syncConcurrently;	// 0x3113747d
- (BOOL)_synchronizeForced:(BOOL)forced;	// 0x31034f09
- (BOOL)_synchronizeForced:(BOOL)forced notificationQueue:(dispatch_queue_s *)queue;	// 0x31034f21
- (void)_unregisterFromDaemon;	// 0x311381c5
- (id)arrayForKey:(id)key;	// 0x311383d1
- (BOOL)boolForKey:(id)key;	// 0x311387ed
- (id)dataForKey:(id)key;	// 0x31138579
- (void)dealloc;	// 0x31034aa5
- (id)dictionaryForKey:(id)key;	// 0x311384a5
- (id)dictionaryRepresentation;	// 0x31137811
- (double)doubleForKey:(id)key;	// 0x3113873d
- (void)finalize;	// 0x31136ebd
- (long long)longLongForKey:(id)key;	// 0x3113864d
- (unsigned)maximumDataLengthPerKey;	// 0x31138291
- (unsigned)maximumKeyCount;	// 0x31138251
- (unsigned)maximumKeyLength;	// 0x31138271
- (unsigned)maximumTotalDataLength;	// 0x311382b1
- (id)objectForKey:(id)key;	// 0x31035501
- (void)registerDefaultValues:(id)values;	// 0x3113769d
- (void)removeObjectForKey:(id)key;	// 0x31137689
- (void)setArray:(id)array forKey:(id)key;	// 0x3113840d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x31138905
- (void)setData:(id)data forKey:(id)key;	// 0x311385b5
- (void)setDictionary:(id)dictionary forKey:(id)key;	// 0x311384e1
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x311387b1
- (void)setLongLong:(long long)aLong forKey:(id)key;	// 0x31138701
- (void)setObject:(id)object forKey:(id)key;	// 0x31052b41
- (void)setString:(id)string forKey:(id)key;	// 0x31138339
- (id)stringForKey:(id)key;	// 0x311382d1
- (BOOL)synchronize;	// 0x31034e61
@end
