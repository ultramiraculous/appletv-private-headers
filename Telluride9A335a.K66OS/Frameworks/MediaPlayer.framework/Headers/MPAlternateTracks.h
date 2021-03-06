/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary, MPAVItem;

@interface MPAlternateTracks : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSDictionary *_alternateTracks;	// 8 = 0x8
	NSMutableDictionary *_trackChangeDictionary;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0x300f8f51; 
- (id)initWithItem:(id)item;	// 0x300f89ed
- (id)_keyForTrackType:(unsigned)trackType;	// 0x300f9c69
- (void)beginTrackChanges;	// 0x300f8a9d
- (void)commitTrackChanges;	// 0x300f8ae9
- (id)currentTrackForType:(unsigned)type;	// 0x300f8d8d
- (void)dealloc;	// 0x300f8a19
- (BOOL)hasTracksForTypes:(unsigned)types;	// 0x300f90cd
- (unsigned)indexOfCurrentTrackForType:(unsigned)type;	// 0x300f8de1
// declared property getter: - (BOOL)isLoaded;	// 0x300f8f51
- (void)reloadData;	// 0x300f91b9
- (void)setTrack:(id)track forType:(unsigned)type;	// 0x300f8f69
- (unsigned)trackCountForTypes:(unsigned)types;	// 0x300f913d
- (id)tracksForType:(unsigned)type;	// 0x300f9089
@end

