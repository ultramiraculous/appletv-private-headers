/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRHeaderControl : BRControl {
	BRTextControl *_title;	// 80 = 0x50
	BRTextControl *_subtitle;	// 84 = 0x54
	BRImageControl *_icon;	// 88 = 0x58
	float _iconHorizontalOffset;	// 92 = 0x5c
	float _iconKerningFactor;	// 96 = 0x60
	float _iconScaleFactor;	// 100 = 0x64
	float _iconEdgeSpace;	// 104 = 0x68
	int _iconPosition;	// 108 = 0x6c
	BOOL _titleHidesIcon;	// 112 = 0x70
}
@property(readonly, retain) BRImageControl *icon;	// G=0x2a835d; converted property
@property(assign) float iconEdgeSpace;	// G=0x2a8491; S=0x2a8445; converted property
@property(assign) float iconHorizontalOffset;	// G=0x2a839d; S=0x2a837d; converted property
@property(assign) float iconKerningFactor;	// G=0x2a83cd; S=0x2a83ad; converted property
@property(assign) int iconPosition;	// G=0x2a8435; S=0x2a840d; converted property
@property(assign) float iconScaleFactor;	// G=0x2a83fd; S=0x2a83dd; converted property
@property(retain) BRTextControl *subtitle;	// G=0x2a8191; S=0x2a817d; converted property
@property(retain) BRTextControl *title;	// G=0x2a8069; S=0x2a8055; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x2a8c51; S=0x2a8c61; @synthesize=_titleHidesIcon
- (id)init;	// 0x2a7dcd
- (id)accessibilityLabel;	// 0x2a8bad
- (void)controlWasActivated;	// 0x2a7ec1
- (void)dealloc;	// 0x2a7f01
// converted property getter: - (id)icon;	// 0x2a835d
// converted property getter: - (float)iconEdgeSpace;	// 0x2a8491
- (CGRect)iconFrame;	// 0x2a84a1
// converted property getter: - (float)iconHorizontalOffset;	// 0x2a839d
// converted property getter: - (float)iconKerningFactor;	// 0x2a83cd
// converted property getter: - (int)iconPosition;	// 0x2a8435
// converted property getter: - (float)iconScaleFactor;	// 0x2a83fd
- (void)layoutSubcontrols;	// 0x2a867d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x2a81c9
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x2a82e9
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x2a8445
- (void)setIconHidden:(BOOL)hidden;	// 0x2a84d5
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x2a837d
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x2a83ad
// converted property setter: - (void)setIconPosition:(int)position;	// 0x2a840d
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x2a83dd
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2a817d
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x2a80a1
// converted property setter: - (void)setTitle:(id)title;	// 0x2a8055
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x2a7f79
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x2a8c61
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2a84f5
// converted property getter: - (id)subtitle;	// 0x2a8191
// converted property getter: - (id)title;	// 0x2a8069
// declared property getter: - (BOOL)titleHidesIcon;	// 0x2a8c51
@end

