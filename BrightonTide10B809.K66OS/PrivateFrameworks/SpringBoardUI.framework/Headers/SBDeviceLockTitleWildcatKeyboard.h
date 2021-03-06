/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeyboard : SBDeviceLockTitle {
	BOOL _highlighted;	// 92 = 0x5c
	UILabel *_titleLabel;	// 96 = 0x60
	UILabel *_subtitleLabel;	// 100 = 0x64
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x3547befd; S=0x3547bf0d; converted property
@property(retain) id subtitle;	// G=0x3547c079; S=0x3547c099; converted property
@property(retain) id title;	// G=0x3547bfed; S=0x3547c00d; converted property
- (id)_backgroundImage;	// 0x3547bec1
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3547ba5d
- (void)blinkSubtitle;	// 0x3547c105
- (void)dealloc;	// 0x3547bd9d
// converted property getter: - (BOOL)isHighlighted;	// 0x3547befd
- (void)layoutSubviews;	// 0x3547be01
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3547bf0d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3547c099
// converted property setter: - (void)setTitle:(id)title;	// 0x3547c00d
// converted property getter: - (id)subtitle;	// 0x3547c079
// converted property getter: - (id)title;	// 0x3547bfed
@end

