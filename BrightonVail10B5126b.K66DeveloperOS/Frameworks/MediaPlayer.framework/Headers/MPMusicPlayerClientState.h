/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaItem, MPMediaQuery, MPMediaPlaylist;

@interface MPMusicPlayerClientState : NSObject {
	BOOL _allowsRemoteUIAccess;	// 4 = 0x4
	int _backgroundPlaybackAccess;	// 8 = 0x8
	MPMediaItem *_firstItem;	// 12 = 0xc
	MPMediaPlaylist *_geniusMixPlaylist;	// 16 = 0x10
	BOOL _hasAudioBackgroundMode;	// 20 = 0x14
	MPMediaQuery *_query;	// 24 = 0x18
	int _repeatMode;	// 28 = 0x1c
	BOOL _seeking;	// 32 = 0x20
	int _shuffleMode;	// 36 = 0x24
	BOOL _useApplicationSpecificQueue;	// 40 = 0x28
	BOOL _videoPlaybackEnabled;	// 41 = 0x29
}
@property(assign, nonatomic) BOOL allowsRemoteUIAccess;	// G=0x31d22ee5; S=0x31d22ef5; @synthesize=_allowsRemoteUIAccess
@property(assign, nonatomic) int backgroundPlaybackAccess;	// G=0x31d22f05; S=0x31d22f15; @synthesize=_backgroundPlaybackAccess
@property(retain, nonatomic) MPMediaItem *firstItem;	// G=0x31d22f25; S=0x31d22f35; @synthesize=_firstItem
@property(retain, nonatomic) MPMediaPlaylist *geniusMixPlaylist;	// G=0x31d22f45; S=0x31d22e1d; @synthesize=_geniusMixPlaylist
@property(assign, nonatomic) BOOL hasAudioBackgroundMode;	// G=0x31d22f55; S=0x31d22f65; @synthesize=_hasAudioBackgroundMode
@property(retain, nonatomic) MPMediaQuery *query;	// G=0x31d22f75; S=0x31d22e81; @synthesize=_query
@property(assign, nonatomic) int repeatMode;	// G=0x31d22f85; S=0x31d22f95; @synthesize=_repeatMode
@property(assign, nonatomic) BOOL seeking;	// G=0x31d22fa5; S=0x31d22fb5; @synthesize=_seeking
@property(assign, nonatomic) int shuffleMode;	// G=0x31d22fc5; S=0x31d22fd5; @synthesize=_shuffleMode
@property(assign, nonatomic) BOOL useApplicationSpecificQueue;	// G=0x31d22fe5; S=0x31d22ff5; @synthesize=_useApplicationSpecificQueue
@property(assign, nonatomic) BOOL videoPlaybackEnabled;	// G=0x31d23005; S=0x31d23015; @synthesize=_videoPlaybackEnabled
// declared property getter: - (BOOL)allowsRemoteUIAccess;	// 0x31d22ee5
// declared property getter: - (int)backgroundPlaybackAccess;	// 0x31d22f05
- (void)dealloc;	// 0x31d22da5
// declared property getter: - (id)firstItem;	// 0x31d22f25
// declared property getter: - (id)geniusMixPlaylist;	// 0x31d22f45
// declared property getter: - (BOOL)hasAudioBackgroundMode;	// 0x31d22f55
// declared property getter: - (id)query;	// 0x31d22f75
// declared property getter: - (int)repeatMode;	// 0x31d22f85
// declared property getter: - (BOOL)seeking;	// 0x31d22fa5
// declared property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x31d22ef5
// declared property setter: - (void)setBackgroundPlaybackAccess:(int)access;	// 0x31d22f15
// declared property setter: - (void)setFirstItem:(id)item;	// 0x31d22f35
// declared property setter: - (void)setGeniusMixPlaylist:(id)playlist;	// 0x31d22e1d
// declared property setter: - (void)setHasAudioBackgroundMode:(BOOL)mode;	// 0x31d22f65
// declared property setter: - (void)setQuery:(id)query;	// 0x31d22e81
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x31d22f95
// declared property setter: - (void)setSeeking:(BOOL)seeking;	// 0x31d22fb5
// declared property setter: - (void)setShuffleMode:(int)mode;	// 0x31d22fd5
// declared property setter: - (void)setUseApplicationSpecificQueue:(BOOL)queue;	// 0x31d22ff5
// declared property setter: - (void)setVideoPlaybackEnabled:(BOOL)enabled;	// 0x31d23015
// declared property getter: - (int)shuffleMode;	// 0x31d22fc5
// declared property getter: - (BOOL)useApplicationSpecificQueue;	// 0x31d22fe5
// declared property getter: - (BOOL)videoPlaybackEnabled;	// 0x31d23005
@end

