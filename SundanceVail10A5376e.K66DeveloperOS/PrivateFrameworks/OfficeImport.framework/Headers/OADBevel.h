/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADBevel : NSObject <NSCopying> {
	int mType;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	float mHeight;	// 12 = 0xc
}
@property(assign) float height;	// G=0x3714cd21; S=0x3705dc69; converted property
@property(assign) int type;	// G=0x3714cd01; S=0x370ae759; converted property
@property(assign) float width;	// G=0x3714cd11; S=0x3705dc59; converted property
- (id)init;	// 0x3705dbf9
- (id)copyWithZone:(NSZone *)zone;	// 0x3714cc7d
- (unsigned)hash;	// 0x3714cd31
// converted property getter: - (float)height;	// 0x3714cd21
- (BOOL)isEqual:(id)equal;	// 0x3714cd79
// converted property setter: - (void)setHeight:(float)height;	// 0x3705dc69
// converted property setter: - (void)setType:(int)type;	// 0x370ae759
// converted property setter: - (void)setWidth:(float)width;	// 0x3705dc59
// converted property getter: - (int)type;	// 0x3714cd01
// converted property getter: - (float)width;	// 0x3714cd11
@end
