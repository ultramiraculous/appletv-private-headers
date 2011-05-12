/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WDABoundingBox : NSObject {
@private
	CGRect mRect;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	BOOL mFlipX;	// 24 = 0x18
	BOOL mFlipY;	// 25 = 0x19
}
@property(assign) BOOL flipX;	// G=0x345d2679; S=0x345d2689; converted property
@property(assign) BOOL flipY;	// G=0x345d2699; S=0x345d26a9; converted property
@property(assign) CGRect rect;	// G=0x345d2611; S=0x345d262d; converted property
@property(assign) float rotation;	// G=0x345d2659; S=0x345d2669; converted property
- (id)initWithRect:(CGRect)rect rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x345d26b9
// converted property getter: - (BOOL)flipX;	// 0x345d2679
// converted property getter: - (BOOL)flipY;	// 0x345d2699
// converted property getter: - (CGRect)rect;	// 0x345d2611
// converted property getter: - (float)rotation;	// 0x345d2659
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x345d2689
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x345d26a9
// converted property setter: - (void)setRect:(CGRect)rect;	// 0x345d262d
// converted property setter: - (void)setRotation:(float)rotation;	// 0x345d2669
@end
