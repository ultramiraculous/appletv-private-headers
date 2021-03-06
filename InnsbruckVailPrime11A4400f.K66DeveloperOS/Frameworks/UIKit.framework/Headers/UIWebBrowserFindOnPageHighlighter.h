/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>
#import "UIWebFindOnPageHighlighter.h"

@class UIView, NSString, NSMutableArray, NSArray, UIWebBrowserView;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {
	NSMutableArray *_highlightBubbleViews;	// 4 = 0x4
	NSArray *_pdfHighlightViews;	// 8 = 0x8
	UIView *_highlightHostView;	// 12 = 0xc
	UIWebBrowserView *_browserView;	// 16 = 0x10
	BOOL _zoomToHighlightSelection;	// 20 = 0x14
	id<UIWebFindOnPageHighlighterDelegate> _delegate;	// 24 = 0x18
	NSString *_searchText;	// 28 = 0x1c
	unsigned _numberOfMatches;	// 32 = 0x20
	unsigned _highlightedMatchIndex;	// 36 = 0x24
}
@property(assign, nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;	// G=0x2f93b1c5; S=0x2f93b1d5; @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned highlightedMatchIndex;	// G=0x2f93b1f5; @synthesize=_highlightedMatchIndex
@property(readonly, assign, nonatomic) unsigned numberOfMatches;	// G=0x2f93b1e5; @synthesize=_numberOfMatches
@property(readonly, assign, nonatomic) NSString *searchText;	// G=0x2f93b1b1; @synthesize=_searchText
+ (BOOL)expandedRectsWouldIntersect:(id)intersect;	// 0x2f939a69
- (id)initWithBrowserView:(id)browserView;	// 0x2f939889
- (void)_addContentViewAtIndex:(unsigned)index withRect:(CGRect)rect;	// 0x2f939cd5
- (void)_clearHighlightViews;	// 0x2f939d45
- (void)_highlightFindOnPageMatch:(BOOL)match;	// 0x2f93b045
- (BOOL)_highlightSelection;	// 0x2f93a9a9
- (void)_setSelectionRect:(CGRect)rect textRects:(id)rects contentImage:(CGImageRef)image contentViews:(id)views wobble:(BOOL)wobble;	// 0x2f939dc9
- (void)_updateHighlightedMatchIndex:(BOOL)index;	// 0x2f93afe9
- (void)clearBrowserView;	// 0x2f939a3d
- (void)dealloc;	// 0x2f93998d
// declared property getter: - (id)delegate;	// 0x2f93b1c5
- (unsigned)findOnPageOptions;	// 0x2f93ae51
- (void)highlightNextMatch;	// 0x2f93b189
- (void)highlightPreviousMatch;	// 0x2f93b19d
// declared property getter: - (unsigned)highlightedMatchIndex;	// 0x2f93b1f5
// declared property getter: - (unsigned)numberOfMatches;	// 0x2f93b1e5
// declared property getter: - (id)searchText;	// 0x2f93b1b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f93b1d5
- (void)setSearchText:(id)text matchLimit:(unsigned)limit;	// 0x2f93ae55
- (void)setSelectionRect:(CGRect)rect textRects:(id)rects contentImage:(CGImageRef)image wobble:(BOOL)wobble;	// 0x2f93a481
- (void)setSelectionRect:(CGRect)rect textRects:(id)rects contentViews:(id)views wobble:(BOOL)wobble;	// 0x2f93a4c1
- (BOOL)updateHighlightBubbleWobble:(BOOL)wobble;	// 0x2f93a501
@end

