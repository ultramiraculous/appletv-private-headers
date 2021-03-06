/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class NSMutableDictionary, CMOutlineState, WDText;

@interface WMState : CMState {
	CMOutlineState *currentListState;	// 40 = 0x28
	CMOutlineState *outlineState;	// 44 = 0x2c
	NSMutableDictionary *listStates;	// 48 = 0x30
	WDText *mLastHeader;	// 52 = 0x34
	WDText *mLastFooter;	// 56 = 0x38
	unsigned mCurrentPage;	// 60 = 0x3c
	unsigned mBlockIndex;	// 64 = 0x40
	unsigned mRunIndex;	// 68 = 0x44
	float mTopMargin;	// 72 = 0x48
	float mLeftMargin;	// 76 = 0x4c
	float mPageHeight;	// 80 = 0x50
	BOOL mIsFrame;	// 84 = 0x54
	BOOL mIsFrameStart;	// 85 = 0x55
	BOOL mIsFrameEnd;	// 86 = 0x56
	BOOL mIsHeaderOrFooter;	// 87 = 0x57
	float mTotalPageHeight;	// 88 = 0x58
}
@property(assign) unsigned blockIndex;	// G=0x34956d29; S=0x348fc92d; converted property
@property(retain) CMOutlineState *currentListState;	// G=0x34933d71; S=0x34933fd9; converted property
@property(assign) unsigned currentPage;	// G=0x348ff94d; S=0x3490270d; converted property
@property(assign) BOOL isFrame;	// G=0x348fce0d; S=0x348fcddd; converted property
@property(assign) BOOL isFrameEnd;	// G=0x34956ee9; S=0x348fcdfd; converted property
@property(assign) BOOL isFrameStart;	// G=0x34956d39; S=0x348fcded; converted property
@property(assign) BOOL isHeaderOrFooter;	// G=0x3490004d; S=0x34905fe9; converted property
@property(retain) id lastFooter;	// G=0x349028cd; S=0x349063e1; converted property
@property(retain) id lastHeader;	// G=0x348fc6e5; S=0x34905fd9; converted property
@property(assign) float leftMargin;	// G=0x349d919d; S=0x348fc0f5; converted property
@property(readonly, retain) CMOutlineState *outlineState;	// G=0x349066c1; converted property
@property(assign) float pageHeight;	// G=0x349d918d; S=0x348fc105; converted property
@property(assign) unsigned runIndex;	// G=0x349918a5; S=0x348fef39; converted property
@property(assign) float topMargin;	// G=0x349b4e39; S=0x348fc0e5; converted property
@property(assign) float totalPageHeight;	// G=0x3490010d; S=0x3490011d; converted property
- (id)init;	// 0x348f9fe5
// converted property getter: - (unsigned)blockIndex;	// 0x34956d29
- (void)clearCurrentListState;	// 0x34907c65
// converted property getter: - (id)currentListState;	// 0x34933d71
// converted property getter: - (unsigned)currentPage;	// 0x348ff94d
- (void)dealloc;	// 0x34907bf1
- (BOOL)isCurrentListId:(int)anId;	// 0x34933d81
- (BOOL)isCurrentListStateOverridden;	// 0x34933dd1
// converted property getter: - (BOOL)isFrame;	// 0x348fce0d
// converted property getter: - (BOOL)isFrameEnd;	// 0x34956ee9
// converted property getter: - (BOOL)isFrameStart;	// 0x34956d39
// converted property getter: - (BOOL)isHeaderOrFooter;	// 0x3490004d
// converted property getter: - (id)lastFooter;	// 0x349028cd
// converted property getter: - (id)lastHeader;	// 0x348fc6e5
// converted property getter: - (float)leftMargin;	// 0x349d919d
- (id)listStateForListId:(int)listId;	// 0x34933de9
// converted property getter: - (id)outlineState;	// 0x349066c1
// converted property getter: - (float)pageHeight;	// 0x349d918d
- (float)pageOffset;	// 0x349000bd
// converted property getter: - (unsigned)runIndex;	// 0x349918a5
// converted property setter: - (void)setBlockIndex:(unsigned)index;	// 0x348fc92d
// converted property setter: - (void)setCurrentListState:(id)state;	// 0x34933fd9
// converted property setter: - (void)setCurrentPage:(unsigned)page;	// 0x3490270d
// converted property setter: - (void)setIsFrame:(BOOL)frame;	// 0x348fcddd
// converted property setter: - (void)setIsFrameEnd:(BOOL)end;	// 0x348fcdfd
// converted property setter: - (void)setIsFrameStart:(BOOL)start;	// 0x348fcded
// converted property setter: - (void)setIsHeaderOrFooter:(BOOL)footer;	// 0x34905fe9
// converted property setter: - (void)setLastFooter:(id)footer;	// 0x349063e1
// converted property setter: - (void)setLastHeader:(id)header;	// 0x34905fd9
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x348fc0f5
- (void)setListState:(id)state forListId:(int)listId;	// 0x34933e89
// converted property setter: - (void)setPageHeight:(float)height;	// 0x348fc105
// converted property setter: - (void)setRunIndex:(unsigned)index;	// 0x348fef39
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x348fc0e5
// converted property setter: - (void)setTotalPageHeight:(float)height;	// 0x3490011d
// converted property getter: - (float)topMargin;	// 0x349b4e39
// converted property getter: - (float)totalPageHeight;	// 0x3490010d
@end

