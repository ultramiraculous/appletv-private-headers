/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADArcToPathElement : OADPathElement {
	OADAdjustPoint mSemiaxes;	// 4 = 0x4
	OADAdjustCoord mStartAngle;	// 20 = 0x14
	OADAdjustCoord mAngleLength;	// 28 = 0x1c
}
- (id)initWithSemiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length;	// 0x34990d71
- (id).cxx_construct;	// 0x34990d6d
- (OADAdjustCoord)angleLength;	// 0x34a4f4f1
- (OADAdjustPoint)semiaxes;	// 0x34a4f4b5
- (OADAdjustCoord)startAngle;	// 0x34a4f4d9
@end

