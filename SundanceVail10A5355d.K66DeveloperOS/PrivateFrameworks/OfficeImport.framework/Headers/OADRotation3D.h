/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADRotation3D : NSObject <NSCopying> {
	float mLatitude;	// 4 = 0x4
	float mLongitude;	// 8 = 0x8
	float mRevolution;	// 12 = 0xc
}
- (id)initWithLatitude:(float)latitude longitude:(float)longitude revolution:(float)revolution;	// 0x31ce4361
- (id)copyWithZone:(NSZone *)zone;	// 0x31dc96d5
- (unsigned)hash;	// 0x31dc974d
- (BOOL)isEqual:(id)equal;	// 0x31dc97a1
- (float)latitude;	// 0x31dc96a5
- (float)longitude;	// 0x31dc96b5
- (float)revolution;	// 0x31dc96c5
@end

