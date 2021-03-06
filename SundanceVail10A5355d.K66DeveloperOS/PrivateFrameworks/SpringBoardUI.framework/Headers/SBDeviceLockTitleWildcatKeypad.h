/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {
	BOOL _highlighted;	// 92 = 0x5c
	UILabel *_titleLabel;	// 96 = 0x60
	UILabel *_subtitleLabel;	// 100 = 0x64
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x36398bc9; S=0x36398bd9; converted property
@property(retain) id subtitle;	// G=0x36398cd1; S=0x36398cf1; converted property
@property(retain) id title;	// G=0x36398c91; S=0x36398cb1; converted property
- (id)_backgroundImage;	// 0x36398b81
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x36398701
- (void)blinkSubtitle;	// 0x36398d2d
- (void)dealloc;	// 0x36398a69
// converted property getter: - (BOOL)isHighlighted;	// 0x36398bc9
- (void)layoutSubviews;	// 0x36398acd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x36398bd9
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x36398cf1
// converted property setter: - (void)setTitle:(id)title;	// 0x36398cb1
// converted property getter: - (id)subtitle;	// 0x36398cd1
// converted property getter: - (id)title;	// 0x36398c91
@end

