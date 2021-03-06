/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "CoreUI-Structs.h"
#import "CUIPSDImageRef.h"


@interface CUIMutablePSDImageRef : CUIPSDImageRef {
}
- (id)initWithPixelWidth:(unsigned long)pixelWidth pixelHeight:(unsigned long)height;	// 0x30799a89
- (void)addLayer:(id)layer;	// 0x3079a171
- (void)addLayoutMetricsChannel:(id)channel;	// 0x30799bf1
- (void)addOrUpdateSlicesWithSliceRects:(id)sliceRects;	// 0x3079a945
- (void)addOrUpdateSlicesWithXCutPositions:(id)xcutPositions yCutPositions:(id)positions;	// 0x3079a989
- (CFDataRef)copyDefaultICCProfileData;	// 0x30799a79
- (void)deleteLayerAtIndex:(unsigned)index;	// 0x3079a5cd
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned)index;	// 0x3079a14d
- (void)insertLayer:(id)layer atIndex:(unsigned)index;	// 0x3079a5c9
- (void)insertLayoutMetricsChannel:(id)channel atIndex:(unsigned)index;	// 0x30799bf5
- (PSDGradient *)newPSDGradientFromCUIPSDGradient:(id)cuipsdgradient;	// 0x30799bf9
- (unsigned)newSliceRectsArray:(PSDRectRef *)array withSliceRects:(id)sliceRects;	// 0x3079a6ad
- (unsigned)newSliceRectsArray:(PSDRectRef *)array withXCutPositions:(id)xcutPositions yCutPositions:(id)positions;	// 0x3079a7ad
- (unsigned)newUInt32CArray:(unsigned **)array withNSArray:(id)nsarray prependNumber:(id)number appendNumber:(id)number4;	// 0x3079a5d1
- (unsigned)psdLayerBlendModeForCGBlendMode:(int)cgblendMode;	// 0x3079a151
- (BOOL)saveToURL:(id)url completionHandler:(id)handler;	// 0x3079ac79
- (BOOL)saveWithCompletionHandler:(id)completionHandler;	// 0x3079ab05
- (void)setFileURL:(id)url;	// 0x3079aa45
- (void)updateSliceName:(id)name atIndex:(unsigned)index;	// 0x3079a9d1
@end

