/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewPrintFormatter.h"

@class UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
@private
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
- (int)_recalcPageCount;	// 0x30352891
- (id)_webDocumentView;	// 0x30352779
- (id)copyWithZone:(NSZone *)zone;	// 0x303527f9
- (void)dealloc;	// 0x30352849
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x30352a09
- (CGRect)rectForPageAtIndex:(int)index;	// 0x30352979
- (void)removeFromPrintPageRenderer;	// 0x303527ad
@end

