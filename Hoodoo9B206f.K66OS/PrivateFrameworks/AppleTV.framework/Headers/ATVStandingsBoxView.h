/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImage, BRReflectionControl, BRTableView, NSString;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
@private
	BRImage *_backgroundImage;	// 48 = 0x30
	BRTextControl *_titleControl;	// 52 = 0x34
	BRImage *_overlayImage;	// 56 = 0x38
	BRReflectionControl *_reflectionControl;	// 60 = 0x3c
	BRTableView *_tableView;	// 64 = 0x40
	float _headerHeight;	// 68 = 0x44
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x365ef975; S=0x365ef985; 
@property(assign, nonatomic) float headerHeight;	// G=0x365efdb9; S=0x365efdc9; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x365efdd9; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x365ef921; S=0x365ef8d5; 
- (id)init;	// 0x365ef6e1
- (id)accessibilityLabel;	// 0x365efd71
// declared property getter: - (id)backgroundImage;	// 0x365ef975
- (void)dealloc;	// 0x365ef839
- (void)drawInContext:(CGContextRef)context;	// 0x365efa31
// declared property getter: - (float)headerHeight;	// 0x365efdb9
- (BOOL)isAccessibilityElement;	// 0x365efd6d
- (void)layoutSubcontrols;	// 0x365efb25
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x365ef985
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x365efdc9
// declared property setter: - (void)setTitle:(id)title;	// 0x365ef8d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x365ef959
// declared property getter: - (id)tableView;	// 0x365efdd9
// declared property getter: - (id)title;	// 0x365ef921
@end

