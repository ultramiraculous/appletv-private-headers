/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UILabel;

@interface MPClosedCaptionDisplay : UIView {
	UILabel *_label;	// 84 = 0x54
	UIView *_backgroundView;	// 88 = 0x58
	BOOL _hidden;	// 92 = 0x5c
	BOOL _rotating;	// 93 = 0x5d
}
- (id)initWithFrame:(CGRect)frame;	// 0x31df0a31
- (void)_hidePanel;	// 0x31df0cb1
- (void)_updatePositioning:(BOOL)positioning;	// 0x31df0f11
- (void)endLayoutChange;	// 0x31df0e81
- (void)setNeedsLayout;	// 0x31df0ebd
- (void)setText:(id)text;	// 0x31df1259
- (void)startLayoutChange:(BOOL)change;	// 0x31df0d31
@end

