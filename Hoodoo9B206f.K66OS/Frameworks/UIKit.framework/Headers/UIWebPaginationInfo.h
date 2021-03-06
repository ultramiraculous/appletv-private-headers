/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIWebDocumentView;
@protocol WebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject {
@private
	NSObject<WebDocumentView> *_documentView;	// 4 = 0x4
	float _scaleFactor;	// 8 = 0x8
	CGSize _layoutSize;	// 12 = 0xc
	NSArray *_pageRects;	// 20 = 0x14
	UIWebDocumentView *_webDocumentView;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) float lastPageHeight;	// G=0x35549c41; 
@property(readonly, assign) CGSize layoutSize;	// G=0x35549dbd; converted property
@property(readonly, assign, nonatomic) unsigned pageCount;	// G=0x35549c21; 
@property(readonly, retain) NSArray *pageRects;	// G=0x35549dd9; converted property
@property(readonly, assign) float scaleFactor;	// G=0x35549dad; converted property
@property(retain, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x35549df9; S=0x35549e09; @synthesize=_webDocumentView
- (id)initWithDocumentView:(id)documentView scaleFactor:(float)factor layoutSize:(CGSize)size pageRects:(id)rects;	// 0x35549add
- (void)dealloc;	// 0x35549b99
- (id)documentView;	// 0x35549de9
// declared property getter: - (float)lastPageHeight;	// 0x35549c41
// converted property getter: - (CGSize)layoutSize;	// 0x35549dbd
// declared property getter: - (unsigned)pageCount;	// 0x35549c21
// converted property getter: - (id)pageRects;	// 0x35549dd9
// converted property getter: - (float)scaleFactor;	// 0x35549dad
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x35549e09
- (CGSize)sizeForPageAtIndex:(int)index;	// 0x35549ce1
// declared property getter: - (id)webDocumentView;	// 0x35549df9
@end

