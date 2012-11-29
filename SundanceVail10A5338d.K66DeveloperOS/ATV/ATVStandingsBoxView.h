/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRReflectionControl, BRImage, BRTableView, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
	BRImage *_backgroundImage;	// 80 = 0x50
	BRTextControl *_titleControl;	// 84 = 0x54
	BRImage *_overlayImage;	// 88 = 0x58
	BRReflectionControl *_reflectionControl;	// 92 = 0x5c
	BRTableView *_tableView;	// 96 = 0x60
	float _headerHeight;	// 100 = 0x64
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0xfec7d; S=0xfec8d; 
@property(assign, nonatomic) float headerHeight;	// G=0xff0c5; S=0xff0d5; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0xff0e5; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0xfec29; S=0xfebdd; 
- (id)init;	// 0xfe9e9
- (id)accessibilityLabel;	// 0xff07d
// declared property getter: - (id)backgroundImage;	// 0xfec7d
- (void)dealloc;	// 0xfeb3d
- (void)drawRect:(CGRect)rect;	// 0xfed29
// declared property getter: - (float)headerHeight;	// 0xff0c5
- (BOOL)isAccessibilityElement;	// 0xff079
- (void)layoutSubcontrols;	// 0xfee21
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0xfec8d
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0xff0d5
// declared property setter: - (void)setTitle:(id)title;	// 0xfebdd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xfec61
// declared property getter: - (id)tableView;	// 0xff0e5
// declared property getter: - (id)title;	// 0xfec29
@end
