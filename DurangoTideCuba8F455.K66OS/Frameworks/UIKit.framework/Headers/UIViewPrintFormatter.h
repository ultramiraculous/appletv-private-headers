/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
@private
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3034b3d9; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x3034b525
- (int)_recalcPageCount;	// 0x3034b575
- (id)copyWithZone:(NSZone *)zone;	// 0x3034b4d5
- (void)dealloc;	// 0x3034b48d
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x3034b745
- (CGRect)rectForPageAtIndex:(int)index;	// 0x3034b651
// declared property getter: - (id)view;	// 0x3034b3d9
@end

