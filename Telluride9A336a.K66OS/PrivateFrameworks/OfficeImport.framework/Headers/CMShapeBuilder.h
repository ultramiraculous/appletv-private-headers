/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADOrientedBounds, NSDictionary;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject {
@private
	int _type;	// 4 = 0x4
	OADOrientedBounds *_orientedBounds;	// 8 = 0x8
	int _format;	// 12 = 0xc
	NSDictionary *_adjustValues;	// 16 = 0x10
}
+ (CGRect)canonicalBounds;	// 0x34c46ff1
- (CGAffineTransform)affineTransform;	// 0x34c864b1
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x34e73ead
- (void)dealloc;	// 0x34c47495
- (BOOL)isOffice12;	// 0x34c4d955
- (float)maxAdjustedValue;	// 0x34c4d929
- (void)setAdjustValues:(id)values;	// 0x34c46be9
- (void)setFileFormat:(int)format;	// 0x34c46c39
- (void)setOrientedBounds:(id)bounds;	// 0x34c46b99
- (void)setShapeType:(int)type;	// 0x34c46bd9
@end

