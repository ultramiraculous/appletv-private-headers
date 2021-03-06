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
@interface RUIRetailControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
	BOOL _playbackStarted;	// 84 = 0x54
}
- (id)initWithMediaURL:(id)mediaURL;	// 0x376fe1
- (void).cxx_destruct;	// 0x3774cd
- (void)_movieCued:(id)cued;	// 0x377569
- (void)_playerVisualsChanged:(id)changed;	// 0x377559
- (void)_updateVisuals;	// 0x3774e1
- (void)controlWasActivated;	// 0x377205
- (void)controlWasDeactivated;	// 0x377351
- (void)dealloc;	// 0x377199
- (void)layoutSubcontrols;	// 0x3773c9
@end

