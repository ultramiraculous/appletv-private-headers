/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRHeaderControl : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_subtitle;	// 88 = 0x58
	BRImageControl *_icon;	// 92 = 0x5c
	float _iconHorizontalOffset;	// 96 = 0x60
	float _iconKerningFactor;	// 100 = 0x64
	float _iconScaleFactor;	// 104 = 0x68
	float _iconEdgeSpace;	// 108 = 0x6c
	int _iconPosition;	// 112 = 0x70
	BOOL _titleHidesIcon;	// 116 = 0x74
}
@property(readonly, retain) BRImageControl *icon;	// G=0x336075; converted property
@property(assign) float iconEdgeSpace;	// G=0x3361a9; S=0x33615d; converted property
@property(assign) float iconHorizontalOffset;	// G=0x3360b5; S=0x336095; converted property
@property(assign) float iconKerningFactor;	// G=0x3360e5; S=0x3360c5; converted property
@property(assign) int iconPosition;	// G=0x33614d; S=0x336125; converted property
@property(assign) float iconScaleFactor;	// G=0x336115; S=0x3360f5; converted property
@property(retain) BRTextControl *subtitle;	// G=0x335ea9; S=0x335e95; converted property
@property(retain) BRTextControl *title;	// G=0x335d81; S=0x335d6d; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x336981; S=0x336991; @synthesize=_titleHidesIcon
- (id)init;	// 0x335ae5
- (id)accessibilityLabel;	// 0x3368dd
- (void)controlWasActivated;	// 0x335bd9
- (void)dealloc;	// 0x335c19
// converted property getter: - (id)icon;	// 0x336075
// converted property getter: - (float)iconEdgeSpace;	// 0x3361a9
- (CGRect)iconFrame;	// 0x3361b9
// converted property getter: - (float)iconHorizontalOffset;	// 0x3360b5
// converted property getter: - (float)iconKerningFactor;	// 0x3360e5
// converted property getter: - (int)iconPosition;	// 0x33614d
// converted property getter: - (float)iconScaleFactor;	// 0x336115
- (void)layoutSubcontrols;	// 0x33639d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x335ee1
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x336001
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x33615d
- (void)setIconHidden:(BOOL)hidden;	// 0x3361e9
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x336095
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x3360c5
// converted property setter: - (void)setIconPosition:(int)position;	// 0x336125
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x3360f5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x335e95
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x335db9
// converted property setter: - (void)setTitle:(id)title;	// 0x335d6d
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x335c91
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x336991
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x336209
// converted property getter: - (id)subtitle;	// 0x335ea9
// converted property getter: - (id)title;	// 0x335d81
// declared property getter: - (BOOL)titleHidesIcon;	// 0x336981
@end

