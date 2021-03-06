/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class UIImageView, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, NSMutableDictionary, UIKeyboardCandidateGridHeader, NSString, NSArray;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
	UIImageView *_backgroundView;	// 84 = 0x54
	UIView *_topBarShadow;	// 88 = 0x58
	UIView *_bottomBarShadow;	// 92 = 0x5c
	UIKeyboardCandidateSortControl *_sortBar;	// 96 = 0x60
	UIKeyboardCandidateGridHeader *_gridHeader;	// 100 = 0x64
	BOOL _drawTopShadow;	// 104 = 0x68
	BOOL _drawBottomShadow;	// 105 = 0x69
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 108 = 0x6c
	NSArray *_candidates;	// 112 = 0x70
	unsigned _selectedCandidateIndex;	// 116 = 0x74
	NSArray *_sorts;	// 120 = 0x78
	NSMutableDictionary *_scrollViewControllers;	// 124 = 0x7c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 128 = 0x80
	unsigned _numberOfColumns;	// 132 = 0x84
	id<UIScrollViewDelegate> _scrollViewDelegate;	// 136 = 0x88
	int _visualStyle;	// 140 = 0x8c
	NSString *_inlineText;	// 144 = 0x90
	NSArray *_sortedCandidates;	// 148 = 0x94
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x33d908bd; S=0x33d908cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x33d908dd; S=0x33d8ff05; @synthesize=_candidates
@property(assign, nonatomic) BOOL drawBottomShadow;	// G=0x33d908ad; S=0x33d8f7c9; @synthesize=_drawBottomShadow
@property(assign, nonatomic) BOOL drawTopShadow;	// G=0x33d9089d; S=0x33d8f785; @synthesize=_drawTopShadow
@property(assign, nonatomic) UIKeyboardCandidateGridHeader *gridHeader;	// G=0x33d9093d; S=0x33d9094d; @synthesize=_gridHeader
@property(retain, nonatomic) NSString *inlineText;	// G=0x33d909bd; S=0x33d8fbf1; @synthesize=_inlineText
@property(assign, nonatomic) unsigned numberOfColumns;	// G=0x33d9095d; S=0x33d9096d; @synthesize=_numberOfColumns
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x33d9090d; S=0x33d9091d; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) NSMutableDictionary *scrollViewControllers;	// G=0x33d902a5; @synthesize=_scrollViewControllers
@property(assign, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;	// G=0x33d9097d; S=0x33d9098d; @synthesize=_scrollViewDelegate
@property(assign, nonatomic) unsigned selectedCandidateIndex;	// G=0x33d8f935; S=0x33d8f95d; @synthesize=_selectedCandidateIndex
@property(assign, nonatomic) UIKeyboardCandidateSortControl *sortBar;	// G=0x33d9092d; S=0x33d90335; @synthesize=_sortBar
@property(retain, nonatomic) NSArray *sortedCandidates;	// G=0x33d909cd; S=0x33d909dd; @synthesize=_sortedCandidates
@property(retain, nonatomic) NSArray *sorts;	// G=0x33d908ed; S=0x33d908fd; @synthesize=_sorts
@property(assign, nonatomic) int visualStyle;	// G=0x33d9099d; S=0x33d909ad; @synthesize=_visualStyle
- (id)initWithFrame:(CGRect)frame;	// 0x33d8ee31
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x33d8fad1
- (id)candidateAtIndex:(unsigned)index;	// 0x33d8faa5
- (id)candidateGroupsForSortIndex:(int)sortIndex;	// 0x33d8fead
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x33d8fdbd
// declared property getter: - (id)candidateListDelegate;	// 0x33d908bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x33d8fe0d
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x33d8fe5d
// declared property getter: - (id)candidates;	// 0x33d908dd
- (void)candidatesDidChange;	// 0x33d8fb25
- (void)clearViews;	// 0x33d8f3c5
- (void)configureKeyboard:(id)keyboard;	// 0x33d8fce5
- (unsigned)count;	// 0x33d8fafd
- (id)currentCandidate;	// 0x33d8fa55
- (unsigned)currentIndex;	// 0x33d8fa7d
- (void)dealloc;	// 0x33d8f2d1
// declared property getter: - (BOOL)drawBottomShadow;	// 0x33d908ad
// declared property getter: - (BOOL)drawTopShadow;	// 0x33d9089d
// declared property getter: - (id)gridHeader;	// 0x33d9093d
- (BOOL)handleNumberKey:(unsigned)key;	// 0x33d8fd11
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x33d8fd3d
- (BOOL)hasNextPage;	// 0x33d8fa2d
- (BOOL)hasPreviousPage;	// 0x33d8fa05
- (id)indexTitlesForGroupTitles:(id)groupTitles;	// 0x33d907c9
// declared property getter: - (id)inlineText;	// 0x33d909bd
- (void)layout;	// 0x33d8f69d
- (void)layoutSubviews;	// 0x33d8f4fd
// declared property getter: - (unsigned)numberOfColumns;	// 0x33d9095d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x33d90899
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x33d90895
// declared property getter: - (id)scrollViewController;	// 0x33d9090d
// declared property getter: - (id)scrollViewControllers;	// 0x33d902a5
// declared property getter: - (id)scrollViewDelegate;	// 0x33d9097d
- (void)selectCandidate:(id)candidate;	// 0x33d8f811
// declared property getter: - (unsigned)selectedCandidateIndex;	// 0x33d8f935
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x33d908cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x33d8ff05
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33d8fb79
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33d8fbad
// declared property setter: - (void)setDrawBottomShadow:(BOOL)shadow;	// 0x33d8f7c9
// declared property setter: - (void)setDrawTopShadow:(BOOL)shadow;	// 0x33d8f785
// declared property setter: - (void)setGridHeader:(id)header;	// 0x33d9094d
// declared property setter: - (void)setInlineText:(id)text;	// 0x33d8fbf1
// declared property setter: - (void)setNumberOfColumns:(unsigned)columns;	// 0x33d9096d
// declared property setter: - (void)setScrollViewController:(id)controller;	// 0x33d9091d
// declared property setter: - (void)setScrollViewDelegate:(id)delegate;	// 0x33d9098d
// declared property setter: - (void)setSelectedCandidateIndex:(unsigned)index;	// 0x33d8f95d
// declared property setter: - (void)setSortBar:(id)bar;	// 0x33d90335
// declared property setter: - (void)setSortedCandidates:(id)candidates;	// 0x33d909dd
// declared property setter: - (void)setSorts:(id)sorts;	// 0x33d908fd
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x33d8fc59
// declared property setter: - (void)setVisualStyle:(int)style;	// 0x33d909ad
- (void)showArrowButton:(BOOL)button;	// 0x33d8f83d
- (void)showCandidate:(id)candidate;	// 0x33d8f8b9
- (void)showCandidateAtIndex:(unsigned)index;	// 0x33d8f88d
- (void)showNextCandidate;	// 0x33d8f8e5
- (void)showNextPage;	// 0x33d8f9b5
- (void)showPageAtIndex:(unsigned)index;	// 0x33d8f989
- (void)showPreviousCandidate;	// 0x33d8f90d
- (void)showPreviousPage;	// 0x33d8f9dd
// declared property getter: - (id)sortBar;	// 0x33d9092d
- (void)sortSelectionBarAction:(id)action;	// 0x33d903c9
// declared property getter: - (id)sortedCandidates;	// 0x33d909cd
// declared property getter: - (id)sorts;	// 0x33d908ed
- (void)statusBarFrameWillChange:(id)statusBarFrame;	// 0x33d8f80d
// declared property getter: - (int)visualStyle;	// 0x33d9099d
@end

