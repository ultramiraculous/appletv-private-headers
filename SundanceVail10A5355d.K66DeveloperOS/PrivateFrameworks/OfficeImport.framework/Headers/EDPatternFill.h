/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFill.h"
#import "OfficeImport-Structs.h"

@class EDColorReference;

@interface EDPatternFill : EDFill {
	int mType;	// 8 = 0x8
	EDColorReference *mBackColorReference;	// 12 = 0xc
	EDColorReference *mForeColorReference;	// 16 = 0x10
}
@property(retain) id backColor;	// G=0x31d2c631; S=0x31dab489; converted property
@property(retain) id backColorReference;	// G=0x31dae155; S=0x31c1cbb9; converted property
@property(retain) id foreColor;	// G=0x31c49e51; S=0x31dab41d; converted property
@property(retain) id foreColorReference;	// G=0x31dae145; S=0x31c1cb75; converted property
@property(assign) int type;	// G=0x31c3f951; S=0x31c1cb61; converted property
+ (id)patternFillWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x31dae051
+ (id)patternFillWithType:(int)type foreColor:(id)color resources:(id)resources;	// 0x31dae01d
+ (id)patternFillWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x31c8cd9d
+ (id)patternFillWithType:(int)type resources:(id)resources;	// 0x31dadff5
- (id)initWithResources:(id)resources;	// 0x31c1cad5
- (id)initWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x31d3ae11
- (id)initWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x31c8cde9
// converted property getter: - (id)backColor;	// 0x31d2c631
// converted property getter: - (id)backColorReference;	// 0x31dae155
- (id)copyWithZone:(NSZone *)zone;	// 0x31dae089
- (void)dealloc;	// 0x31c26981
// converted property getter: - (id)foreColor;	// 0x31c49e51
// converted property getter: - (id)foreColorReference;	// 0x31dae145
- (unsigned)hash;	// 0x31dae101
- (bool)isEmpty;	// 0x31dae12d
- (BOOL)isEqual:(id)equal;	// 0x31c1d1e1
- (BOOL)isEqualToPatternFill:(id)patternFill;	// 0x31c1d23d
// converted property setter: - (void)setBackColor:(id)color;	// 0x31dab489
// converted property setter: - (void)setBackColorReference:(id)reference;	// 0x31c1cbb9
// converted property setter: - (void)setForeColor:(id)color;	// 0x31dab41d
// converted property setter: - (void)setForeColorReference:(id)reference;	// 0x31c1cb75
// converted property setter: - (void)setType:(int)type;	// 0x31c1cb61
// converted property getter: - (int)type;	// 0x31c3f951
@end

