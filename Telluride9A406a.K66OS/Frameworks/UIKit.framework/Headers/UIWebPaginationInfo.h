/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWebDocumentView, NSArray;
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
@property(readonly, assign, nonatomic) float lastPageHeight;	// G=0x358b442d; 
@property(readonly, assign) CGSize layoutSize;	// G=0x358b45a9; converted property
@property(readonly, assign, nonatomic) unsigned pageCount;	// G=0x358b440d; 
@property(readonly, retain) NSArray *pageRects;	// G=0x358b45c5; converted property
@property(readonly, assign) float scaleFactor;	// G=0x358b4599; converted property
@property(retain, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x358b45e5; S=0x358b45f5; @synthesize=_webDocumentView
- (id)initWithDocumentView:(id)documentView scaleFactor:(float)factor layoutSize:(CGSize)size pageRects:(id)rects;	// 0x358b42c9
- (void)dealloc;	// 0x358b4385
- (id)documentView;	// 0x358b45d5
// declared property getter: - (float)lastPageHeight;	// 0x358b442d
// converted property getter: - (CGSize)layoutSize;	// 0x358b45a9
// declared property getter: - (unsigned)pageCount;	// 0x358b440d
// converted property getter: - (id)pageRects;	// 0x358b45c5
// converted property getter: - (float)scaleFactor;	// 0x358b4599
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x358b45f5
- (CGSize)sizeForPageAtIndex:(int)index;	// 0x358b44cd
// declared property getter: - (id)webDocumentView;	// 0x358b45e5
@end

