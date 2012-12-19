/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimateScaleBehavior.h"
#import "OfficeImport-Structs.h"

@class NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
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
@property(assign) double angle;	// G=0x34a8212d; S=0x34a82145; converted property
@property(assign) int originType;	// G=0x34a821bd; S=0x34a821cd; converted property
@property(retain) id path;	// G=0x34a8210d; S=0x34941435; converted property
@property(assign) int pointType;	// G=0x34a8217d; S=0x34a8218d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x34a821fd; S=0x3494171d; converted property
- (id).cxx_construct;	// 0x34940c35
// converted property getter: - (double)angle;	// 0x34a8212d
- (void)dealloc;	// 0x34942125
- (BOOL)hasAngle;	// 0x34a8211d
- (BOOL)hasOriginType;	// 0x34a821ad
- (BOOL)hasPath;	// 0x34a820f5
- (BOOL)hasPointType;	// 0x34a8216d
- (BOOL)hasRotationCenter;	// 0x34a821ed
// converted property getter: - (int)originType;	// 0x34a821bd
// converted property getter: - (id)path;	// 0x34a8210d
// converted property getter: - (int)pointType;	// 0x34a8217d
// converted property getter: - (CGPoint)rotationCenter;	// 0x34a821fd
// converted property setter: - (void)setAngle:(double)angle;	// 0x34a82145
// converted property setter: - (void)setOriginType:(int)type;	// 0x34a821cd
// converted property setter: - (void)setPath:(id)path;	// 0x34941435
// converted property setter: - (void)setPointType:(int)type;	// 0x34a8218d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x3494171d
@end
