/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItem.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSObject, MPMediaLibrary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying> {
	MPMediaLibrary *_library;	// 4 = 0x4
	unsigned long long _persistentID;	// 8 = 0x8
	NSMutableDictionary *_properties;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_propertyQueue;	// 20 = 0x14
	BOOL _cachesProperties;	// 24 = 0x18
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x36f37d2d; converted property
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)persistentID;	// 0x36f370c5
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)persistentID library:(id)library;	// 0x36f37115
+ (void)persistentID:(unsigned long long)anId didChange:(BOOL)change;	// 0x36f377ed
- (id)init;	// 0x36f37079
- (id)initWithCoder:(id)coder;	// 0x36f37a55
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x36f37529
- (id)initWithPersistentID:(unsigned long long)persistentID library:(id)library;	// 0x36f37575
- (id)_initWithPersistentID:(unsigned long long)persistentID library:(id)library cachesProperties:(BOOL)properties;	// 0x36f375c9
- (id)_nonBatchableOrCachedValueForProperty:(id)property needsFetch:(BOOL *)fetch;	// 0x36f37d45
- (void)clearBookmarkTime;	// 0x36f39461
- (id)copyWithZone:(NSZone *)zone;	// 0x36f37a45
- (void)dealloc;	// 0x36f376b1
- (void)delete;	// 0x36f378bd
- (id)description;	// 0x36f379e9
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x36f39249
- (void)encodeWithCoder:(id)coder;	// 0x36f37bf1
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x36f38bb9
- (BOOL)existsInLibrary;	// 0x36f37ce1
- (void)incrementPlayCountForPlayingToEnd;	// 0x36f39481
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x36f394b1
- (void)incrementSkipCount;	// 0x36f3935d
- (void)invalidate;	// 0x36f37959
- (void)markNominalAmountHasBeenPlayed;	// 0x36f391f5
- (id)mediaLibrary;	// 0x36f37d1d
- (double)nominalHasBeenPlayedThreshold;	// 0x36f39209
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x36f392e1
// converted property getter: - (unsigned long long)persistentID;	// 0x36f37d2d
- (void)reallyIncrementPlayCount;	// 0x36f390f1
- (void)setValue:(id)value forProperty:(id)property;	// 0x36f38a35
- (void)updateLastUsedDateToCurrentDate;	// 0x36f395a1
- (id)valueForProperty:(id)property;	// 0x36f38145
- (id)valuesForProperties:(id)properties;	// 0x36f38459
@end

