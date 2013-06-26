/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {
	int mType;	// 8 = 0x8
	NSMutableDictionary *mStops;	// 12 = 0xc
	double mDegree;	// 16 = 0x10
	CGRect mFocusRect;	// 24 = 0x18
}
@property(assign) double degree;	// G=0x34a2c06d; S=0x34a2a42d; converted property
@property(assign) CGRect focusRect;	// G=0x34a2c095; S=0x34a2a445; converted property
@property(retain) id stops;	// G=0x34a2c085; S=0x34a2a465; converted property
@property(assign) int type;	// G=0x34a2c05d; S=0x34a2a419; converted property
+ (id)gradientWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x34a2c2ad
+ (id)gradientWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x34a2c1c1
- (id)initWithResources:(id)resources;	// 0x34a2be09
- (id)initWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x34a2c235
- (id)initWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x34a2c0dd
- (id).cxx_construct;	// 0x34a2c0d9
- (id)colorForStopAtPosition:(id)position;	// 0x34a2c0b9
- (id)copyWithZone:(NSZone *)zone;	// 0x34a2bed1
- (void)dealloc;	// 0x34a2be85
// converted property getter: - (double)degree;	// 0x34a2c06d
// converted property getter: - (CGRect)focusRect;	// 0x34a2c095
- (unsigned)hash;	// 0x34a2c02d
- (bool)isEmpty;	// 0x34a2c059
- (BOOL)isEqual:(id)equal;	// 0x34a2bfd1
- (BOOL)isEqualToGradientFill:(id)gradientFill;	// 0x34a2bf25
// converted property setter: - (void)setDegree:(double)degree;	// 0x34a2a42d
// converted property setter: - (void)setFocusRect:(CGRect)rect;	// 0x34a2a445
- (void)setStopColor:(id)color atPosition:(id)position;	// 0x34a2a4a9
// converted property setter: - (void)setStops:(id)stops;	// 0x34a2a465
// converted property setter: - (void)setType:(int)type;	// 0x34a2a419
// converted property getter: - (id)stops;	// 0x34a2c085
// converted property getter: - (int)type;	// 0x34a2c05d
@end
