/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSRecursiveLock, NSString, NSMutableDictionary;

@interface MPSongManager : NSObject {
	NSMutableDictionary *mSongDescriptions;	// 4 = 0x4
	NSMutableDictionary *mSongBeats;	// 8 = 0x8
	NSMutableDictionary *mSongMetaData;	// 12 = 0xc
	NSString *mSongCacheFilePath;	// 16 = 0x10
	NSRecursiveLock *mSongLock;	// 20 = 0x14
	void *mDaFunc;	// 24 = 0x18
}
+ (void)releaseSharedManager;	// 0x2fbd91d5
+ (id)sharedManager;	// 0x2fbd90e1
- (id)init;	// 0x2fbd92a1
- (id)initWithPaths:(id)paths;	// 0x2fbd96e9
- (id)beatsForSongAtPath:(id)path progressCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x2fbd9621
- (id)cachedBeatsForSongAtPath:(id)path;	// 0x2fbd9919
- (void)dealloc;	// 0x2fbd9561
- (BOOL)hasBeatsForSongAtPath:(id)path;	// 0x2fbd9651
- (id)songMetadataForPath:(id)path;	// 0x2fbd968d
- (void)storeBeats:(id)beats forPath:(id)path;	// 0x2fbd96c9
@end

