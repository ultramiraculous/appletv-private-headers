/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UISegmentedControlAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
@private
	UIView *_info;	// 52 = 0x34
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 56 = 0x38
	float _width;	// 60 = 0x3c
	CGSize _contentOffset;	// 64 = 0x40
	UIColor *_tintColor;	// 72 = 0x48
	int _barStyle;	// 76 = 0x4c
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;	// 80 = 0x50
}
@property(assign) int controlSize;	// G=0x358652ad; S=0x358652c1; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x357233fd; S=0x357ef8e1; converted property
@property(retain) UIView *info;	// G=0x3573c4e9; S=0x357235c1; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x35865299; S=0x35725b95; 
@property(assign, getter=isSelected) BOOL selected;	// G=0x3573c685; S=0x35725f49; 
- (id)initWithCoder:(id)coder;	// 0x358649b9
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x35723255
- (float)_barHeight;	// 0x35726b65
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x357234e9
- (id)_currentOptionsStyleTextColor;	// 0x357244d1
- (id)_currentOptionsStyleTextShadowColor;	// 0x3572467d
- (id)_dividerImageForRight:(BOOL)right;	// 0x35724ded
- (id)_dividerImageForRight:(BOOL)right isCustom:(BOOL *)custom;	// 0x35724e01
- (float)_idealWidth;	// 0x357269b5
- (BOOL)_isInMiniBar;	// 0x35724c1d
- (float)_paddingForLeft:(BOOL)left;	// 0x35726b99
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35864bc5
- (void)_positionInfo;	// 0x35724811
- (unsigned)_segmentState;	// 0x35724451
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x35725ab9
- (id)_texturedFillImage;	// 0x357ef121
- (id)_texturedLeftCapImage;	// 0x357ef0d1
- (id)_texturedRightCapImage;	// 0x357f1a81
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x357ef171
- (void)_updateBackgroundImage;	// 0x35725135
- (void)_updateTextColors;	// 0x35723855
- (void)_updateTexturedBackgroundImage;	// 0x357ee8c1
- (void)animateAdd:(BOOL)add;	// 0x3586532d
- (void)animateRemoveForWidth:(float)width;	// 0x35865369
- (CGRect)contentRect;	// 0x35724a69
- (CGSize)contentSize;	// 0x35726a59
// declared property getter: - (int)controlSize;	// 0x358652ad
- (void)dealloc;	// 0x35726e29
- (id)disabledTextColor;	// 0x35864ef9
- (void)encodeWithCoder:(id)coder;	// 0x35864c49
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35865635
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x357bba8d
// converted property getter: - (id)info;	// 0x3573c4e9
- (id)infoName;	// 0x358655d1
- (void)insertDividerView;	// 0x35724c41
// converted property getter: - (BOOL)isHighlighted;	// 0x357233fd
// declared property getter: - (BOOL)isMomentary;	// 0x35865299
// declared property getter: - (BOOL)isSelected;	// 0x3573c685
- (void)setAutosizeText:(BOOL)text;	// 0x3586525d
- (void)setBarStyle:(int)style;	// 0x35865059
- (void)setBounds:(CGRect)bounds;	// 0x358654b9
- (void)setContentOffset:(CGSize)offset;	// 0x35865591
// declared property setter: - (void)setControlSize:(int)size;	// 0x358652c1
- (void)setEnabled:(BOOL)enabled;	// 0x35725a59
- (void)setFrame:(CGRect)frame;	// 0x35723411
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x357ef8e1
// converted property setter: - (void)setInfo:(id)info;	// 0x357235c1
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x35725b95
- (void)setPosition:(unsigned)position;	// 0x35726ccd
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x35725f49
- (void)setShowDivider:(BOOL)divider;	// 0x35726d35
- (void)setTintColor:(id)color;	// 0x35865179
- (void)updateDividerViewToMatchSegment:(id)matchSegment;	// 0x35725fb5
- (BOOL)useBlockyMagnificationInClassic;	// 0x3586569d
@end

