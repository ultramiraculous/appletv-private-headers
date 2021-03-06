/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
	UIPrintPageRenderer *_printPageRenderer;	// 4 = 0x4
	float _maximumContentHeight;	// 8 = 0x8
	float _maximumContentWidth;	// 12 = 0xc
	UIEdgeInsets _contentInsets;	// 16 = 0x10
	int _startPage;	// 32 = 0x20
	int _pageCount;	// 36 = 0x24
	BOOL _needsRecalc;	// 40 = 0x28
}
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// G=0x33d3e9b5; S=0x33d3e5f5; @synthesize=_contentInsets
@property(assign, nonatomic) float maximumContentHeight;	// G=0x33d3e995; S=0x33d3e5bd; @synthesize=_maximumContentHeight
@property(assign, nonatomic) float maximumContentWidth;	// G=0x33d3e9a5; S=0x33d3e585; @synthesize=_maximumContentWidth
@property(readonly, assign, nonatomic) int pageCount;	// G=0x33d3e701; @synthesize=_pageCount
@property(assign, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x33d3e985; S=0x33d3e685; @synthesize=_printPageRenderer
@property(assign, nonatomic) int startPage;	// G=0x33d3e9d9; S=0x33d3e9e9; @synthesize=_startPage
- (id)init;	// 0x33d3e425
- (CGRect)_pageContentRect:(BOOL)rect;	// 0x33d3e72d
- (void)_recalcIfNecessary;	// 0x33d3e6c1
- (int)_recalcPageCount;	// 0x33d3e729
- (void)_setNeedsRecalc;	// 0x33d3e6ad
// declared property getter: - (UIEdgeInsets)contentInsets;	// 0x33d3e9b5
- (id)copyWithZone:(NSZone *)zone;	// 0x33d3e4a1
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x33d3e981
// declared property getter: - (float)maximumContentHeight;	// 0x33d3e995
// declared property getter: - (float)maximumContentWidth;	// 0x33d3e9a5
// declared property getter: - (int)pageCount;	// 0x33d3e701
// declared property getter: - (id)printPageRenderer;	// 0x33d3e985
- (CGRect)rectForPageAtIndex:(int)index;	// 0x33d3e8cd
- (void)removeFromPrintPageRenderer;	// 0x33d3e535
// declared property setter: - (void)setContentInsets:(UIEdgeInsets)insets;	// 0x33d3e5f5
// declared property setter: - (void)setMaximumContentHeight:(float)height;	// 0x33d3e5bd
// declared property setter: - (void)setMaximumContentWidth:(float)width;	// 0x33d3e585
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x33d3e685
// declared property setter: - (void)setStartPage:(int)page;	// 0x33d3e9e9
// declared property getter: - (int)startPage;	// 0x33d3e9d9
@end

