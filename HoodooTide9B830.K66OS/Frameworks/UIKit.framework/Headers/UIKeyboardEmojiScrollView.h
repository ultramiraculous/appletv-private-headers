/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIScrollView, UIPageControl, UIKeyboardEmojiCategory, NSMutableArray, UILabel;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
@private
	UIKeyboardEmojiCategory *_category;	// 48 = 0x30
	UIPageControl *_pageControl;	// 52 = 0x34
	UIScrollView *_scrollView;	// 56 = 0x38
	UILabel *_categoryLabel;	// 60 = 0x3c
	NSMutableArray *_pages;	// 64 = 0x40
	int _currentPage;	// 68 = 0x44
	id<UIKeyboardEmojiController> _controller;	// 72 = 0x48
	BOOL _emojiInteractionEnabled;	// 76 = 0x4c
}
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x302b104d; S=0x302b105d; @synthesize=_controller
@property(readonly, assign) int currentPage;	// G=0x302b0ed9; converted property
@property(assign, nonatomic) BOOL emojiInteractionEnabled;	// G=0x302b106d; S=0x302b0a51; @synthesize=_emojiInteractionEnabled
- (id)initWithFrame:(CGRect)frame;	// 0x302af969
- (void)clearPages;	// 0x302b08e1
// declared property getter: - (id)controller;	// 0x302b104d
// converted property getter: - (int)currentPage;	// 0x302b0ed9
- (void)dealloc;	// 0x302afd59
- (void)delayLayout;	// 0x302b0391
- (void)doLayout;	// 0x302afecd
// declared property getter: - (BOOL)emojiInteractionEnabled;	// 0x302b106d
- (void)ensureSurrounded;	// 0x302b0e2d
- (void)forceLayout;	// 0x302afebd
- (void)goToFirstPage;	// 0x302b0f09
- (void)interruptScrolling;	// 0x302b0871
- (void)layoutPages;	// 0x302b03cd
- (void)layoutRecents;	// 0x302b0075
- (void)pageChanged;	// 0x302b0bd5
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x302b0cdd
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x302b0cfd
- (void)setCategory:(id)category;	// 0x302b0afd
// declared property setter: - (void)setController:(id)controller;	// 0x302b105d
// declared property setter: - (void)setEmojiInteractionEnabled:(BOOL)enabled;	// 0x302b0a51
- (void)setFrame:(CGRect)frame;	// 0x302afdf5
- (void)setScrollDelay:(double)delay;	// 0x302b0ee9
@end

