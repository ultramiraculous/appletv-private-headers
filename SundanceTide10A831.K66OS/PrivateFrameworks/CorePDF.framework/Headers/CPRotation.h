/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPZone.h"


@interface CPRotation : CPZone {
	float rotationAngle;	// 132 = 0x84
}
@property(assign) float rotationAngle;	// G=0x32227909; S=0x322278e5; converted property
- (id)init;	// 0x322278a1
- (void)accept:(id)accept;	// 0x322278cd
- (CGRect)bounds;	// 0x32227919
- (CGRect)renderedBounds;	// 0x322279d1
// converted property getter: - (float)rotationAngle;	// 0x32227909
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x322278e5
@end
