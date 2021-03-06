/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIFont, UIColor, UITextView, UIWebPaginationInfo, NSString;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
@private
	UITextView *_textView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
@property(retain, nonatomic) UIColor *color;	// G=0x303cc7d9; S=0x303cc7f9; @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x303cc74d; S=0x303cc76d; @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x303cc6a5; S=0x303cc6c5; @dynamic
@property(assign, nonatomic) int textAlignment;	// G=0x303cc855; S=0x303cc875; @dynamic
- (id)initWithText:(id)text;	// 0x303cc459
- (int)_recalcPageCount;	// 0x303cc91d
// declared property getter: - (id)color;	// 0x303cc7d9
- (id)copyWithZone:(NSZone *)zone;	// 0x303cc4f1
- (void)dealloc;	// 0x303cc641
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x303ccac5
// declared property getter: - (id)font;	// 0x303cc74d
- (CGRect)rectForPageAtIndex:(int)index;	// 0x303cca11
- (void)removeFromPrintPageRenderer;	// 0x303cc8cd
// declared property setter: - (void)setColor:(id)color;	// 0x303cc7f9
// declared property setter: - (void)setFont:(id)font;	// 0x303cc76d
// declared property setter: - (void)setText:(id)text;	// 0x303cc6c5
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x303cc875
// declared property getter: - (id)text;	// 0x303cc6a5
// declared property getter: - (int)textAlignment;	// 0x303cc855
@end

