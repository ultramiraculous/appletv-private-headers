/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
	void *_echo;	// 4 = 0x4
	void *_echo_library;	// 8 = 0x8
	void *_echo_cluster_playlist;	// 12 = 0xc
	NSMutableData *_sharedBlobMutableData;	// 16 = 0x10
}
+ (unsigned)defaultMinTrackCount;	// 0x346bada1
+ (unsigned)defaultTrackCount;	// 0x346bade9
+ (BOOL)hasGeniusDataAvailable;	// 0x346bad39
+ (BOOL)hasGeniusFeatureEnabled;	// 0x346b04d1
+ (void)ignoreUnusedWarnings;	// 0x346bab81
+ (id)playlistControllerWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x346bc48d
+ (BOOL)populateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x346bc341
+ (BOOL)useFakeGeniusData;	// 0x346b10a9
- (id)init;	// 0x346bae31
- (void).cxx_destruct;	// 0x346bca55
- (BOOL)_canIncludeTrackInGeniusContainer:(id)geniusContainer;	// 0x346baf9d
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x346bc565
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x346bb0b1
- (BOOL)_fakePopulateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x346bb4bd
- (BOOL)_populateContainer:(id)container seedTrack:(id)track error:(id *)error;	// 0x346bb9e5
- (id)_sharedBlobMutableData;	// 0x346baf41
- (id)_tracksFromClusterForPlaylistItemMax:(unsigned)playlistItemMax error:(id *)error;	// 0x346bc7f5
- (void)dealloc;	// 0x346baed1
- (id)tracksFromClusterForCount:(unsigned)count error:(id *)error;	// 0x346bc50d
@end

