/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class NSMutableDictionary, WDText, CMOutlineState;

__attribute__((visibility("hidden")))
@interface WMState : CMState {
@private
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
@property(assign) unsigned blockIndex;	// G=0x31227a75; S=0x3117639d; converted property
@property(retain) CMOutlineState *currentListState;	// G=0x31184f05; S=0x31185241; converted property
@property(assign) unsigned currentPage;	// G=0x31183019; S=0x31183029; converted property
@property(assign) BOOL isFrame;	// G=0x311769b1; S=0x31176981; converted property
@property(assign) BOOL isFrameEnd;	// G=0x31227cfd; S=0x311769a1; converted property
@property(assign) BOOL isFrameStart;	// G=0x31227a85; S=0x31176991; converted property
@property(assign) BOOL isHeaderOrFooter;	// G=0x31228ab1; S=0x3121af15; converted property
@property(retain) id lastFooter;	// G=0x31183579; S=0x31227611; converted property
@property(retain) id lastHeader;	// G=0x31184075; S=0x31226825; converted property
@property(assign) float leftMargin;	// G=0x312f35d9; S=0x31183bb9; converted property
@property(readonly, retain) CMOutlineState *outlineState;	// G=0x31283f4d; converted property
@property(assign) float pageHeight;	// G=0x313d4c75; S=0x31183c59; converted property
@property(assign) unsigned runIndex;	// G=0x312a70e9; S=0x31175835; converted property
@property(assign) float topMargin;	// G=0x312e3301; S=0x31183ba9; converted property
@property(assign) float totalPageHeight;	// G=0x31228b91; S=0x31228ba1; converted property
- (id)init;	// 0x31219395
// converted property getter: - (unsigned)blockIndex;	// 0x31227a75
- (void)clearCurrentListState;	// 0x3118527d
// converted property getter: - (id)currentListState;	// 0x31184f05
// converted property getter: - (unsigned)currentPage;	// 0x31183019
- (void)dealloc;	// 0x3118609d
- (BOOL)isCurrentListId:(int)anId;	// 0x31184f15
- (BOOL)isCurrentListStateOverridden;	// 0x31184f65
// converted property getter: - (BOOL)isFrame;	// 0x311769b1
// converted property getter: - (BOOL)isFrameEnd;	// 0x31227cfd
// converted property getter: - (BOOL)isFrameStart;	// 0x31227a85
// converted property getter: - (BOOL)isHeaderOrFooter;	// 0x31228ab1
// converted property getter: - (id)lastFooter;	// 0x31183579
// converted property getter: - (id)lastHeader;	// 0x31184075
// converted property getter: - (float)leftMargin;	// 0x312f35d9
- (id)listStateForListId:(int)listId;	// 0x31184f8d
// converted property getter: - (id)outlineState;	// 0x31283f4d
// converted property getter: - (float)pageHeight;	// 0x313d4c75
- (float)pageOffset;	// 0x31228b39
// converted property getter: - (unsigned)runIndex;	// 0x312a70e9
// converted property setter: - (void)setBlockIndex:(unsigned)index;	// 0x3117639d
// converted property setter: - (void)setCurrentListState:(id)state;	// 0x31185241
// converted property setter: - (void)setCurrentPage:(unsigned)page;	// 0x31183029
// converted property setter: - (void)setIsFrame:(BOOL)frame;	// 0x31176981
// converted property setter: - (void)setIsFrameEnd:(BOOL)end;	// 0x311769a1
// converted property setter: - (void)setIsFrameStart:(BOOL)start;	// 0x31176991
// converted property setter: - (void)setIsHeaderOrFooter:(BOOL)footer;	// 0x3121af15
// converted property setter: - (void)setLastFooter:(id)footer;	// 0x31227611
// converted property setter: - (void)setLastHeader:(id)header;	// 0x31226825
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x31183bb9
- (void)setListState:(id)state forListId:(int)listId;	// 0x31185031
// converted property setter: - (void)setPageHeight:(float)height;	// 0x31183c59
// converted property setter: - (void)setRunIndex:(unsigned)index;	// 0x31175835
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x31183ba9
// converted property setter: - (void)setTotalPageHeight:(float)height;	// 0x31228ba1
// converted property getter: - (float)topMargin;	// 0x312e3301
// converted property getter: - (float)totalPageHeight;	// 0x31228b91
@end
