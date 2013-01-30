/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSRecursiveLock, NSMutableDictionary;

@interface MPSongManager : NSObject {
	NSMutableDictionary *mSongDescriptions;	// 4 = 0x4
	NSMutableDictionary *mSongBeats;	// 8 = 0x8
	NSMutableDictionary *mSongMetaData;	// 12 = 0xc
	NSString *mSongCacheFilePath;	// 16 = 0x10
	NSRecursiveLock *mSongLock;	// 20 = 0x14
	void *mDaFunc;	// 24 = 0x18
}
+ (void)releaseSharedManager;	// 0x33167315
+ (id)sharedManager;	// 0x33167221
- (id)init;	// 0x331673e1
- (id)initWithPaths:(id)paths;	// 0x33167829
- (id)beatsForSongAtPath:(id)path progressCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x33167765
- (id)cachedBeatsForSongAtPath:(id)path;	// 0x33167a59
- (void)dealloc;	// 0x331676a5
- (BOOL)hasBeatsForSongAtPath:(id)path;	// 0x33167791
- (id)songMetadataForPath:(id)path;	// 0x331677cd
- (void)storeBeats:(id)beats forPath:(id)path;	// 0x33167809
@end
