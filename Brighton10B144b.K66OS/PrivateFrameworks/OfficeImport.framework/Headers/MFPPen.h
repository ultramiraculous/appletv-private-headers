/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFPCustomLineCap, MFPBrush;

@interface MFPPen : NSObject {
	MFPBrush *mBrush;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	CGAffineTransform mTransform;	// 12 = 0xc
	int mStartCap;	// 36 = 0x24
	int mEndCap;	// 40 = 0x28
	int mLineJoin;	// 44 = 0x2c
	float mMiterLimit;	// 48 = 0x30
	int mDashStyle;	// 52 = 0x34
	int mDashCap;	// 56 = 0x38
	float mDashOffset;	// 60 = 0x3c
	int mDashPatternCount;	// 64 = 0x40
	float *mDashPattern;	// 68 = 0x44
	int mAlignment;	// 72 = 0x48
	int mCompoundArrayCount;	// 76 = 0x4c
	float *mCompoundArray;	// 80 = 0x50
	MFPCustomLineCap *mCustomStartCap;	// 84 = 0x54
	MFPCustomLineCap *mCustomEndCap;	// 88 = 0x58
}
@property(assign) int alignment;	// G=0x34afeb21; S=0x34afeb31; converted property
@property(retain) id brush;	// G=0x34afe8fd; S=0x34afe90d; converted property
@property(retain) id customEndCap;	// G=0x34afebfd; S=0x34afec0d; converted property
@property(retain) id customStartCap;	// G=0x34afebad; S=0x34afebbd; converted property
@property(assign) int dashCap;	// G=0x34afea75; S=0x34afea85; converted property
@property(assign) float dashOffset;	// G=0x34afea95; S=0x34afeaa5; converted property
@property(assign) int dashStyle;	// G=0x34afea55; S=0x34afea65; converted property
@property(assign) int endCap;	// G=0x34afe9f5; S=0x34afea05; converted property
@property(assign) int lineJoin;	// G=0x34afea15; S=0x34afea25; converted property
@property(assign) float miterLimit;	// G=0x34afea35; S=0x34afea45; converted property
@property(assign) int startCap;	// G=0x34afe9d5; S=0x34afe9e5; converted property
@property(assign) CGAffineTransform transform;	// G=0x34afe96d; S=0x34afe9a1; converted property
@property(assign) float width;	// G=0x34afe94d; S=0x34afe95d; converted property
- (id)init;	// 0x34afe77d
- (id).cxx_construct;	// 0x34afefed
// converted property getter: - (int)alignment;	// 0x34afeb21
- (void)applyDashCap;	// 0x34afeefd
- (void)applyDashPattern;	// 0x34afecf9
- (void)applyDashPattern:(const float *)pattern count:(int)count;	// 0x34afec4d
- (void)applyLineCap;	// 0x34afeeb1
- (void)applyLineJoin;	// 0x34afee69
// converted property getter: - (id)brush;	// 0x34afe8fd
- (const float *)compoundArray;	// 0x34afeb51
- (int)compoundArrayCount;	// 0x34afeb41
// converted property getter: - (id)customEndCap;	// 0x34afebfd
// converted property getter: - (id)customStartCap;	// 0x34afebad
// converted property getter: - (int)dashCap;	// 0x34afea75
// converted property getter: - (float)dashOffset;	// 0x34afea95
- (const float *)dashPattern;	// 0x34afeac5
- (int)dashPatternCount;	// 0x34afeab5
// converted property getter: - (int)dashStyle;	// 0x34afea55
- (void)dealloc;	// 0x34afe859
// converted property getter: - (int)endCap;	// 0x34afe9f5
// converted property getter: - (int)lineJoin;	// 0x34afea15
// converted property getter: - (float)miterLimit;	// 0x34afea35
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x34afeb31
// converted property setter: - (void)setBrush:(id)brush;	// 0x34afe90d
- (void)setCompoundArray:(const float *)array count:(int)count;	// 0x34afeb61
// converted property setter: - (void)setCustomEndCap:(id)cap;	// 0x34afec0d
// converted property setter: - (void)setCustomStartCap:(id)cap;	// 0x34afebbd
// converted property setter: - (void)setDashCap:(int)cap;	// 0x34afea85
// converted property setter: - (void)setDashOffset:(float)offset;	// 0x34afeaa5
- (void)setDashPattern:(const float *)pattern count:(int)count;	// 0x34afead5
// converted property setter: - (void)setDashStyle:(int)style;	// 0x34afea65
// converted property setter: - (void)setEndCap:(int)cap;	// 0x34afea05
// converted property setter: - (void)setLineJoin:(int)join;	// 0x34afea25
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x34afea45
// converted property setter: - (void)setStartCap:(int)cap;	// 0x34afe9e5
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x34afe9a1
// converted property setter: - (void)setWidth:(float)width;	// 0x34afe95d
// converted property getter: - (int)startCap;	// 0x34afe9d5
- (void)strokePath:(CGPathRef)path;	// 0x34afef29
// converted property getter: - (CGAffineTransform)transform;	// 0x34afe96d
// converted property getter: - (float)width;	// 0x34afe94d
@end

