/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class BRImageControl, CATransition, BRImage, BRDotArrayControl;

__attribute__((visibility("hidden")))
@interface BRPagedView : BRControl <BRContainerViewCell> {
	id _delegate;	// 84 = 0x54
	id _dataSource;	// 88 = 0x58
	unsigned _currentPage;	// 92 = 0x5c
	BRControl *_contentPanel;	// 96 = 0x60
	BRControl *_content;	// 100 = 0x64
	BRImage *_arrowImage;	// 104 = 0x68
	BRImageControl *_rightArrow;	// 108 = 0x6c
	BRImageControl *_leftArrow;	// 112 = 0x70
	BRDotArrayControl *_pageDots;	// 116 = 0x74
	CATransition *_prevPageTransition;	// 120 = 0x78
	CATransition *_nextPageTransition;	// 124 = 0x7c
	BOOL _showsArrows;	// 128 = 0x80
	BOOL _showsDots;	// 129 = 0x81
	id _loadCompletionBlock;	// 132 = 0x84
	BOOL _delegateRetained;	// 136 = 0x88
	BOOL _dataSourceRetained;	// 137 = 0x89
}
@property(readonly, assign) unsigned currentPage;	// G=0x369a2d; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x3699b9; S=0x3699cd; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x368f5d; S=0x368f6d; 
@property(retain) CATransition *nextPageTransition;	// G=0x3699e5; S=0x3699f9; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x369a09; S=0x369a1d; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x368cc1; S=0x368cd1; 
@property(assign) BOOL showsDots;	// G=0x368d3d; S=0x368d4d; 
- (id)init;	// 0x3686ad
- (BOOL)brEventAction:(id)action;	// 0x3692dd
- (void)cancelContainerViewLoad;	// 0x369511
- (void)controlWasDeactivated;	// 0x368c01
// declared property getter: - (unsigned)currentPage;	// 0x369a2d
// declared property getter: - (id)dataSource;	// 0x3699b9
- (void)dealloc;	// 0x368abd
// declared property getter: - (id)delegate;	// 0x368f5d
- (void)layoutSubcontrols;	// 0x3696e9
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x3693f9
- (BOOL)nextPage;	// 0x3690ed
// declared property getter: - (id)nextPageTransition;	// 0x3699e5
- (BOOL)prevPage;	// 0x3691f9
// declared property getter: - (id)prevPageTransition;	// 0x369a09
- (void)reloadData;	// 0x368d85
- (void)removeFromParent;	// 0x369055
// declared property setter: - (void)setDataSource:(id)source;	// 0x3699cd
- (void)setDatasource:(id)datasource;	// 0x368eb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x368f6d
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x3695d1
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x369621
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x3699f9
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x369a1d
- (void)setReadyToDisplay;	// 0x369581
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x368cd1
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x368d4d
// declared property getter: - (BOOL)showsArrows;	// 0x368cc1
// declared property getter: - (BOOL)showsDots;	// 0x368d3d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x369675
- (void)windowMaxBoundsChanged;	// 0x368c71
@end

