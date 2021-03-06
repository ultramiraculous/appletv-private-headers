/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADFill.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect, OADBlipRef, OADImageFillTechnique;

@interface OADImageFill : OADFill {
	OADBlipRef *mBlipRef;	// 12 = 0xc
	BOOL mIsBlipRefOverridden;	// 16 = 0x10
	OADRelativeRect *mSourceRect;	// 20 = 0x14
	BOOL mIsSourceRectOverridden;	// 24 = 0x18
	long mDpi;	// 28 = 0x1c
	BOOL mIsDpiOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADImageFillTechnique *mTechnique;	// 36 = 0x24
	BOOL mIsTechniqueOverridden;	// 40 = 0x28
}
@property(retain) id blipRef;	// G=0x339ce1f5; S=0x339badc5; converted property
@property(assign) long dpi;	// G=0x33ba0335; S=0x339baeed; converted property
@property(assign) BOOL rotateWithShape;	// G=0x33ba0399; S=0x339baf0d; converted property
@property(retain) id sourceRect;	// G=0x339cde95; S=0x339baea1; converted property
@property(retain) id technique;	// G=0x33aaff29; S=0x339bb0e5; converted property
+ (id)defaultProperties;	// 0x339bac7d
- (id)initWithDefaults;	// 0x339bacc5
// converted property getter: - (id)blipRef;	// 0x339ce1f5
- (id)color;	// 0x33ba0279
- (id)copyWithZone:(NSZone *)zone;	// 0x33b14451
- (void)dealloc;	// 0x339dd42d
// converted property getter: - (long)dpi;	// 0x33ba0335
- (unsigned)hash;	// 0x33ba03fd
- (BOOL)isBlipRefOverridden;	// 0x339ce1c1
- (BOOL)isDpiOverridden;	// 0x33ba0365
- (BOOL)isEqual:(id)equal;	// 0x339d291d
- (BOOL)isRotateWithShapeOverridden;	// 0x33ba03c9
- (BOOL)isSourceRectOverridden;	// 0x339cde61
- (BOOL)isTechniqueOverridden;	// 0x33aaff59
// converted property getter: - (BOOL)rotateWithShape;	// 0x33ba0399
// converted property setter: - (void)setBlipRef:(id)ref;	// 0x339badc5
// converted property setter: - (void)setDpi:(long)dpi;	// 0x339baeed
- (void)setParent:(id)parent;	// 0x339bb131
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x339baf0d
// converted property setter: - (void)setSourceRect:(id)rect;	// 0x339baea1
- (void)setStyleColor:(id)color;	// 0x33b148c1
// converted property setter: - (void)setTechnique:(id)technique;	// 0x339bb0e5
// converted property getter: - (id)sourceRect;	// 0x339cde95
// converted property getter: - (id)technique;	// 0x33aaff29
@end

