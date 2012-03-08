/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl, BRListControl;

@interface BRResumeMenuControl : BRControl {
@private
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_footnote;	// 52 = 0x34
	BRListControl *_resumeMenu;	// 56 = 0x38
	BRImageControl *_blurControl;	// 60 = 0x3c
	float _blurOversizeFactor;	// 64 = 0x40
}
@property(retain) BRTextControl *footnote;	// G=0x302bcdf1; S=0x302bccf5; converted property
@property(retain) BRTextControl *title;	// G=0x302bccbd; S=0x302bcbb1; converted property
- (id)init;	// 0x302bc985
- (CGColorRef)blurControlBackgroundColor;	// 0x302bd3a1
- (BOOL)brEventAction:(id)action;	// 0x302bd0f9
- (void)dealloc;	// 0x302bcb29
// converted property getter: - (id)footnote;	// 0x302bcdf1
- (void)layoutSubcontrols;	// 0x302bce29
- (id)list;	// 0x302bd195
- (id)preferredActionForKey:(id)key;	// 0x302bd2b1
- (void)setBlurOversizeFactor:(float)factor;	// 0x302bd291
// converted property setter: - (void)setFootnote:(id)footnote;	// 0x302bccf5
- (void)setImage:(id)image;	// 0x302bd1a5
// converted property setter: - (void)setTitle:(id)title;	// 0x302bcbb1
// converted property getter: - (id)title;	// 0x302bccbd
@end
