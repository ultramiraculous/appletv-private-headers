/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
@private
	UIWebDocumentView *_webDocumentView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
	NSString *_markupText;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *markupText;	// G=0x32fcc355; S=0x32fcbfe1; @synthesize=_markupText
- (id)initWithMarkupText:(id)markupText;	// 0x32fcbe25
- (int)_recalcPageCount;	// 0x32fcc0e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32fcbebd
- (void)dealloc;	// 0x32fcbf81
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x32fcc2c5
// declared property getter: - (id)markupText;	// 0x32fcc355
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32fcc219
- (void)removeFromPrintPageRenderer;	// 0x32fcc08d
// declared property setter: - (void)setMarkupText:(id)text;	// 0x32fcbfe1
@end

