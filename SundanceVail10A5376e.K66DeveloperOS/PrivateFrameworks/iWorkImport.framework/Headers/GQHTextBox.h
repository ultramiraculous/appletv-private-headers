/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHParagraphStyle.h"


@interface GQHTextBox : GQHParagraphStyle {
}
+ (void)createExternalWrapSandbagStyles:(id)styles;	// 0x3583b211
+ (int)handleLayoutStorage:(id)storage state:(id)state;	// 0x3583a8e1
+ (int)handleShapeText:(id)text boundsRect:(CGRect)rect floating:(BOOL)floating state:(id)state;	// 0x3583a1cd
+ (void)mapLayout:(id)layout style:(id)style state:(id)state;	// 0x3583ab15
+ (void)mapScaledImageFill:(id)fill style:(id)style size:(CGSize)size;	// 0x3583b069
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x3583a111
+ (const char *)name;	// 0x3583ab09
+ (int)outputInnerSandbagsForFrame:(CGRect)frame drawable:(id)drawable state:(id)state;	// 0x3583b855
+ (int)outputInnerSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x3583bea5
+ (void)outputSandbag:(id)sandbag state:(id)state;	// 0x3583bd3d
+ (int)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state;	// 0x3583b2a9
+ (BOOL)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state isPageFrame:(BOOL)frame5;	// 0x3583b2e9
+ (int)outputWrapSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x3583bf5d
+ (BOOL)styleNeedsImageFillMapping:(id)mapping;	// 0x3583affd
@end
