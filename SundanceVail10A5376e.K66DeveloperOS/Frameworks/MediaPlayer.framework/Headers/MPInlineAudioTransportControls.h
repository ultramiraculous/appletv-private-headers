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
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x36cffb39
- (id)buttonImageForPart:(unsigned long long)part;	// 0x36cfff25
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36d00081
- (void)layoutSubviews;	// 0x36d000bd
- (id)newVolumeSlider;	// 0x36d00025
- (id)pauseButtonImage;	// 0x36d00055
- (id)playButtonImage;	// 0x36d00029
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x36cffbe5
@end

