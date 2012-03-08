/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class CALayer;

@interface WAKWindow : WAKResponder {
@private
	WKWindow *_wkWindow;	// 4 = 0x4
	CALayer *_hostLayer;	// 8 = 0x8
	TileCache *_tileCache;	// 12 = 0xc
	CGRect _cachedVisibleRect;	// 16 = 0x10
	CALayer *_rootLayer;	// 32 = 0x20
}
@property(assign) CGSize availableScreenSize;	// G=0x368cf0c9; S=0x367f0b75; converted property
@property(retain) id contentView;	// G=0x3679db1d; S=0x3698fae5; converted property
@property(assign) float currentTileScale;	// G=0x36e0800d; S=0x367eeca9; converted property
@property(readonly, retain) CALayer *hostLayer;	// G=0x36775aad; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x36e07d0d; S=0x367f0611; converted property
@property(retain) CALayer *rootLayer;	// G=0x36e07ce5; S=0x3698fa79; converted property
@property(assign) float screenScale;	// G=0x367758fd; S=0x367f0b95; converted property
@property(assign) CGSize screenSize;	// G=0x3684fae5; S=0x367f0b55; converted property
@property(assign) BOOL tilesOpaque;	// G=0x36e08059; S=0x36776715; converted property
@property(assign) int tilingDirection;	// G=0x36e08039; S=0x36940fb9; converted property
@property(assign) int tilingMode;	// G=0x36e07cf5; S=0x367f09dd; converted property
@property(assign) BOOL useOrientationDependentFontAntialiasing;	// G=0x3679e30d; S=0x367f05ed; converted property
@property(assign) float zoomedOutTileScale;	// G=0x368cb565; S=0x367ef94d; converted property
+ (id)_wrapperForWindowRef:(WKWindow *)windowRef;	// 0x36776259
+ (BOOL)hasLandscapeOrientation;	// 0x3679e325
+ (void)setOrientationProvider:(id)provider;	// 0x367f05dd
- (id)initWithFrame:(CGRect)frame;	// 0x3698fa89
- (id)initWithLayer:(id)layer;	// 0x367752fd
- (id)_newFirstResponderAfterResigning;	// 0x36962db9
- (WKWindow *)_windowRef;	// 0x36775e01
// converted property getter: - (CGSize)availableScreenSize;	// 0x368cf0c9
- (void)close;	// 0x36e081c1
// converted property getter: - (id)contentView;	// 0x3679db1d
- (CGPoint)convertBaseToScreen:(CGPoint)screen;	// 0x36918079
- (CGPoint)convertScreenToBase:(CGPoint)base;	// 0x36e07cd9
// converted property getter: - (float)currentTileScale;	// 0x36e0800d
- (void)dealloc;	// 0x3698a6f9
- (id)description;	// 0x36e07db1
- (void)didRotate;	// 0x3698e3b9
- (void)dumpTiles;	// 0x36e07ee9
- (id)firstResponder;	// 0x367a81f9
- (CGRect)frame;	// 0x36e0816d
- (BOOL)hasPendingDraw;	// 0x36e07fed
// converted property getter: - (id)hostLayer;	// 0x36775aad
- (void)hostLayerSizeChanged;	// 0x3687936d
- (BOOL)isKeyWindow;	// 0x367765fd
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x36e07d0d
- (int)keyViewSelectionDirection;	// 0x36792f3d
- (void)layoutTiles;	// 0x367a3e95
- (void)layoutTilesNow;	// 0x367f0bf1
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x36e08079
- (BOOL)makeFirstResponder:(id)responder;	// 0x36e07ce1
- (void)makeKeyWindow;	// 0x36e07d29
- (id)recursiveDescription;	// 0x36e07d39
- (void)removeAllNonVisibleTiles;	// 0x368a9d05
- (void)removeAllTiles;	// 0x36904f61
- (void)removeForegroundTiles;	// 0x3698e3ed
// converted property getter: - (id)rootLayer;	// 0x36e07ce5
// converted property getter: - (float)screenScale;	// 0x367758fd
// converted property getter: - (CGSize)screenSize;	// 0x3684fae5
- (void)sendEvent:(id)event;	// 0x36e08121
- (void)sendEvent:(id)event contentChange:(int *)change;	// 0x36e080c1
- (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x367765dd
// converted property setter: - (void)setAvailableScreenSize:(CGSize)size;	// 0x367f0b75
// converted property setter: - (void)setContentView:(id)view;	// 0x3698fae5
// converted property setter: - (void)setCurrentTileScale:(float)scale;	// 0x367eeca9
- (void)setFrame:(CGRect)frame display:(BOOL)display;	// 0x36e08185
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x367f0611
- (void)setNeedsDisplay;	// 0x36809de9
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x367925c1
// converted property setter: - (void)setRootLayer:(id)layer;	// 0x3698fa79
// converted property setter: - (void)setScreenScale:(float)scale;	// 0x367f0b95
// converted property setter: - (void)setScreenSize:(CGSize)size;	// 0x367f0b55
- (void)setTileBordersVisible:(BOOL)visible;	// 0x3677655d
- (void)setTilePaintCountsVisible:(BOOL)visible;	// 0x367765ad
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x36776715
// converted property setter: - (void)setTilingDirection:(int)direction;	// 0x36940fb9
// converted property setter: - (void)setTilingMode:(int)mode;	// 0x367f09dd
// converted property setter: - (void)setUseOrientationDependentFontAntialiasing:(BOOL)antialiasing;	// 0x367f05ed
// converted property setter: - (void)setZoomedOutTileScale:(float)scale;	// 0x367ef94d
// converted property getter: - (BOOL)tilesOpaque;	// 0x36e08059
// converted property getter: - (int)tilingDirection;	// 0x36e08039
// converted property getter: - (int)tilingMode;	// 0x36e07cf5
// converted property getter: - (BOOL)useOrientationDependentFontAntialiasing;	// 0x3679e30d
- (CGRect)visibleRect;	// 0x367c1b55
- (void)willRotate;	// 0x3698e37d
// converted property getter: - (float)zoomedOutTileScale;	// 0x368cb565
@end
