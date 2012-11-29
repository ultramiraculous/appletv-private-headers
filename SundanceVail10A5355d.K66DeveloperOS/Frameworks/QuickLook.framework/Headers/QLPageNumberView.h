/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIView.h> // Unknown library

@class UILabel;

@interface QLPageNumberView : UIView {
	int _pageNumber;	// 84 = 0x54
	int _pageCount;	// 88 = 0x58
	UILabel *_backgroundLabel;	// 92 = 0x5c
	UILabel *_label;	// 96 = 0x60
}
@property(assign) int pageCount;	// G=0x341edba5; S=0x341edb61; 
@property(assign) int pageNumber;	// G=0x341edb51; S=0x341edb0d; 
- (id)initWithFrame:(CGRect)frame;	// 0x341ed7f9
- (CGPathRef)_copyMutablePathForRoundedRect:(CGRect)roundedRect radius:(float)radius inverted:(BOOL)inverted;	// 0x341edd29
- (void)_updateString;	// 0x341eda11
- (void)drawRect:(CGRect)rect;	// 0x341edf49
- (void)layoutSubviews;	// 0x341edc79
// declared property getter: - (int)pageCount;	// 0x341edba5
// declared property getter: - (int)pageNumber;	// 0x341edb51
// declared property setter: - (void)setPageCount:(int)count;	// 0x341edb61
// declared property setter: - (void)setPageNumber:(int)number;	// 0x341edb0d
- (void)sizeToFit;	// 0x341edbb5
@end
