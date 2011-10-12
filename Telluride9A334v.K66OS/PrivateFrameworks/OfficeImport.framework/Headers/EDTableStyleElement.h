/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDDifferentialStyle, EDCollection;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
@private
	EDCollection *mDifferentialStyles;	// 4 = 0x4
	int mType;	// 8 = 0x8
	unsigned mBandSize;	// 12 = 0xc
	EDDifferentialStyle *mDifferentialStyle;	// 16 = 0x10
}
@property(assign) unsigned bandSize;	// G=0x356d9c51; S=0x35733f1d; converted property
@property(retain) id differentialStyle;	// G=0x356da9b1; S=0x356c0011; converted property
@property(assign) int type;	// G=0x35733f0d; S=0x356bffb1; converted property
+ (id)tableStyleElementWithResources:(id)resources;	// 0x356f08cd
- (id)initWithResources:(id)resources;	// 0x356bfc09
// converted property getter: - (unsigned)bandSize;	// 0x356d9c51
- (id)copyWithZone:(NSZone *)zone;	// 0x35733f2d
- (void)dealloc;	// 0x356c8e5d
// converted property getter: - (id)differentialStyle;	// 0x356da9b1
- (unsigned)key;	// 0x356c0059
// converted property setter: - (void)setBandSize:(unsigned)size;	// 0x35733f1d
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x356c0011
- (void)setDifferentialStyleWithIndex:(unsigned)index;	// 0x356bffd1
// converted property setter: - (void)setType:(int)type;	// 0x356bffb1
// converted property getter: - (int)type;	// 0x35733f0d
@end

