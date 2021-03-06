/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateExtendedInputTextFieldDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class NSMutableDictionary, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateTopBarShadowView, NSString, UIKeyboardCandidateExtendedInputView, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtended : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIScrollViewDelegate, UIKeyboardCandidateExtendedInputTextFieldDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 48 = 0x30
	NSArray *_candidates;	// 52 = 0x34
	NSString *_inlineText;	// 56 = 0x38
	int _keyboardBehavior;	// 60 = 0x3c
	NSArray *_sorts;	// 64 = 0x40
	unsigned _selectedSortIndex;	// 68 = 0x44
	UIKeyboardCandidateExtendedInputView *_inputView;	// 72 = 0x48
	NSMutableDictionary *_scrollViewControllers;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 84 = 0x54
	UIKeyboardCandidateTopBarShadowView *_topBarShadowView;	// 88 = 0x58
	BOOL _keyboardHidden;	// 92 = 0x5c
	BOOL _animating;	// 93 = 0x5d
}
@property(assign, nonatomic) BOOL animating;	// G=0x3300f705; S=0x3300f4f9; @synthesize=_animating
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x3300f561; S=0x3300f571; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x3300f581; S=0x3300f39d; @synthesize=_candidates
@property(copy, nonatomic) NSString *inlineText;	// G=0x3300f591; S=0x3300f435; @synthesize=_inlineText
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputView *inputView;	// G=0x3300f615; S=0x3300f625; @synthesize=_inputView
@property(assign, nonatomic) int keyboardBehavior;	// G=0x3300f5a1; S=0x3300f5b1; @synthesize=_keyboardBehavior
@property(assign, nonatomic) BOOL keyboardHidden;	// G=0x3300f6e5; S=0x3300f6f5; @synthesize=_keyboardHidden
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x3300f649; S=0x3300f659; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) NSMutableDictionary *scrollViewControllers;	// G=0x3300f325; @synthesize=_scrollViewControllers
@property(readonly, assign, nonatomic) id selectedSort;	// G=0x3300f231; 
@property(assign, nonatomic) unsigned selectedSortIndex;	// G=0x3300f5f5; S=0x3300f605; @synthesize=_selectedSortIndex
@property(retain, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x3300f67d; S=0x3300f68d; @synthesize=_sortSelectionBar
@property(retain, nonatomic) NSArray *sorts;	// G=0x3300f5c1; S=0x3300f5d1; @synthesize=_sorts
@property(retain, nonatomic) UIKeyboardCandidateTopBarShadowView *topBarShadowView;	// G=0x3300f6b1; S=0x3300f6c1; @synthesize=_topBarShadowView
- (id)initWithFrame:(CGRect)frame keyboardBehavior:(int)behavior;	// 0x3300c4bd
- (void)animateInWithInlineText:(id)inlineText inlineRect:(CGRect)rect inView:(id)view;	// 0x3300d775
// declared property getter: - (BOOL)animating;	// 0x3300f705
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x3300ee95
- (id)candidateAtIndex:(unsigned)index;	// 0x3300ee69
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x3300efe9
// declared property getter: - (id)candidateListDelegate;	// 0x3300f561
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x3300f035
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x3300f0e1
// declared property getter: - (id)candidates;	// 0x3300f581
- (void)closeButtonAction;	// 0x3300eb85
- (void)configureKeyboard:(id)keyboard;	// 0x3300ef2d
- (unsigned)count;	// 0x3300eec1
- (id)currentCandidate;	// 0x3300ee19
- (unsigned)currentIndex;	// 0x3300ee41
- (void)dealloc;	// 0x3300c59d
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x3300ef59
- (void)hideKeyboard;	// 0x3300d639
- (CGRect)idealFrame;	// 0x3300c785
// declared property getter: - (id)inlineText;	// 0x3300f591
- (void)inputTextFieldCaretDidStartBlinking:(id)inputTextFieldCaret;	// 0x3300ecb1
// declared property getter: - (id)inputView;	// 0x3300f615
// declared property getter: - (int)keyboardBehavior;	// 0x3300f5a1
// declared property getter: - (BOOL)keyboardHidden;	// 0x3300f6e5
- (void)layout;	// 0x3300cfe5
- (void)layoutCandidatesWithFrame:(CGRect)frame;	// 0x3300c98d
- (void)layoutInputViewWithFrame:(CGRect)frame;	// 0x3300cd2d
- (void)layoutSortSelectionBarWithFrame:(CGRect)frame;	// 0x3300ce45
- (void)maximizeKeyboard;	// 0x3300d4bd
- (void)minimizeKeyboard;	// 0x3300d445
- (void)orderOutWithAnimation:(BOOL)animation simultaneousAnimations:(id)animations completion:(id)completion targetHeight:(float)height;	// 0x3300e595
// declared property getter: - (id)scrollViewController;	// 0x3300f649
// declared property getter: - (id)scrollViewControllers;	// 0x3300f325
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x3300ec09
- (void)selectCandidate:(id)candidate;	// 0x3300eb59
// declared property getter: - (id)selectedSort;	// 0x3300f231
// declared property getter: - (unsigned)selectedSortIndex;	// 0x3300f5f5
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x3300f4f9
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x3300f571
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x3300f39d
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3300eee9
// declared property setter: - (void)setInlineText:(id)text;	// 0x3300f435
// declared property setter: - (void)setInputView:(id)view;	// 0x3300f625
// declared property setter: - (void)setKeyboardBehavior:(int)behavior;	// 0x3300f5b1
// declared property setter: - (void)setKeyboardHidden:(BOOL)hidden;	// 0x3300f6f5
// declared property setter: - (void)setScrollViewController:(id)controller;	// 0x3300f659
- (void)setSelectedCandidateIndex:(unsigned)index;	// 0x3300ed71
// declared property setter: - (void)setSelectedSortIndex:(unsigned)index;	// 0x3300f605
// declared property setter: - (void)setSortSelectionBar:(id)bar;	// 0x3300f68d
// declared property setter: - (void)setSorts:(id)sorts;	// 0x3300f5d1
// declared property setter: - (void)setTopBarShadowView:(id)view;	// 0x3300f6c1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x3300ef1d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3300ecf5
- (void)showKeyboard;	// 0x3300d535
- (void)showNextCandidate;	// 0x3300ed21
- (void)showNextPage;	// 0x3300edc9
- (void)showPageAtIndex:(unsigned)index;	// 0x3300ed9d
- (void)showPreviousCandidate;	// 0x3300ed49
- (void)showPreviousPage;	// 0x3300edf1
// declared property getter: - (id)sortSelectionBar;	// 0x3300f67d
- (void)sortSelectionBarAction:(id)action;	// 0x3300eb99
// declared property getter: - (id)sorts;	// 0x3300f5c1
- (void)statusBarFrameWillChangeNotification:(id)statusBarFrame;	// 0x3300f12d
- (int)textEffectsVisibilityLevel;	// 0x3300d73d
// declared property getter: - (id)topBarShadowView;	// 0x3300f6b1
@end

