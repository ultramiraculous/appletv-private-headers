/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFill.h"
#import "OfficeImport-Structs.h"

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill {
@private
	int mType;	// 8 = 0x8
	EDColorReference *mBackColorReference;	// 12 = 0xc
	EDColorReference *mForeColorReference;	// 16 = 0x10
}
@property(retain) id backColor;	// G=0x344d76dd; S=0x345a7235; converted property
@property(retain) id backColorReference;	// G=0x345a9b21; S=0x343b79a9; converted property
@property(retain) id foreColor;	// G=0x343c5405; S=0x345a7295; converted property
@property(retain) id foreColorReference;	// G=0x345a9b11; S=0x344b85d5; converted property
@property(assign) int type;	// G=0x343c36dd; S=0x344b85c5; converted property
+ (id)patternFillWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x345a9bc9
+ (id)patternFillWithType:(int)type foreColor:(id)color resources:(id)resources;	// 0x345a9c01
+ (id)patternFillWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x34520541
+ (id)patternFillWithType:(int)type resources:(id)resources;	// 0x345a9c2d
- (id)initWithResources:(id)resources;	// 0x343b7931
- (id)initWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x34571acd
- (id)initWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x34520589
// converted property getter: - (id)backColor;	// 0x344d76dd
// converted property getter: - (id)backColorReference;	// 0x345a9b21
- (id)copyWithZone:(NSZone *)zone;	// 0x345a9b5d
- (void)dealloc;	// 0x343c9ea1
// converted property getter: - (id)foreColor;	// 0x343c5405
// converted property getter: - (id)foreColorReference;	// 0x345a9b11
- (unsigned)hash;	// 0x345a9b31
- (bool)isEmpty;	// 0x345a9af9
- (BOOL)isEqual:(id)equal;	// 0x344b8af1
- (BOOL)isEqualToPatternFill:(id)patternFill;	// 0x344b8b45
// converted property setter: - (void)setBackColor:(id)color;	// 0x345a7235
// converted property setter: - (void)setBackColorReference:(id)reference;	// 0x343b79a9
// converted property setter: - (void)setForeColor:(id)color;	// 0x345a7295
// converted property setter: - (void)setForeColorReference:(id)reference;	// 0x344b85d5
// converted property setter: - (void)setType:(int)type;	// 0x344b85c5
// converted property getter: - (int)type;	// 0x343c36dd
@end

