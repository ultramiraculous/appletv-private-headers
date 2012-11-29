/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADVector3D : NSObject <NSCopying> {
	float mDx;	// 4 = 0x4
	float mDy;	// 8 = 0x8
	float mDz;	// 12 = 0xc
}
- (id)initWithDx:(float)dx dy:(float)dy dz:(float)dz;	// 0x33b9a8bd
- (id)copyWithZone:(NSZone *)zone;	// 0x33b9a965
- (float)dx;	// 0x33b9a935
- (float)dy;	// 0x33b9a945
- (float)dz;	// 0x33b9a955
- (unsigned)hash;	// 0x33b9a9dd
- (BOOL)isEqual:(id)equal;	// 0x33b9aa31
@end
