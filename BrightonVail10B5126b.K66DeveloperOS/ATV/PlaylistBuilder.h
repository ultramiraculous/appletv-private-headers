/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CDNDownloadData, NSMutableArray, NSMutableDictionary;

@interface PlaylistBuilder : XXUnknownSuperclass {
	NSMutableDictionary *playlists_;	// 4 = 0x4
	CDNDownloadData *selectedCdn_;	// 8 = 0x8
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 12 = 0xc
	int initialPlaylistTrackIndex_;	// 16 = 0x10
	int initialPlaylistStreamIndex_;	// 20 = 0x14
	BOOL unmuxed_;	// 24 = 0x18
	double totalPlayListTime_;	// 28 = 0x1c
}
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x5006e9; S=0x5006fd; @synthesize=downloadedContentHeaderDownloadableData_
@property(assign) int initialPlaylistStreamIndex;	// G=0x500739; S=0x50074d; @synthesize=initialPlaylistStreamIndex_
@property(assign) int initialPlaylistTrackIndex;	// G=0x50070d; S=0x500721; @synthesize=initialPlaylistTrackIndex_
@property(retain) NSMutableDictionary *playlists;	// G=0x5006a1; S=0x5006b5; @synthesize=playlists_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x5006c5; S=0x5006d9; @synthesize=selectedCdn_
@property(assign) double totalPlayListTime;	// G=0x500795; S=0x5007c9; @synthesize=totalPlayListTime_
@property(assign) BOOL unmuxed;	// G=0x500765; S=0x50077d; @synthesize=unmuxed_
+ (id)sharedInstance;	// 0x4fcf91
- (BOOL)build:(unsigned)build;	// 0x4fd10d
- (BOOL)buildIFramePlaylist:(id)playlist;	// 0x4feb69
- (BOOL)buildMasterPlaylist;	// 0x4ffa29
- (BOOL)buildPlaylist:(id)playlist withMaxAudioBitrate:(int)maxAudioBitrate;	// 0x4fdc09
- (void)dealloc;	// 0x4fd07d
- (id)description;	// 0x500375
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x5006e9
- (double)getContentLength:(id)length;	// 0x4fda09
// declared property getter: - (int)initialPlaylistStreamIndex;	// 0x500739
// declared property getter: - (int)initialPlaylistTrackIndex;	// 0x50070d
- (BOOL)isUnmuxed;	// 0x500589
- (void)metrics;	// 0x500371
// declared property getter: - (id)playlists;	// 0x5006a1
- (void)reset;	// 0x4fd655
- (void)selectDownloadedContentHeaderDownloadableDataInitialBitrate:(unsigned)bitrate;	// 0x4fd6d1
// declared property getter: - (id)selectedCdn;	// 0x5006c5
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x5006fd
// declared property setter: - (void)setInitialPlaylistStreamIndex:(int)index;	// 0x50074d
// declared property setter: - (void)setInitialPlaylistTrackIndex:(int)index;	// 0x500721
// declared property setter: - (void)setPlaylists:(id)playlists;	// 0x5006b5
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x5006d9
// declared property setter: - (void)setTotalPlayListTime:(double)time;	// 0x5007c9
// declared property setter: - (void)setUnmuxed:(BOOL)unmuxed;	// 0x50077d
- (void)sortDownloadedContentHeaderDownloadableDataByBitrates;	// 0x4fd69d
// declared property getter: - (double)totalPlayListTime;	// 0x500795
// declared property getter: - (BOOL)unmuxed;	// 0x500765
@end
