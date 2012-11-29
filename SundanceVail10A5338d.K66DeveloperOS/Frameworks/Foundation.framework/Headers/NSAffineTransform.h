/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
	XXStruct_DOQIoC _transformStruct;	// 4 = 0x4
}
@property(assign) XXStruct_DOQIoC transformStruct;	// G=0x3735fa3d; S=0x3735fa71; converted property
+ (id)transform;	// 0x3735eff1
- (id)init;	// 0x3735f029
- (id)initWithCoder:(id)coder;	// 0x3735fc75
- (id)initWithTransform:(id)transform;	// 0x3735f091
- (void)appendTransform:(id)transform;	// 0x3735f741
- (id)copyWithZone:(NSZone *)zone;	// 0x3735f105
- (void)encodeWithCoder:(id)coder;	// 0x3735faa5
- (unsigned)hash;	// 0x3735f23d
- (void)invert;	// 0x3735f621
- (BOOL)isEqual:(id)equal;	// 0x3735f139
- (void)prependTransform:(id)transform;	// 0x3735f859
- (void)rotateByDegrees:(float)degrees;	// 0x3735f309
- (void)rotateByRadians:(float)radians;	// 0x3735f449
- (void)scaleBy:(float)by;	// 0x3735f55d
- (void)scaleXBy:(float)by yBy:(float)by2;	// 0x3735f5bd
// converted property setter: - (void)setTransformStruct:(XXStruct_DOQIoC)aStruct;	// 0x3735fa71
- (CGPoint)transformPoint:(CGPoint)point;	// 0x3735f971
- (CGSize)transformSize:(CGSize)size;	// 0x3735f9e5
// converted property getter: - (XXStruct_DOQIoC)transformStruct;	// 0x3735fa3d
- (void)translateXBy:(float)by yBy:(float)by2;	// 0x3735f281
@end
