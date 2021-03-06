/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UITextRenderingAttributes, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel {
@private
	float _boundsWidth;	// 112 = 0x70
	UITextRenderingAttributes *_attributes;	// 116 = 0x74
	_UITabBarItemAppearanceStorage *_appearanceStorage;	// 120 = 0x78
	BOOL _isSelected;	// 124 = 0x7c
}
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x33135501
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33135505
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x33135765
- (id)_attributes;	// 0x32f51e9d
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3313570d
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x3313571d
- (void)dealloc;	// 0x331354a1
- (void)setSelected:(BOOL)selected;	// 0x32f53735
- (void)sizeToFitBounds:(CGRect)fitBounds;	// 0x32f55e61
- (void)updateTextColorsForSelection;	// 0x32f51ca5
@end

