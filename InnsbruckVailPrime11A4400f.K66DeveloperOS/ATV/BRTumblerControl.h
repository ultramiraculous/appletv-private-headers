/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRImageControl;
@protocol BRTumblerDelegate, BRTumblerDataSource;

__attribute__((visibility("hidden")))
@interface BRTumblerControl : BRControl {
	unsigned _currentIndex;	// 84 = 0x54
	unsigned _itemCount;	// 88 = 0x58
	BRControl *_currentItem;	// 92 = 0x5c
	BRControl *_nextItem;	// 96 = 0x60
	BRControl *_prevItem;	// 100 = 0x64
	BRControl *_nextNextItem;	// 104 = 0x68
	BRControl *_prevPrevItem;	// 108 = 0x6c
	BRControl *_nextFade;	// 112 = 0x70
	BRControl *_prevFade;	// 116 = 0x74
	BRControl *_nextBlackout;	// 120 = 0x78
	BRControl *_prevBlackout;	// 124 = 0x7c
	BRImageControl *_nextArrow;	// 128 = 0x80
	BRImageControl *_prevArrow;	// 132 = 0x84
	CGSize _sizeThatFits;	// 136 = 0x88
	id<BRTumblerDataSource> _dataSource;	// 144 = 0x90
	id<BRTumblerDelegate> _delegate;	// 148 = 0x94
	unsigned _currentTransientIndex;	// 152 = 0x98
	NSTimer *_selectionChangeTimer;	// 156 = 0x9c
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x37c419; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x37b429; S=0x37b439; 
@property(assign, nonatomic) unsigned currentTransientIndex;	// G=0x37c429; S=0x37c439; @synthesize=_currentTransientIndex
@property(assign, nonatomic) __weak id<BRTumblerDataSource> dataSource;	// G=0x37c3c5; S=0x37bb81; @synthesize=_dataSource
@property(assign, nonatomic) __weak id<BRTumblerDelegate> delegate;	// G=0x37c3e5; S=0x37c405; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x37bec9; 
@property(assign, nonatomic) __weak NSTimer *selectionChangeTimer;	// G=0x37c449; S=0x37c469; @synthesize=_selectionChangeTimer
- (id)init;	// 0x37af09
- (void).cxx_destruct;	// 0x37c47d
- (id)_arrowAnimations;	// 0x37ca7d
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x37cbe1
- (CGPoint)_currentPos;	// 0x37c921
- (BOOL)_handleNextAnimated:(BOOL)animated;	// 0x37d2b1
- (BOOL)_handlePrevAnimated:(BOOL)animated;	// 0x37cc51
- (id)_nextFadeFilters;	// 0x37c599
- (CGPoint)_nextNextPos;	// 0x37ca05
- (CGPoint)_nextPos;	// 0x37c995
- (id)_prevFadeFilters;	// 0x37c6e5
- (CGPoint)_prevPos;	// 0x37c8a9
- (CGPoint)_prevPrevPos;	// 0x37c831
- (void)_selectionChangeTimerHandler:(id)handler;	// 0x37d915
- (void)_updateCurentIndexWithTransientIndex;	// 0x37d925
- (id)accessibilityLabel;	// 0x37c331
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x37c351
- (BOOL)brEventAction:(id)action;	// 0x37bf71
// declared property getter: - (id)currentItem;	// 0x37c419
// declared property getter: - (unsigned)currentItemIndex;	// 0x37b429
// declared property getter: - (unsigned)currentTransientIndex;	// 0x37c429
// declared property getter: - (id)dataSource;	// 0x37c3c5
// declared property getter: - (id)delegate;	// 0x37c3e5
// declared property getter: - (float)itemPadding;	// 0x37bec9
- (void)layoutSubcontrols;	// 0x37b599
- (void)reload;	// 0x37bbb1
// declared property getter: - (id)selectionChangeTimer;	// 0x37c449
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x37b439
// declared property setter: - (void)setCurrentTransientIndex:(unsigned)index;	// 0x37c439
// declared property setter: - (void)setDataSource:(id)source;	// 0x37bb81
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37c405
// declared property setter: - (void)setSelectionChangeTimer:(id)timer;	// 0x37c469
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x37b4c5
@end
