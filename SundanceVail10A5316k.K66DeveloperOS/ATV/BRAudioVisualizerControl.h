/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRAudioVisualizerControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
}
@property(assign, nonatomic) BRMediaPlayer *player;	// G=0x34585d; S=0x345845; @synthesize=_player
- (BOOL)displayTrackPopup;	// 0x345855
// declared property getter: - (id)player;	// 0x34585d
// declared property setter: - (void)setPlayer:(id)player;	// 0x345845
- (BOOL)shouldUseMusicContextMenu;	// 0x345859
@end

