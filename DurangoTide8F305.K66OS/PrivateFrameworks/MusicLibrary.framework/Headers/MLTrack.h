/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MLTrack : NSObject <NSCopying> {
@private
	void *_trackInfoContext;	// 4 = 0x4
}
@property(assign) double lastPlayedBookmarkTimeInSeconds;	// G=0x333bec35; S=0x333beca5; converted property
@property(copy, nonatomic) NSString *lyrics;	// G=0x333beaf9; S=0x333beafd; 
@property(assign) BOOL rating;	// G=0x333bec09; S=0x333bec0d; converted property
@property(readonly, assign) void *trackInfoContext;	// G=0x333bea55; converted property
@property(assign) unsigned videoAudioTrackID;	// G=0x333bebe9; S=0x333bebf1; converted property
@property(assign) unsigned videoSubtitleTrackID;	// G=0x333bebf5; S=0x333bebfd; converted property
- (id)initWithTrackContext:(void *)trackContext;	// 0x333bec69
- (id)_getImageDataForImageType:(int)imageType artworkFormatID:(unsigned)anId size:(CGSize)size timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x333bf7c1
- (BOOL)_isFilePathPlayable;	// 0x333bea89
- (unsigned long long)accountID;	// 0x333beb4d
- (id)album;	// 0x333bea9d
- (id)albumArtist;	// 0x333bf191
- (unsigned long long)albumPID;	// 0x333bea75
- (id)artist;	// 0x333bea99
- (unsigned long long)artistPID;	// 0x333bea7d
- (unsigned long)audibleDRMGroupID;	// 0x333beb19
- (id)audioBookName;	// 0x333bf17d
- (id)availableArtworkForImageType:(int)imageType formatIDsForTimeInMS:(unsigned)ms;	// 0x333bf579
- (id)bestImageDataForImageType:(int)imageType size:(CGSize)size;	// 0x333bf011
- (id)bestImageDataForImageType:(int)imageType size:(CGSize)size timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x333bf6f9
- (unsigned long)bpm;	// 0x333beb01
- (id)chapterTOC;	// 0x333bebd9
- (void)clearLastPlayedBookmarkTime;	// 0x333bed4d
- (id)comments;	// 0x333beab5
- (id)composer;	// 0x333beaa1
- (id)contentRatingInfo;	// 0x333beb41
- (id)copyWithZone:(NSZone *)zone;	// 0x333bf52d
- (id)copyright;	// 0x333beab9
- (int)customStopTimeInMS;	// 0x333bebbd
- (void)dealloc;	// 0x333bec3d
- (double)demoRentalDuration;	// 0x333beb81
- (double)demoRentalPlaybackDuration;	// 0x333beb89
- (double)demoRentalPlaybackStartTime;	// 0x333beb91
- (double)demoRentalStartTime;	// 0x333beb99
- (id)description;	// 0x333bf485
- (unsigned long)discNumber;	// 0x333beb31
- (int)duration;	// 0x333bf0d1
- (int)durationInMS;	// 0x333bebb1
- (unsigned)episodeNumber;	// 0x333beb15
- (id)eqPreset;	// 0x333bf111
- (id)eqPresetName;	// 0x333beba1
- (BOOL)fakeAsDemoRental;	// 0x333bf151
- (id)filePath;	// 0x333bea85
- (unsigned long long)fileSize;	// 0x333bea8d
- (void)gaplessHeuristicInfo:(unsigned *)info duration:(unsigned *)duration lastPacketsResync:(unsigned *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x333bebc5
- (id)genre;	// 0x333beaa5
- (unsigned long long)genreID;	// 0x333beb55
- (unsigned long long)globalID;	// 0x333bea6d
- (id)grouping;	// 0x333beaa9
- (BOOL)hasChapterArtwork;	// 0x333bf081
- (BOOL)hasChapterData;	// 0x333bebdd
- (BOOL)hasDataForArtworkType:(int)artworkType;	// 0x333bf049
- (BOOL)hasLastPlayedBookmarkTime;	// 0x333bec31
- (BOOL)hasLyrics;	// 0x333beb71
- (BOOL)hasNominalAmountBeenPlayed;	// 0x333bec11
- (BOOL)hasVideoData;	// 0x333beb75
- (long long)imageDBRecordID:(int)anId;	// 0x333bec01
- (id)imageDataForImageType:(int)imageType artworkFormatID:(unsigned)anId timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x333bf635
- (void)incrementPlayCountForPlayingToEnd;	// 0x333beda9
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x333bedd1
- (void)incrementSkipCount;	// 0x333bec19
- (id)infoDescription;	// 0x333beab1
- (id)infoShortDescription;	// 0x333beaad
- (BOOL)isAudibleAudioBook;	// 0x333beb1d
- (BOOL)isCompilationTrack;	// 0x333beb61
- (BOOL)isDemoRental;	// 0x333beb7d
- (BOOL)isEqualToTrack:(id)track;	// 0x333bf46d
- (BOOL)isExcludedFromShuffle;	// 0x333beb65
- (BOOL)isExplicitBasedOnCurrentRestrictions;	// 0x333bec29
- (BOOL)isHidden;	// 0x333bed65
- (BOOL)isITunesU;	// 0x333beb6d
- (BOOL)isOTAPurchasedContent;	// 0x333beb69
- (BOOL)isRental;	// 0x333beb79
// converted property getter: - (double)lastPlayedBookmarkTimeInSeconds;	// 0x333bec35
- (double)lastPlayedDate;	// 0x333bed7d
- (double)lastSkippedDate;	// 0x333bee89
// declared property getter: - (id)lyrics;	// 0x333beaf9
- (BOOL)markAsDeleted;	// 0x333bec25
- (void)markNominalAmountHasBeenPlayed;	// 0x333bec15
- (unsigned long)mediaType;	// 0x333beb5d
- (id)mobileArtworkCacheFolder;	// 0x333bf1a5
- (id)movieInfo;	// 0x333beb45
- (double)nominalHasBeenPlayedThresholdInSeconds;	// 0x333befbd
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL *)skipped;	// 0x333beeb5
- (unsigned long)number;	// 0x333bf169
- (unsigned long)numberOfDiscs;	// 0x333beb39
- (unsigned long)numberOfTracksInAlbum;	// 0x333beb29
- (id)path;	// 0x333bf1f5
- (unsigned long long)persistentUID;	// 0x333bea65
- (unsigned)playCount;	// 0x333bec21
- (id)podcastDirectStoreURL;	// 0x333beae1
- (id)podcastName;	// 0x333beadd
- (id)podcastURL;	// 0x333beaf5
// converted property getter: - (BOOL)rating;	// 0x333bec09
- (unsigned long)ratingLevel;	// 0x333beb49
- (double)releaseDate;	// 0x333beabd
- (id)seasonDisplayName;	// 0x333beb0d
- (unsigned)seasonNumber;	// 0x333beb11
- (id)seriesDisplayName;	// 0x333beb09
// converted property setter: - (void)setLastPlayedBookmarkTimeInSeconds:(double)seconds;	// 0x333beca5
// declared property setter: - (void)setLyrics:(id)lyrics;	// 0x333beafd
// converted property setter: - (void)setRating:(BOOL)rating;	// 0x333bec0d
// converted property setter: - (void)setVideoAudioTrackID:(unsigned)anId;	// 0x333bebf1
// converted property setter: - (void)setVideoSubtitleTrackID:(unsigned)anId;	// 0x333bebfd
- (BOOL)sharesArtworkWithTrack:(id)track artworkType:(int)type formatID:(unsigned)anId timeInMS:(unsigned)ms missingAlwaysComparesEqual:(BOOL)equal;	// 0x333bf845
- (BOOL)shouldBookmarkLastPlayedTime;	// 0x333bec2d
- (unsigned)skipCount;	// 0x333bec1d
- (id)sortAlbum;	// 0x333beacd
- (id)sortAlbumArtist;	// 0x333bead1
- (id)sortArtist;	// 0x333beac9
- (id)sortComposer;	// 0x333bead5
- (id)sortSeriesDisplayName;	// 0x333bead9
- (id)sortTitle;	// 0x333beac5
- (int)startTimeInMS;	// 0x333bebb9
- (int)stopTimeInMS;	// 0x333bf0a9
- (unsigned long long)storeItemAdamID;	// 0x333beae5
- (unsigned long long)storePlaylistAdamID;	// 0x333beaed
- (id)stringValueForProperty:(unsigned long)property;	// 0x333bf3ad
- (double)timeValueForProperty:(unsigned long)property;	// 0x333bf209
- (id)title;	// 0x333bea95
- (int)totalTimeInMS;	// 0x333bebc1
- (unsigned long)trackIndexInAlbum;	// 0x333beb21
// converted property getter: - (void *)trackInfoContext;	// 0x333bea55
- (unsigned long long)unsignedValueForProperty:(unsigned long)property;	// 0x333bf2b5
// converted property getter: - (unsigned)videoAudioTrackID;	// 0x333bebe9
- (BOOL)videoHasAlternateAudio;	// 0x333bebe1
- (BOOL)videoHasSubtitles;	// 0x333bebe5
// converted property getter: - (unsigned)videoSubtitleTrackID;	// 0x333bebf5
- (float)volumeAdjustment;	// 0x333beba5
- (float)volumeNormalization;	// 0x333bebad
- (unsigned long)year;	// 0x333beb05
@end
