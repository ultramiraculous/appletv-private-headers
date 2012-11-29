/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class NSArray, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
	BOOL _reducedWidth;	// 84 = 0x54
	NSArray *_candidates;	// 88 = 0x58
	NSString *_inlineText;	// 92 = 0x5c
	CGRect _inlineRect;	// 96 = 0x60
	float _maxX;	// 112 = 0x70
	BOOL _expanded;	// 116 = 0x74
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 120 = 0x78
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 124 = 0x7c
	int _position;	// 128 = 0x80
	CGRect _previousCollapsedFrame;	// 132 = 0x84
	UIKeyboardCandidateSortControl *_sortSelectionBar;	// 148 = 0x94
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x32030d11; S=0x32030d21; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x32030c3d; S=0x32030c4d; @synthesize=_candidates
@property(assign, nonatomic) BOOL expanded;	// G=0x32030ce1; S=0x32030cf1; @synthesize=_expanded
@property(assign, nonatomic) CGRect inlineRect;	// G=0x32030c81; S=0x32030ca5; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x32030c5d; S=0x32030c71; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x32030cc1; S=0x32030cd1; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x32030d31; S=0x32030d41; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x32030d51; S=0x32030d75; @synthesize=_previousCollapsedFrame
@property(readonly, assign, nonatomic, getter=isReducedWidth) BOOL reducedWidth;	// G=0x32030d01; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x32030b01; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortControl *sortSelectionBar;	// G=0x32030b79; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x3202f2d9
- (id)activeCandidateList;	// 0x3202f5a5
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x3202ff8d
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x3202fb45
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x3202f6e9
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x320308f1
- (id)candidateAtIndex:(unsigned)index;	// 0x320308c5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x320309bd
// declared property getter: - (id)candidateListDelegate;	// 0x32030d11
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32030a0d
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x32030a5d
// declared property getter: - (id)candidates;	// 0x32030c3d
- (void)candidatesDidChange;	// 0x320304ad
- (void)collapse;	// 0x3202f681
- (CGSize)collapsedSize;	// 0x3202f5f1
- (void)configureKeyboard:(id)keyboard;	// 0x32030945
- (unsigned)count;	// 0x3203091d
- (id)currentCandidate;	// 0x32030875
- (unsigned)currentIndex;	// 0x3203089d
- (void)dealloc;	// 0x3202f4f1
- (void)expand;	// 0x3202f619
// declared property getter: - (BOOL)expanded;	// 0x32030ce1
- (CGSize)expandedSize;	// 0x3202f605
- (BOOL)handleNumberKey:(unsigned)key;	// 0x32030971
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x3203099d
// declared property getter: - (CGRect)inlineRect;	// 0x32030c81
// declared property getter: - (id)inlineText;	// 0x32030c5d
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x3202fa2d
// declared property getter: - (BOOL)isReducedWidth;	// 0x32030d01
- (void)layout;	// 0x320304b1
// declared property getter: - (float)maxX;	// 0x32030cc1
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x32030ac5
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x32030aad
// declared property getter: - (int)position;	// 0x32030d31
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x32030d51
// declared property getter: - (id)scrollViewController;	// 0x32030b01
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x32030d21
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x32030c4d
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32030469
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32030351
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x32030cf1
- (void)setFrame:(CGRect)frame;	// 0x3202f5a9
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x32030ca5
// declared property setter: - (void)setInlineText:(id)text;	// 0x32030c71
// declared property setter: - (void)setMaxX:(float)x;	// 0x32030cd1
// declared property setter: - (void)setPosition:(int)position;	// 0x32030d41
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x32030d75
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x32030719
- (void)showCandidate:(id)candidate;	// 0x32030751
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3203077d
- (void)showNextCandidate;	// 0x320307a9
- (void)showNextPage;	// 0x32030825
- (void)showPageAtIndex:(unsigned)index;	// 0x320307f9
- (void)showPreviousCandidate;	// 0x320307d1
- (void)showPreviousPage;	// 0x3203084d
// declared property getter: - (id)sortSelectionBar;	// 0x32030b79
- (void)sortSelectionBarAction;	// 0x32030ad5
@end
