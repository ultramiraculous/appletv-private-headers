/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
	UIWebDocumentView *_webDocumentView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
	NSString *_markupText;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *markupText;	// G=0x32e5028d; S=0x32e4ff75; @synthesize=_markupText
- (id)initWithMarkupText:(id)markupText;	// 0x32e4fdb5
- (int)_recalcPageCount;	// 0x32e5006d
- (id)copyWithZone:(NSZone *)zone;	// 0x32e4fe4d
- (void)dealloc;	// 0x32e4ff11
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x32e50201
// declared property getter: - (id)markupText;	// 0x32e5028d
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32e5014d
- (void)removeFromPrintPageRenderer;	// 0x32e5001d
// declared property setter: - (void)setMarkupText:(id)text;	// 0x32e4ff75
@end
