/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, BRVerticalScrollBarControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextBoxControl : BRControl {
	BRListControl *_list;	// 80 = 0x50
	NSAttributedString *_text;	// 84 = 0x54
	BRVerticalScrollBarControl *_scrollBar;	// 88 = 0x58
	float _textHeightFactor;	// 92 = 0x5c
	long _upperFocusLimit;	// 96 = 0x60
	long _lowerFocusLimit;	// 100 = 0x64
}
@property(retain) NSAttributedString *text;	// G=0x2cecc9; S=0x2cec49; converted property
@property(assign) float textHeightFactor;	// G=0x2cece9; S=0x2cecd9; converted property
- (id)init;	// 0x2ce939
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x2cf141
- (void)_forceSelectionToFocusLimit;	// 0x2cf06d
- (void)_listSelectionChanged:(id)changed;	// 0x2cf05d
- (void)_providerCountChanged:(id)changed;	// 0x2cf309
- (id)accessibilityLabel;	// 0x2cf035
- (BOOL)brEventAction:(id)action;	// 0x2cecf9
- (void)dealloc;	// 0x2ceba5
- (void)layoutSubcontrols;	// 0x2ced95
// converted property setter: - (void)setText:(id)text;	// 0x2cec49
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x2cecd9
// converted property getter: - (id)text;	// 0x2cecc9
// converted property getter: - (float)textHeightFactor;	// 0x2cece9
@end

