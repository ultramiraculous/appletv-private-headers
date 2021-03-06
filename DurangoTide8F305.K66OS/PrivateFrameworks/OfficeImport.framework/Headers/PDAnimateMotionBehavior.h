/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "PDAnimateScaleBehavior.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
@private
	NSString *mPath;	// 36 = 0x24
	BOOL mHasAngle;	// 40 = 0x28
	double mAngle;	// 44 = 0x2c
	BOOL mHasPointType;	// 52 = 0x34
	int mPointType;	// 56 = 0x38
	BOOL mHasOriginType;	// 60 = 0x3c
	int mOriginType;	// 64 = 0x40
	BOOL mHasRotationCenter;	// 68 = 0x44
	CGPoint mRotationCenter;	// 72 = 0x48
}
@property(assign) double angle;	// G=0x345cab91; S=0x345caba1; converted property
@property(assign) int originType;	// G=0x345cac0d; S=0x345cac1d; converted property
@property(retain) id path;	// G=0x345cab71; S=0x345cba05; converted property
@property(assign) int pointType;	// G=0x345cabd1; S=0x345cabe1; converted property
@property(assign) CGPoint rotationCenter;	// G=0x345cac49; S=0x345cac61; converted property
// converted property getter: - (double)angle;	// 0x345cab91
- (void)dealloc;	// 0x345cba3d
- (BOOL)hasAngle;	// 0x345cab81
- (BOOL)hasOriginType;	// 0x345cabfd
- (BOOL)hasPath;	// 0x345cab5d
- (BOOL)hasPointType;	// 0x345cabc1
- (BOOL)hasRotationCenter;	// 0x345cac39
// converted property getter: - (int)originType;	// 0x345cac0d
// converted property getter: - (id)path;	// 0x345cab71
// converted property getter: - (int)pointType;	// 0x345cabd1
// converted property getter: - (CGPoint)rotationCenter;	// 0x345cac49
// converted property setter: - (void)setAngle:(double)angle;	// 0x345caba1
// converted property setter: - (void)setOriginType:(int)type;	// 0x345cac1d
// converted property setter: - (void)setPath:(id)path;	// 0x345cba05
// converted property setter: - (void)setPointType:(int)type;	// 0x345cabe1
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x345cac61
@end

