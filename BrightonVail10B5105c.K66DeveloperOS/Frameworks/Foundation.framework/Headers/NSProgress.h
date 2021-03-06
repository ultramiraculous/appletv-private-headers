/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSProgressPublisher.h"

@class NSXPCConnection, NSMutableDictionary, NSString;

@interface NSProgress : NSObject <NSProgressPublisher> {
	NSProgress *_parent;	// 4 = 0x4
	long long _portionOfParentUnitCount;	// 8 = 0x8
	id _values;	// 16 = 0x10
	id _valuesSeenFromMainThread;	// 20 = 0x14
	id _cancellationHandler;	// 24 = 0x18
	id _pausingHandler;	// 28 = 0x1c
	long long _pendingUnitCount;	// 32 = 0x20
	id _userInfoProxy;	// 40 = 0x28
	NSString *_publisherID;	// 44 = 0x2c
	NSXPCConnection *_connection;	// 48 = 0x30
	int _unpublishingBlockageCount;	// 52 = 0x34
	int _remoteObserverCount;	// 56 = 0x38
	NSMutableDictionary *_acknowledgementHandlersByBundleID;	// 60 = 0x3c
	NSMutableDictionary *_lastNotificationTimesByKey;	// 64 = 0x40
	NSMutableDictionary *_userInfoLastNotificationTimesByKey;	// 68 = 0x44
	id _reserved1;	// 72 = 0x48
	id _reserved2;	// 76 = 0x4c
}
@property(assign, getter=isCancellable) BOOL cancellable;	// G=0x361d2f01; S=0x361d2e89; 
@property(readonly, assign, getter=isCancelled) BOOL cancelled;	// G=0x361d31f1; 
@property(assign) long long completedUnitCount;	// G=0x361d2ad9; S=0x361d2a55; 
@property(readonly, assign) double fractionCompleted;	// G=0x361d41d9; 
@property(readonly, assign, getter=isIndeterminate) BOOL indeterminate;	// G=0x361d3ec1; 
@property(copy) NSString *kind;	// G=0x361d5415; S=0x361d535d; 
@property(copy) NSString *localizedDescription;	// G=0x361d2ce9; S=0x361d2c15; 
@property(readonly, assign) NSString *localizedItemCountDescription;	// G=0x361d64d5; 
@property(readonly, assign, getter=isOld) BOOL old;	// G=0x361d5fe9; 
@property(assign, getter=isPausable) BOOL pausable;	// G=0x361d30b5; S=0x361d303d; 
@property(readonly, assign, getter=isPaused) BOOL paused;	// G=0x361d3329; 
@property(assign) long long totalUnitCount;	// G=0x361d2919; S=0x361d2895; 
+ (id)_publisherInterface;	// 0x361d5fed
+ (id)_registrarInterface;	// 0x361d61b5
+ (id)_subscriberInterface;	// 0x361d6065
+ (id)addSubscriberForFileURL:(id)fileURL usingBlock:(id)block;	// 0x361d5f6d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x361d2891
+ (id)currentProgress;	// 0x361d16f5
+ (id)keyPathsForValuesAffectingFractionCompleted;	// 0x361d4011
+ (id)keyPathsForValuesAffectingLocalizedDescription;	// 0x361d2ccd
+ (id)progressWithTotalUnitCount:(long long)totalUnitCount;	// 0x361d172d
+ (void)removeSubscriber:(id)subscriber;	// 0x361d5fd1
- (id)init;	// 0x361d17b5
- (id)initWithParent:(id)parent userInfo:(id)info;	// 0x361d17c9
- (void)__notifyRemoteObserversOfValueForKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x361d1c8d
- (void)__setValueForKey:(id)key usingBlock:(id)block;	// 0x361d210d
- (void)_cancel;	// 0x361d454d
- (double)_fractionCompletedUsingValuesFinder:(id)finder;	// 0x361d4059
- (void)_getValueUsingBlock:(id)block;	// 0x361d25e9
- (id)_initWithValues:(id)values;	// 0x361d63ad
- (void)_notifyRemoteObserversOfValueForKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x361d1d99
- (void)_pause;	// 0x361d4765
- (void)_setUserInfoValue:(id)value forKey:(id)key;	// 0x361d3649
- (void)_setValue:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x361d6401
- (void)_setValueForKey:(id)key usingBlock:(id)block;	// 0x361d229d
- (void)_unblockUnpublishing;	// 0x361d58e9
- (void)acknowledge;	// 0x361d64f1
- (void)acknowledgeWithSuccess:(BOOL)success;	// 0x361d5fe5
- (oneway void)appWithBundleID:(id)bundleID didAcknowledgeWithSuccess:(BOOL)success;	// 0x361d5db1
- (void)becomeCurrentWithPendingUnitCount:(long long)pendingUnitCount;	// 0x361d1ba9
- (void)cancel;	// 0x361d46d1
// declared property getter: - (long long)completedUnitCount;	// 0x361d2ad9
- (void)dealloc;	// 0x361d1959
// declared property getter: - (double)fractionCompleted;	// 0x361d41d9
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)bundleIdentifer usingBlock:(id)block;	// 0x361d64e1
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)bundleIdentifier usingBlock:(id)block;	// 0x361d5a05
// declared property getter: - (BOOL)isCancellable;	// 0x361d2f01
// declared property getter: - (BOOL)isCancelled;	// 0x361d31f1
// declared property getter: - (BOOL)isIndeterminate;	// 0x361d3ec1
// declared property getter: - (BOOL)isOld;	// 0x361d5fe9
// declared property getter: - (BOOL)isPausable;	// 0x361d30b5
// declared property getter: - (BOOL)isPaused;	// 0x361d3329
// declared property getter: - (id)kind;	// 0x361d5415
// declared property getter: - (id)localizedDescription;	// 0x361d2ce9
// declared property getter: - (id)localizedItemCountDescription;	// 0x361d64d5
- (unsigned)ownedDictionaryCount;	// 0x361d4b79
- (id)ownedDictionaryKeyEnumerator;	// 0x361d4cc5
- (id)ownedDictionaryObjectForKey:(id)key;	// 0x361d5119
- (void)pause;	// 0x361d48e9
- (void)publish;	// 0x361d5595
- (void)resignCurrent;	// 0x361d1c41
// declared property setter: - (void)setCancellable:(BOOL)cancellable;	// 0x361d2e89
- (void)setCancellationHandler:(id)handler;	// 0x361d3461
// declared property setter: - (void)setCompletedUnitCount:(long long)count;	// 0x361d2a55
// declared property setter: - (void)setKind:(id)kind;	// 0x361d535d
// declared property setter: - (void)setLocalizedDescription:(id)description;	// 0x361d2c15
// declared property setter: - (void)setPausable:(BOOL)pausable;	// 0x361d303d
- (void)setPausingHandler:(id)handler;	// 0x361d3555
// declared property setter: - (void)setTotalUnitCount:(long long)count;	// 0x361d2895
- (void)setUserInfoObject:(id)object forKey:(id)key;	// 0x361d3eb1
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)initialAcceptor;	// 0x361d5b6d
- (oneway void)stopProvidingValues;	// 0x361d5cd9
// declared property getter: - (long long)totalUnitCount;	// 0x361d2919
- (void)unpublish;	// 0x361d5971
- (id)userInfo;	// 0x361d497d
@end

