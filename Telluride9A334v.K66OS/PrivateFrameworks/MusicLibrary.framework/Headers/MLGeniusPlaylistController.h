/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
@private
	void *_echo;	// 4 = 0x4
	void *_echo_library;	// 8 = 0x8
	void *_echo_cluster_playlist;	// 12 = 0xc
	NSMutableData *_sharedBlobMutableData;	// 16 = 0x10
}
+ (unsigned)defaultMinTrackCount;	// 0x337ecc01
+ (unsigned)defaultTrackCount;	// 0x337ecc35
+ (BOOL)hasGeniusDataAvailable;	// 0x337ecba1
+ (BOOL)hasGeniusFeatureEnabled;	// 0x337dfd2d
+ (void)ignoreUnusedWarnings;	// 0x337ecac1
+ (id)playlistControllerWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x337ee059
+ (BOOL)populateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x337edf15
+ (BOOL)useFakeGeniusData;	// 0x337e02c1
- (id)init;	// 0x337ecc69
- (BOOL)_canIncludeTrackInGeniusContainer:(id)geniusContainer;	// 0x337ecde1
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x337ee129
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x337ecea9
- (BOOL)_fakePopulateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x337ed251
- (BOOL)_populateContainer:(id)container seedTrack:(id)track error:(id *)error;	// 0x337ed6a5
- (id)_sharedBlobMutableData;	// 0x337ecd8d
- (id)_tracksFromClusterForPlaylistItemMax:(unsigned)playlistItemMax error:(id *)error;	// 0x337ee37d
- (void)dealloc;	// 0x337ecd0d
- (id)tracksFromClusterForCount:(unsigned)count error:(id *)error;	// 0x337ee0d5
@end

