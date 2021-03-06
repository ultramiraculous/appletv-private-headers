/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 48 = 0x30
	int _inGestureType;	// 52 = 0x34
	int _tilingArea;	// 56 = 0x38
	BOOL _didFirstTileLayout;	// 60 = 0x3c
	BOOL _layoutTilesInMainThread;	// 61 = 0x3d
	BOOL _tilingModeIsLocked;	// 62 = 0x3e
}
@property(assign) BOOL drawsGrid;	// G=0x3593837d; S=0x35938379; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x359383e9; S=0x3571f241; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x3593844d; S=0x3580be35; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x35938391; S=0x3593838d; converted property
@property(assign) unsigned maxTileCount;	// G=0x35938381; S=0x35700e29; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x359383c1; S=0x35938395; converted property
@property(assign) CGSize tileSize;	// G=0x3593836d; S=0x35700e25; converted property
@property(assign) BOOL tilesOpaque;	// G=0x359383c5; S=0x357010c1; converted property
@property(assign) int tilingArea;	// G=0x357cba25; S=0x35705e91; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x35938389; S=0x35700e2d; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x3593845d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x356ff91d
- (void)_didScroll;	// 0x357c4c8d
- (void)_screenChanged:(id)changed;	// 0x35938225
- (void)_updateForScreen:(id)screen;	// 0x35702c31
- (unsigned)adjustedMaxTileCount;	// 0x35938385
- (void)dealloc;	// 0x357d5dcd
// converted property getter: - (BOOL)drawsGrid;	// 0x3593837d
- (void)dumpTiles;	// 0x3593842d
// converted property getter: - (BOOL)isTilingEnabled;	// 0x35938389
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x359383e9
- (void)layoutSubviews;	// 0x357032d9
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x3593844d
- (void)layoutTilesNow;	// 0x357c3f65
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x359381e5
- (void)layoutTilesNowOnWebThread;	// 0x359381c5
- (void)lockTilingMode;	// 0x359382b5
// converted property getter: - (BOOL)logsTilingChanges;	// 0x35938391
// converted property getter: - (unsigned)maxTileCount;	// 0x35938381
- (void)removeAllNonVisibleTiles;	// 0x357c30b5
- (void)removeAllTiles;	// 0x357c42a1
- (void)removeForegroundTiles;	// 0x3593840d
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x35938379
- (void)setInGesture:(int)gesture;	// 0x357cb6f9
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x3571f241
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x3580be35
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x3593838d
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x35700e29
- (void)setNeedsDisplay;	// 0x35702995
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x359382e9
- (void)setNeedsLayout;	// 0x356ffca5
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x35938395
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x35700e25
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x357010c1
// converted property setter: - (void)setTilingArea:(int)area;	// 0x35705e91
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x35700e2d
- (void)setTransform:(CGAffineTransform)transform;	// 0x35938325
- (void)setWAKWindow:(id)window;	// 0x35938185
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x359383c1
// converted property getter: - (CGSize)tileSize;	// 0x3593836d
// converted property getter: - (BOOL)tilesOpaque;	// 0x359383c5
// converted property getter: - (int)tilingArea;	// 0x357cba25
- (void)unlockTilingMode;	// 0x359382c9
- (void)updateTilingMode;	// 0x35705ed1
- (CGRect)visibleRect;	// 0x357ca529
// converted property getter: - (id)wakWindow;	// 0x3593845d
- (void)willMoveToWindow:(id)window;	// 0x35702c01
- (WKWindow *)wkWindow;	// 0x356ffd2d
@end

