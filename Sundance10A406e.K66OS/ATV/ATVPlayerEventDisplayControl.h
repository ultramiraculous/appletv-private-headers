/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class AVPlayerItem, NSMutableDictionary, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVPlayerEventDisplayControl : BRControl {
	NSMutableDictionary *_textAttrs;	// 84 = 0x54
	BRTextControl *_displayText;	// 88 = 0x58
	AVPlayerItem *_playerItem;	// 92 = 0x5c
}
+ (void)hidePlaybackEventPopup;	// 0x21330d
+ (void)showPlaybackEventPopup:(id)popup;	// 0x2131a1
- (id)initWithPlayerItem:(id)playerItem;	// 0x21334d
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x213ad1
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x213a99
- (void)dealloc;	// 0x21344d
- (void)layoutSubcontrols;	// 0x2134b1
@end

