/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFPGraphicsState, NSMutableArray, MFPObjectTable, NSMutableDictionary;

@interface MFPGraphics : NSObject {
	CGRect mCanvas;	// 4 = 0x4
	int mHorzDpi;	// 20 = 0x14
	int mVertDpi;	// 24 = 0x18
	MFPGraphicsState *mCurrentState;	// 28 = 0x1c
	NSMutableArray *mStateStack;	// 32 = 0x20
	MFPObjectTable *mObjectTable;	// 36 = 0x24
	NSMutableDictionary *mAvailableFonts;	// 40 = 0x28
}
+ (float)unitsPerInch:(int)inch;	// 0x34cd98bd
- (id)initWithCanvas:(CGRect)canvas;	// 0x34aa69b1
- (id).cxx_construct;	// 0x34aa69ad
- (BOOL)areThereOpenContainers;	// 0x34cd9de9
- (void)beginContainerNoParamsWithId:(unsigned long)anId;	// 0x34cd9b61
- (void)beginContainerWithId:(unsigned long)anId boundsInParent:(CGRect)parent bounds:(CGRect)bounds boundsUnit:(int)unit;	// 0x34cd9bed
- (void)beginContainerWithId:(unsigned long)anId containerTransform:(CGAffineTransform)transform;	// 0x34cd9a75
- (CGRect)canvas;	// 0x34cd9889
- (id)currentState;	// 0x34cd9e8d
- (void)dealloc;	// 0x34aaa27d
- (void)fillPath:(CGPathRef)path evenOddRule:(BOOL)rule brush:(id)brush;	// 0x34cd9e9d
- (id)fontNameForUppercaseFontName:(id)uppercaseFontName;	// 0x34cd9ec5
- (id)objectTable;	// 0x34cd98ad
- (CGAffineTransform)pageTransformWithScale:(float)scale unit:(int)unit;	// 0x34cd9961
- (float)pixelsPerUnit:(int)unit direction:(int)direction;	// 0x34cd98f9
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned long)anId;	// 0x34cd9cc9
- (void)saveGraphicsStateWithId:(unsigned long)anId;	// 0x34cd99f5
- (void)setHorizontalDpi:(int)dpi verticalDpi:(int)dpi2;	// 0x34b6886d
- (void)strokePath:(CGPathRef)path pen:(id)pen;	// 0x34cd9eb1
@end

