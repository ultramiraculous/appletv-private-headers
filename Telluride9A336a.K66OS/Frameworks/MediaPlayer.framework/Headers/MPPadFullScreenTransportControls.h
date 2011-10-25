/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPPadFullScreenTransportControls : MPTransportControls {
}
- (id)initWithFrame:(CGRect)frame;	// 0x35bab171
- (void)_itemTypeAvailableNotification:(id)notification;	// 0x35babdc9
- (id)buttonImageForPart:(unsigned)part;	// 0x35bab4d9
- (void)dealloc;	// 0x35bab1f9
- (void)layoutSubviews;	// 0x35bab745
- (id)newVolumeSlider;	// 0x35bab44d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x35bab269
- (void)setDisabledParts:(unsigned)parts;	// 0x35bab691
- (void)setItem:(id)item;	// 0x35bab6c9
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x35bab62d
@end

