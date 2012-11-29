/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPInlineAudioTransportControls : MPTransportControls {
	int _style;	// 180 = 0xb4
}
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x35d25361
- (id)buttonImageForPart:(unsigned long long)part;	// 0x35d2574d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35d258a9
- (void)layoutSubviews;	// 0x35d258e5
- (id)newVolumeSlider;	// 0x35d2584d
- (id)pauseButtonImage;	// 0x35d2587d
- (id)playButtonImage;	// 0x35d25851
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x35d2540d
@end
