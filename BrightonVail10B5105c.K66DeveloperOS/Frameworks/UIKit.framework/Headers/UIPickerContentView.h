/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerContentView : UIView {
	UILabel *_titleLabel;	// 84 = 0x54
	UIImageView *_checkView;	// 88 = 0x58
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pickerContentViewFlags;	// 92 = 0x5c
}
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x348c5159; S=0x348c516d; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x348c56d9; S=0x348c56ed; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x348c5361; 
+ (float)_checkmarkOffset;	// 0x348c50ed
- (BOOL)_isSelectable;	// 0x348c5739
- (void)dealloc;	// 0x348c50f5
// declared property getter: - (BOOL)isChecked;	// 0x348c5159
// converted property getter: - (BOOL)isHighlighted;	// 0x348c56d9
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x348c570d
- (void)layoutSubviews;	// 0x348c5595
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x348c516d
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x348c56ed
// declared property getter: - (id)titleLabel;	// 0x348c5361
@end

