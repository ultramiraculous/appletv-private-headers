/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, CDNDownloadData, NSMutableDictionary, NSMutableArray;

@interface PlaylistBuilder : XXUnknownSuperclass {
	NSMutableArray *usedSubtitleTracks_;	// 4 = 0x4
	NSMutableDictionary *playlists_;	// 8 = 0x8
	CDNDownloadData *selectedCdn_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	NSMutableArray *downloadedContentHeaderTimedTextData_;	// 20 = 0x14
	int initialPlaylistTrackIndex_;	// 24 = 0x18
	int initialPlaylistStreamIndex_;	// 28 = 0x1c
	BOOL unmuxed_;	// 32 = 0x20
	double totalPlayListTime_;	// 36 = 0x24
	long long webVTTHeaderOffset_;	// 44 = 0x2c
	NSString *dateTimeTag_;	// 52 = 0x34
}
@property(retain) NSString *dateTimeTag;	// G=0x5695d1; S=0x5695e5; @synthesize=dateTimeTag_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x569431; S=0x569445; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSMutableArray *downloadedContentHeaderTimedTextData;	// G=0x569455; S=0x569469; @synthesize=downloadedContentHeaderTimedTextData_
@property(assign) int initialPlaylistStreamIndex;	// G=0x5694a5; S=0x5694b9; @synthesize=initialPlaylistStreamIndex_
@property(assign) int initialPlaylistTrackIndex;	// G=0x569479; S=0x56948d; @synthesize=initialPlaylistTrackIndex_
@property(retain) NSMutableDictionary *playlists;	// G=0x5693e9; S=0x5693fd; @synthesize=playlists_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x56940d; S=0x569421; @synthesize=selectedCdn_
@property(assign) double totalPlayListTime;	// G=0x569501; S=0x569535; @synthesize=totalPlayListTime_
@property(assign) BOOL unmuxed;	// G=0x5694d1; S=0x5694e9; @synthesize=unmuxed_
@property(retain) NSMutableArray *usedSubtitleTracks;	// G=0x5693c5; S=0x5693d9; @synthesize=usedSubtitleTracks_
@property(assign) long long webVTTHeaderOffset;	// G=0x569569; S=0x56959d; @synthesize=webVTTHeaderOffset_
+ (id)sharedInstance;	// 0x5633b9
- (BOOL)build:(unsigned)build;	// 0x563565
- (BOOL)buildDashIFramePlaylist:(id)playlist;	// 0x567949
- (BOOL)buildDashPlaylist:(id)playlist withMaxAudioBitrate:(int)maxAudioBitrate;	// 0x5652b5
- (BOOL)buildIFramePlaylist:(id)playlist;	// 0x566a59
- (BOOL)buildMasterPlaylist;	// 0x56821d
- (BOOL)buildPlaylist:(id)playlist withMaxAudioBitrate:(int)maxAudioBitrate;	// 0x564329
- (BOOL)buildWebVTTPlaylist:(id)playlist;	// 0x566409
// declared property getter: - (id)dateTimeTag;	// 0x5695d1
- (void)dealloc;	// 0x5634a5
- (id)description;	// 0x569099
- (id)downloadWebVTTHeaderInformation:(id)information;	// 0x565db9
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x569431
// declared property getter: - (id)downloadedContentHeaderTimedTextData;	// 0x569455
- (double)getContentLength:(id)length;	// 0x564101
- (double)getDashContentLength:(id)length;	// 0x564301
// declared property getter: - (int)initialPlaylistStreamIndex;	// 0x5694a5
// declared property getter: - (int)initialPlaylistTrackIndex;	// 0x569479
- (BOOL)isUnmuxed;	// 0x5692ad
- (void)metrics;	// 0x569095
// declared property getter: - (id)playlists;	// 0x5693e9
- (void)reset;	// 0x563c2d
- (void)selectDownloadedContentHeaderDownloadableDataInitialBitrate:(unsigned)bitrate;	// 0x563dc9
// declared property getter: - (id)selectedCdn;	// 0x56940d
// declared property setter: - (void)setDateTimeTag:(id)tag;	// 0x5695e5
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x569445
// declared property setter: - (void)setDownloadedContentHeaderTimedTextData:(id)data;	// 0x569469
// declared property setter: - (void)setInitialPlaylistStreamIndex:(int)index;	// 0x5694b9
// declared property setter: - (void)setInitialPlaylistTrackIndex:(int)index;	// 0x56948d
// declared property setter: - (void)setPlaylists:(id)playlists;	// 0x5693fd
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x569421
// declared property setter: - (void)setTotalPlayListTime:(double)time;	// 0x569535
// declared property setter: - (void)setUnmuxed:(BOOL)unmuxed;	// 0x5694e9
// declared property setter: - (void)setUsedSubtitleTracks:(id)tracks;	// 0x5693d9
// declared property setter: - (void)setWebVTTHeaderOffset:(long long)offset;	// 0x56959d
- (void)sortDownloadedContentHeaderDownloadableDataByBitrates;	// 0x563d95
// declared property getter: - (double)totalPlayListTime;	// 0x569501
// declared property getter: - (BOOL)unmuxed;	// 0x5694d1
// declared property getter: - (id)usedSubtitleTracks;	// 0x5693c5
// declared property getter: - (long long)webVTTHeaderOffset;	// 0x569569
@end

