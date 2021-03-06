/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADQuadBezierToPathElement : OADPathElement {
	OADAdjustPoint mControlPoint;	// 4 = 0x4
	OADAdjustPoint mToPoint;	// 20 = 0x14
}
- (id)initWithControlPoint:(OADAdjustPoint)controlPoint toPoint:(OADAdjustPoint)point;	// 0x33ba39a5
- (id).cxx_construct;	// 0x33ba3a6d
- (OADAdjustPoint)controlPoint;	// 0x33ba3a25
- (OADAdjustPoint)toPoint;	// 0x33ba3a49
@end

