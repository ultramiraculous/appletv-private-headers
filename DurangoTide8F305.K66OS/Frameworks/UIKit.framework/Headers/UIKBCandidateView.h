/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"
#import "UIKeyboardCandidateList.h"

@class UIColor, NSMutableArray, NSObject, NSArray;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
@private
	NSArray *m_candidates;	// 68 = 0x44
	NSMutableArray *m_buttons;	// 72 = 0x48
	NSObject *m_delegate;	// 76 = 0x4c
	int m_columns;	// 80 = 0x50
	int m_candidatesPerColumn;	// 84 = 0x54
	int m_candidatesPerPage;	// 88 = 0x58
	int m_current;	// 92 = 0x5c
	int m_firstShown;	// 96 = 0x60
	int m_firstComposition;	// 100 = 0x64
	int m_candidateCount;	// 104 = 0x68
	CGRect m_symbolRect;	// 108 = 0x6c
	UIColor *m_textColor;	// 124 = 0x7c
	CGColorRef m_highlightColor;	// 128 = 0x80
	BOOL m_respondsToSelect;	// 132 = 0x84
	BOOL m_respondsToAccept;	// 133 = 0x85
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x321f6d29
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x321f5e85
- (id)candidateAtIndex:(unsigned)index;	// 0x321f6035
- (id)candidateList;	// 0x321f5e65
- (void)configureKeyboard:(id)keyboard;	// 0x321f5f75
- (unsigned)count;	// 0x321f5e89
- (id)currentCandidate;	// 0x321f6079
- (unsigned)currentIndex;	// 0x321f5e75
- (void)dealloc;	// 0x321f640d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x321f5ea5
- (void)jumpToCompositions;	// 0x321f5edd
- (void)layout;	// 0x321f6525
- (void)nextCandidatesAction;	// 0x321f629d
- (void)selectCandidate:(id)candidate;	// 0x321f5efd
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x321f62b1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x321f61ed
- (void)showCandidateAtIndex:(unsigned)index;	// 0x321f5e69
- (void)showNextCandidate;	// 0x321f5e6d
- (void)showNextPage;	// 0x321f6135
- (void)showPageAtIndex:(unsigned)index;	// 0x321f6181
- (void)showPreviousCandidate;	// 0x321f5e71
- (void)showPreviousPage;	// 0x321f60c1
- (void)updateKeyboard:(id)keyboard key:(id)key;	// 0x321f6be5
@end

