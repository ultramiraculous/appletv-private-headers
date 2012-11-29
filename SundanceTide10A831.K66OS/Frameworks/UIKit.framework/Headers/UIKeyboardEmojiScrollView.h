/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"
#import "UIScrollViewDelegate.h"
#import "UIKeyboardEmojiInput.h"

@class UIPageControl, UILabel, UIScrollView, UIKeyboardEmojiInputController, NSMutableArray, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput> {
	UIKeyboardEmojiInputController *_inputController;	// 112 = 0x70
	UIKeyboardEmojiCategory *_category;	// 116 = 0x74
	UIPageControl *_pageControl;	// 120 = 0x78
	UIScrollView *_scrollView;	// 124 = 0x7c
	UILabel *_categoryLabel;	// 128 = 0x80
	UILabel *_optionalDescription;	// 132 = 0x84
	NSMutableArray *_pages;	// 136 = 0x88
	int _currentPage;	// 140 = 0x8c
}
@property(readonly, assign) int currentPage;	// G=0x31e76fc9; converted property
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x31e75621
- (void)clearPages;	// 0x31e7691d
// converted property getter: - (int)currentPage;	// 0x31e76fc9
- (void)dealloc;	// 0x31e75b69
- (void)delayLayout;	// 0x31e76425
- (void)doLayout;	// 0x31e75c45
- (int)emojiCountPerPageForRotation;	// 0x31e76a31
- (void)ensureSurrounded;	// 0x31e76f11
- (void)forceLayout;	// 0x31e75c35
- (void)goToFirstPage;	// 0x31e76ff9
- (void)interruptScrolling;	// 0x31e768b1
- (void)layoutPages;	// 0x31e76461
- (void)layoutRecents;	// 0x31e75dc9
- (void)pageChanged;	// 0x31e76d0d
- (void)reloadForCategory:(id)category;	// 0x31e76ab5
- (void)saveFirstVisibleEmojiIndex;	// 0x31e76c61
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x31e76ef1
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x31e76de5
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x31e76e05
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x31e7686d
- (void)setScrollDelay:(double)delay;	// 0x31e76fd9
- (BOOL)shouldCache;	// 0x31e75c31
@end
