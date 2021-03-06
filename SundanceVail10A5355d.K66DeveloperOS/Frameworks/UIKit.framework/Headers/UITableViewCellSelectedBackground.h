/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView {
	int _selectionStyle;	// 84 = 0x54
	UIColor *_multiselectBackgroundColor;	// 88 = 0x58
	UIColor *_selectionTintColor;	// 92 = 0x5c
	BOOL _multiselect;	// 96 = 0x60
}
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;	// G=0x33c3468d; S=0x33b07fb9; 
@property(retain, nonatomic) UIColor *multiselectBackgroundColor;	// G=0x33c346ad; S=0x33b08055; @synthesize=_multiselectBackgroundColor
@property(assign, nonatomic) int selectionStyle;	// G=0x33c3469d; S=0x33a9b3e5; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x33c346bd; S=0x33a9b42d; @synthesize=_selectionTintColor
- (void)dealloc;	// 0x33b2fb11
- (void)drawRect:(CGRect)rect;	// 0x33b09a1d
// declared property getter: - (BOOL)isMultiselect;	// 0x33c3468d
// declared property getter: - (id)multiselectBackgroundColor;	// 0x33c346ad
// declared property getter: - (int)selectionStyle;	// 0x33c3469d
// declared property getter: - (id)selectionTintColor;	// 0x33c346bd
// declared property setter: - (void)setMultiselect:(BOOL)multiselect;	// 0x33b07fb9
// declared property setter: - (void)setMultiselectBackgroundColor:(id)color;	// 0x33b08055
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x33a9b3e5
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x33a9b42d
@end

