/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface RUIYTPlayerMemento : XXUnknownSuperclass {
	BOOL isPlaybackRestorable;	// 4 = 0x4
	int mediaIndex;	// 8 = 0x8
	NSArray *_trackList;	// 12 = 0xc
}
@property(assign) BOOL isPlaybackRestorable;	// G=0x23910d; S=0x239125; @synthesize
@property(assign) int mediaIndex;	// G=0x23913d; S=0x239151; @synthesize
@property(retain) NSArray *trackList;	// G=0x239169; S=0x23917d; @synthesize=_trackList
- (void).cxx_destruct;	// 0x23918d
// declared property getter: - (BOOL)isPlaybackRestorable;	// 0x23910d
// declared property getter: - (int)mediaIndex;	// 0x23913d
// declared property setter: - (void)setIsPlaybackRestorable:(BOOL)restorable;	// 0x239125
// declared property setter: - (void)setMediaIndex:(int)index;	// 0x239151
// declared property setter: - (void)setTrackList:(id)list;	// 0x23917d
// declared property getter: - (id)trackList;	// 0x239169
@end

