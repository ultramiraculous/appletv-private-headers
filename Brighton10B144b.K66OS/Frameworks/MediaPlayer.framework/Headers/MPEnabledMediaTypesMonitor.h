/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPEnabledMediaTypesMonitor : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSMutableArray *_completionHandlers;	// 8 = 0x8
	BOOL _ignoreLibraryDidChangeNotifications;	// 12 = 0xc
	BOOL _monitoringActive;	// 13 = 0xd
	int _enabledMediaTypes;	// 16 = 0x10
	int _enabledIfPresentMediaTypes;	// 20 = 0x14
	NSArray *_externalTypeManagers;	// 24 = 0x18
	int _defaultEnabledMediaTypes;	// 28 = 0x1c
	int _disablableMediaTypes;	// 32 = 0x20
	int _externallyManagedMediaTypes;	// 36 = 0x24
	int _unavailableDisabledTypes;	// 40 = 0x28
	BOOL _hidesSecondPartyMediaTypes;	// 44 = 0x2c
	NSOperationQueue *_lookupQueue;	// 48 = 0x30
}
@property(assign, nonatomic) int defaultEnabledMediaTypes;	// G=0x31d835b1; S=0x31d81d05; @synthesize=_defaultEnabledMediaTypes
@property(assign, nonatomic) int disablableMediaTypes;	// G=0x31d835c1; S=0x31d835d1; @synthesize=_disablableMediaTypes
@property(readonly, assign, nonatomic) int enabledIfPresentMediaTypes;	// G=0x31d821e5; @synthesize=_enabledIfPresentMediaTypes
@property(assign, nonatomic) int enabledMediaTypes;	// G=0x31d82119; S=0x31d83581; @synthesize=_enabledMediaTypes
@property(retain, nonatomic) NSArray *externalTypeManagers;	// G=0x31d83591; S=0x31d835a1; @synthesize=_externalTypeManagers
@property(assign, nonatomic) int externallyManagedMediaTypes;	// G=0x31d835e1; S=0x31d835f1; @synthesize=_externallyManagedMediaTypes
@property(assign, nonatomic) BOOL hidesSecondPartyMediaTypes;	// G=0x31d83621; S=0x31d83631; @synthesize=_hidesSecondPartyMediaTypes
@property(retain, nonatomic) NSOperationQueue *lookupQueue;	// G=0x31d83641; S=0x31d83651; @synthesize=_lookupQueue
@property(assign, nonatomic) int unavailableDisabledTypes;	// G=0x31d83601; S=0x31d83611; @synthesize=_unavailableDisabledTypes
+ (void)alertUserOneTimeForDisabledMediaTypes;	// 0x31d81cb1
+ (void)monitorWithDefaultMediaTypes:(int)defaultMediaTypes;	// 0x31d81cd9
+ (id)sharedInstance;	// 0x31d81c01
- (id)init;	// 0x31d814a5
- (void)_beginMonitoringWithDefaultMediaTypes:(int)defaultMediaTypes;	// 0x31d815d9
- (int)_calculatedEnabledIfPresentMediaTypes;	// 0x31d81f2d
- (int)_calculatedEnabledMediaTypes;	// 0x31d81ed5
- (void)_installedSoftwaredChanged;	// 0x31d822b1
- (void)_libraryDidChangeNotification:(id)_library;	// 0x31d81d5d
- (void)_onQueueUpdateEnabledTypesByUpdatingExternallyManagedTypes:(BOOL)types updateNonExistentTypes:(BOOL)types2;	// 0x31d822c5
- (void)_onQueueUpdateExternallyManagedTypes;	// 0x31d82321
- (void)_onQueueUpdateUnavailableDisabledTypes;	// 0x31d8265d
- (void)_updateWithCompletionHandler:(id)completionHandler;	// 0x31d827c1
- (void)alertUserOneTimeForDisabledMediaTypes;	// 0x31d830b1
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x31d82fcd
- (void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;	// 0x31d82df5
- (void)dealloc;	// 0x31d81b09
// declared property getter: - (int)defaultEnabledMediaTypes;	// 0x31d835b1
// declared property getter: - (int)disablableMediaTypes;	// 0x31d835c1
// declared property getter: - (int)enabledIfPresentMediaTypes;	// 0x31d821e5
// declared property getter: - (int)enabledMediaTypes;	// 0x31d82119
// declared property getter: - (id)externalTypeManagers;	// 0x31d83591
// declared property getter: - (int)externallyManagedMediaTypes;	// 0x31d835e1
// declared property getter: - (BOOL)hidesSecondPartyMediaTypes;	// 0x31d83621
// declared property getter: - (id)lookupQueue;	// 0x31d83641
// declared property setter: - (void)setDefaultEnabledMediaTypes:(int)types;	// 0x31d81d05
// declared property setter: - (void)setDisablableMediaTypes:(int)types;	// 0x31d835d1
// declared property setter: - (void)setEnabledMediaTypes:(int)types;	// 0x31d83581
- (void)setEnabledMediaTypes:(int)types enabledIfPresentMediaTypes:(int)types2;	// 0x31d81f71
// declared property setter: - (void)setExternalTypeManagers:(id)managers;	// 0x31d835a1
// declared property setter: - (void)setExternallyManagedMediaTypes:(int)types;	// 0x31d835f1
// declared property setter: - (void)setHidesSecondPartyMediaTypes:(BOOL)types;	// 0x31d83631
// declared property setter: - (void)setLookupQueue:(id)queue;	// 0x31d83651
// declared property setter: - (void)setUnavailableDisabledTypes:(int)types;	// 0x31d83611
// declared property getter: - (int)unavailableDisabledTypes;	// 0x31d83601
@end

