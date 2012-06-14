/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class AVPlayerLayer, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface LTVideoVisualControl : BRControl {
	AVPlayerLayer *_output;	// 80 = 0x50
	NSMutableArray *_subtitleLines;	// 84 = 0x54
	NSDictionary *_subtitleBaseAttributes;	// 88 = 0x58
	NSDictionary *_subtitleItalicAttributes;	// 92 = 0x5c
}
- (id)initWithPlayer:(id)player;	// 0x4eb1
- (id)initWithPlayerLayer:(id)playerLayer;	// 0x4f09
- (void).cxx_destruct;	// 0x5909
- (void)dealloc;	// 0x5389
- (void)layoutSubcontrols;	// 0x56c9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x561d
- (void)setSubtitleLines:(id)lines;	// 0x5409
@end

