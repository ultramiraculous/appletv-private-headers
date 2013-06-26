/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x2f2acca9; S=0x2f2accb5; 
@property(assign) CGColorRef fillColor;	// G=0x2f2acc89; S=0x2f2acc91; 
@property(assign) unsigned long levelsOfDetail;	// G=0x2f2ac899; S=0x2f2ac8a1; 
@property(assign) unsigned long levelsOfDetailBias;	// G=0x2f2ac8a9; S=0x2f2ac8b1; 
@property(assign) float maximumTileScale;	// G=0x2f2acc99; S=0x2f2acca1; 
@property(assign) CGSize tileSize;	// G=0x2f2ac8b9; S=0x2f2ac8c9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x2f2ac841
+ (id)defaultValueForKey:(id)key;	// 0x2f2ab789
+ (double)fadeDuration;	// 0x2f2ab77d
+ (unsigned)prefetchedTiles;	// 0x2f2ac8d5
+ (BOOL)shouldDrawOnMainThread;	// 0x2f2ac8d1
- (BOOL)_canDisplayConcurrently;	// 0x2f2ac83d
- (void)_dealloc;	// 0x2f2ac46d
- (void)_display;	// 0x2f2ac529
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x2f2aca21
- (void)dealloc;	// 0x2f2ac4f5
- (void)didChangeValueForKey:(id)key;	// 0x2f2ab901
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x2f2acae5
// declared property getter: - (CGColorRef)fillColor;	// 0x2f2acc89
- (void)invalidateContents;	// 0x2f2ac459
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x2f2acca9
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x2f2ac899
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x2f2ac8a9
// declared property getter: - (float)maximumTileScale;	// 0x2f2acc99
- (void)setContents:(id)contents;	// 0x2f2abc3d
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x2f2accb5
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x2f2acc91
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x2f2ac8a1
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x2f2ac8b1
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x2f2acca1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x2f2aba51
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x2f2ac9e9
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x2f2ac8d9
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x2f2ac8c9
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x2f2ab9f9
// declared property getter: - (CGSize)tileSize;	// 0x2f2ac8b9
@end
