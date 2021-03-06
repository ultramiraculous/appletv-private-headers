/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, CIColor;

@interface UIColor : NSObject <NSCoding, NSCopying> {
	NSString *_systemColorName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x31e2b171; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x31e2b1c1; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x31bebb41; S=0x31c20251; 
+ (id)__halfTransparentBlackColor;	// 0x31be9f71
+ (id)__halfTransparentWhiteColor;	// 0x31c3f181
+ (id)_dimmingViewColor;	// 0x31e2b921
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x31d75f15
+ (id)_systemColorWithName:(id)name;	// 0x31c240f9
+ (id)_translucentPaperTextureColor;	// 0x31e2b869
+ (id)allocWithZone:(NSZone *)zone;	// 0x31bd5c95
+ (id)blackColor;	// 0x31bd5edd
+ (id)blueColor;	// 0x31c66efd
+ (id)brownColor;	// 0x31e2a76d
+ (id)classFallbacksForKeyedArchiver;	// 0x31e29eb9
+ (id)clearColor;	// 0x31bf0c59
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x31c3e4dd
+ (id)colorWithCIColor:(id)cicolor;	// 0x31e29da5
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31c4430d
+ (id)colorWithPatternImage:(id)patternImage;	// 0x31c7c7b9
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31bf9195
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x31bd5c45
+ (id)cyanColor;	// 0x31e2a495
+ (id)darkGrayColor;	// 0x31d8e699
+ (id)darkTextColor;	// 0x31e2b4ad
+ (id)grayColor;	// 0x31c61631
+ (id)greenColor;	// 0x31e2a3e1
+ (id)groupTableViewBackgroundColor;	// 0x31d75ce1
+ (id)infoTextOverPinStripeTextColor;	// 0x31e2afc1
+ (void)initialize;	// 0x31c29c91
+ (id)insertionPointColor;	// 0x31c5930d
+ (id)lightGrayColor;	// 0x31c8b1c5
+ (id)lightTextColor;	// 0x31e2b3fd
+ (id)magentaColor;	// 0x31e2a601
+ (id)noContentDarkGradientBackgroundColor;	// 0x31e2b745
+ (id)noContentLightGradientBackgroundColor;	// 0x31e2b6cd
+ (id)orangeColor;	// 0x31cafd55
+ (id)pinStripeColor;	// 0x31e2b345
+ (id)purpleColor;	// 0x31e2a6b5
+ (id)redColor;	// 0x31c6e1e5
+ (id)scrollViewTexturedBackgroundColor;	// 0x31c7c73d
+ (id)sectionHeaderBackgroundColor;	// 0x31e2abed
+ (id)sectionHeaderBorderColor;	// 0x31e2ad79
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x31e2acb5
+ (id)sectionListBorderColor;	// 0x31d13165
+ (id)selectionHighlightColor;	// 0x31c593f5
+ (id)tableBackgroundColor;	// 0x31c24121
+ (id)tableCellBlueTextColor;	// 0x31d19b4d
+ (id)tableCellGrayTextColor;	// 0x31ca14f1
+ (id)tableCellGroupedBackgroundColor;	// 0x31caff91
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x31e2a831
+ (id)tableCellPlainBackgroundColor;	// 0x31c2019d
+ (id)tableCellValue1BlueColor;	// 0x31cae189
+ (id)tableCellValue2BlueColor;	// 0x31d95529
+ (id)tableGroupedSeparatorLightColor;	// 0x31c96159
+ (id)tableGroupedTopShadowColor;	// 0x31e2ab35
+ (id)tableSelectionColor;	// 0x31e2a8e5
+ (id)tableSelectionGradientEndColor;	// 0x31e2aa6d
+ (id)tableSelectionGradientStartColor;	// 0x31e2a9a9
+ (id)tableSeparatorDarkColor;	// 0x31cb20d9
+ (id)tableSeparatorLightColor;	// 0x31c3e1a9
+ (id)tableShadowColor;	// 0x31d1b051
+ (id)textFieldAtomBlueColor;	// 0x31e2ae3d
+ (id)textFieldAtomPurpleColor;	// 0x31e2aefd
+ (id)underPageBackgroundColor;	// 0x31e2b615
+ (id)viewFlipsideBackgroundColor;	// 0x31e2b55d
+ (id)whiteColor;	// 0x31bdec29
+ (id)yellowColor;	// 0x31e2a549
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x31c29cc5
- (id)initWithCIColor:(id)cicolor;	// 0x31e29e49
- (id)initWithCoder:(id)coder;	// 0x31d72f6d
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31e29df5
- (id)initWithPatternImage:(id)patternImage;	// 0x31c7c809
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31c3e48d
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x31bf7a25
// declared property getter: - (CGColorRef)CGColor;	// 0x31e2b171
// declared property getter: - (id)CIColor;	// 0x31e2b1c1
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x31e2b30d
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x31c20251
// declared property getter: - (id)_systemColorName;	// 0x31bebb41
- (float)alphaComponent;	// 0x31e2b325
- (CGColorRef)cgColor;	// 0x31ca963d
- (Class)classForCoder;	// 0x31e29e99
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x31e2b16d
- (id)copyWithZone:(NSZone *)zone;	// 0x31e2b261
- (void)dealloc;	// 0x31bd5fd5
- (void)encodeWithCoder:(id)coder;	// 0x31e29ef1
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x31e2b305
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x31d6ada9
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x31e2b301
- (unsigned)hash;	// 0x31e2b2b1
- (BOOL)isEqual:(id)equal;	// 0x31e2b211
- (BOOL)isPatternColor;	// 0x31d9d44d
- (void)set;	// 0x31e2b089
- (void)setFill;	// 0x31e2b0d5
- (void)setStroke;	// 0x31e2b121
- (id)styleString;	// 0x31ca9b51
@end

