/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface OADPoint3D : NSObject <NSCopying> {
	float mX;	// 4 = 0x4
	float mY;	// 8 = 0x8
	float mZ;	// 12 = 0xc
}
- (id)initWithX:(float)x y:(float)y z:(float)z;	// 0x318eb8cd
- (id)copyWithZone:(NSZone *)zone;	// 0x318eb975
- (unsigned)hash;	// 0x318eb9f1
- (BOOL)isEqual:(id)equal;	// 0x318eba45
- (float)x;	// 0x318eb945
- (float)y;	// 0x318eb955
- (float)z;	// 0x318eb965
@end
