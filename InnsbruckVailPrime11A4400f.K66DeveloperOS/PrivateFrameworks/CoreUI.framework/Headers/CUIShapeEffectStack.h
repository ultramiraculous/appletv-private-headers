/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "CoreUI-Structs.h"
#import </libobjc.A.h>


@interface CUIShapeEffectStack : NSObject {
	bool hasColorOverlay;	// 4 = 0x4
	XXStruct_Zo0bCC colorOverlay;	// 8 = 0x8
	bool hasInnerGradient;	// 24 = 0x18
	XXStruct_pK0GxD innerGradient;	// 28 = 0x1c
	bool hasInnerGlow;	// 56 = 0x38
	XXStruct_25AlUA innerGlow;	// 60 = 0x3c
	bool hasInnerShadow;	// 80 = 0x50
	XXStruct_MsnGHB insideShadow;	// 84 = 0x54
	bool hasOuterGlow;	// 120 = 0x78
	XXStruct_25AlUA outerGlow;	// 124 = 0x7c
	bool hasEngraveShadow;	// 144 = 0x90
	XXStruct_MsnGHB engraveShadow;	// 148 = 0x94
	bool hasExtraShadow;	// 184 = 0xb8
	XXStruct_MsnGHB extraShadow;	// 188 = 0xbc
	bool hasBevelEmboss;	// 224 = 0xe0
	struct {
		float embossSize;
		float embossSoften;
		float embossAngle;
		float embossAltitude;
		float highlightRed;
		float highlightGreen;
		float highlightBlue;
		float highlightOpacity;
		float shadowRed;
		float shadowGreen;
		float shadowBlue;
		float shadowOpacity;
	} emboss;	// 228 = 0xe4
	float scalefactor;	// 276 = 0x114
	int renderStrategy;	// 280 = 0x118
}
+ (id)adjustOpacity:(id)opacity by:(float)by;	// 0x3079f509
+ (id)bevelEmbossFrom:(id)from withSize:(unsigned)size soften:(unsigned)soften angle:(float)angle altitude:(float)altitude highlightRed:(float)red highlightGreen:(float)green highlightBlue:(float)blue highlightOpacity:(float)opacity shadowRed:(float)red10 shadowGreen:(float)green11 shadowBlue:(float)blue12 shadowOpacity:(float)opacity13;	// 0x307a0465
+ (id)blur:(id)blur radius:(float)radius;	// 0x3079f9f5
+ (id)colorWithGray:(float)gray alpha:(float)alpha;	// 0x3079fa85
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3079fb09
+ (id)composite:(id)composite atop:(id)atop;	// 0x3079f895
+ (id)composite:(id)composite into:(id)into;	// 0x3079f7b5
+ (id)composite:(id)composite outOf:(id)of;	// 0x3079f825
+ (id)composite:(id)composite over:(id)over;	// 0x3079f745
+ (id)gradientWithParameters:(XXStruct_pK0GxD *)parameters inRect:(CGRect)rect;	// 0x3079fcad
+ (id)image:(id)image withOpacity:(float)opacity;	// 0x3079f905
+ (id)imageFromBlendWithMask:(id)mask foreground:(id)foreground background:(id)background;	// 0x3079feed
+ (id)innerGlowFrom:(id)from withRadius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;	// 0x3079ff8d
+ (id)innerShadowFrom:(id)from withOffset:(CGPoint)offset radius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;	// 0x307a00a9
+ (id)invert:(id)invert;	// 0x3079f995
+ (id)offset:(id)offset by:(CGPoint)by;	// 0x3079f4cd
+ (id)outerGlowFrom:(id)from withRadius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;	// 0x307a01f9
+ (id)outerShadowFrom:(id)from withOffset:(CGPoint)offset radius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;	// 0x307a0315
+ (id)pixelZoomed:(id)zoomed scale:(int)scale about:(CGPoint)about;	// 0x3079f599
+ (id)preferredCIContextOptions;	// 0x3079d971
+ (id)rectangle:(CGRect)rectangle withRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3079fb9d
+ (id)shadowFrom:(id)from red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;	// 0x3079fdf9
+ (id)shapeEffectSingleBlurFrom:(id)from withInteriorFill:(id)interiorFill offset:(CGPoint)offset blurSize:(float)size innerGlowRed:(float)red innerGlowGreen:(float)green innerGlowBlue:(float)blue innerGlowOpacity:(float)opacity innerShadowRed:(float)red9 innerShadowGreen:(float)green10 innerShadowBlue:(float)blue11 innerShadowOpacity:(float)opacity12 outerGlowRed:(float)red13 outerGlowGreen:(float)green14 outerGlowBlue:(float)blue15 outerGlowOpacity:(float)opacity16 outerShadowRed:(float)red17 outerShadowGreen:(float)green18 outerShadowBlue:(float)blue19 outerShadowOpacity:(float)opacity20 hasInsideShadowBlur:(BOOL)blur hasOutsideShadowBlur:(BOOL)blur22;	// 0x307a06b9
+ (id)sharedCIContext;	// 0x3079d9a5
+ (id)unsharpMask:(id)mask radius:(float)radius intensity:(float)intensity;	// 0x3079f68d
- (id)initWithEffectPreset:(id)effectPreset;	// 0x3079eb49
- (void)_addBevelEmbossFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079e549
- (void)_addEngraveShadowFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079e0e9
- (void)_addExtraShadowFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079e319
- (void)_addInnerGlowFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079dc89
- (void)_addInnerShadowFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079dda1
- (void)_addOuterGlowFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079dfd1
- (void)_precompositeColorOverlayInnerGradient;	// 0x3079e711
- (void)_setColorFillFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079da3d
- (void)_setInteriorGradientFromPreset:(id)preset atIndex:(unsigned)index;	// 0x3079db25
- (void)_updateRenderStrategyFromEffect:(unsigned)effect;	// 0x3079e7e1
- (void)applyCustomForegroundColor:(CGColorRef)color;	// 0x307a0fd9
- (id)compositeEffectStackWithShapeImage:(id)shapeImage withScale:(float)scale;	// 0x307a1599
- (XXStruct_Zo0bCC)effectInsetsWithScale:(float)scale;	// 0x307a1815
- (CGRect)effectPaddingWithScale:(float)scale;	// 0x307a162d
- (id)effectPreset;	// 0x3079ed59
- (id)imageWithBevelEmbossOfImage:(id)image;	// 0x307a0e35
- (id)imageWithColorOverlayOfImage:(id)image;	// 0x307a0be5
- (id)imageWithEngraveShadowOfImage:(id)image;	// 0x307a0d35
- (id)imageWithExtraShadowOfImage:(id)image;	// 0x307a0db5
- (id)imageWithInnerGlowOfImage:(id)image;	// 0x307a0af9
- (id)imageWithInnerShadowOfImage:(id)image;	// 0x307a0b65
- (id)imageWithInteriorGradientFillOfImage:(id)image;	// 0x307a0c4d
- (id)imageWithOuterGlowOfImage:(id)image;	// 0x307a0cc9
- (id)imageWithSingleBlurShapeEffectOfImage:(id)image withInteriorFill:(id)interiorFill;	// 0x307a08ed
- (CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)shapeCGImage;	// 0x307a1c39
- (CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)shapeCGImage withScale:(float)scale;	// 0x307a18b1
- (CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)shapeCGImage withScale:(float)scale ciContext:(id)context;	// 0x307a19fd
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)shapeImage;	// 0x307a150d
- (id)processedImageFromShapeImage:(id)shapeImage;	// 0x307a188d
- (id)processedImageFromShapeImage:(id)shapeImage withScale:(float)scale;	// 0x307a18a1
- (id)processedImageFromShapePath:(CGPathRef)shapePath inRect:(CGRect)rect;	// 0x307a1c4d
- (void)scaleEffectParametersBy:(float)by;	// 0x307a0ee1
- (id)standardEffectCompositeWithShapeImage:(id)shapeImage;	// 0x307a11f9
@end

