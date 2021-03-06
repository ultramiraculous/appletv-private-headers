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
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x33d3f9e1; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x33d3f5f1
- (int)_recalcPageCount;	// 0x33d3f6e5
- (id)copyWithZone:(NSZone *)zone;	// 0x33d3f645
- (void)dealloc;	// 0x33d3f699
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x33d3f8cd
- (CGRect)rectForPageAtIndex:(int)index;	// 0x33d3f7c1
// declared property getter: - (id)view;	// 0x33d3f9e1
@end

