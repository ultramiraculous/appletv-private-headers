/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject {
@private
	int mRotationX;	// 4 = 0x4
	int mRotationY;	// 8 = 0x8
	int mDepthPercent;	// 12 = 0xc
	int mHeightPercent;	// 16 = 0x10
	int mPerspective;	// 20 = 0x14
	bool mRightAngleAxes;	// 24 = 0x18
	bool mCluster;	// 25 = 0x19
}
@property(assign, getter=isCluster) bool cluster;	// G=0x345c4681; S=0x3453f75d; converted property
@property(assign) int depthPercent;	// G=0x345c4641; S=0x3453f725; converted property
@property(assign) int heightPercent;	// G=0x345c4651; S=0x3453f741; converted property
@property(assign) int perspective;	// G=0x345c4661; S=0x3453f6fd; converted property
@property(assign, getter=isRightAngleAxes) bool rightAngleAxes;	// G=0x345c4671; S=0x3453f715; converted property
@property(assign) int rotationX;	// G=0x345c4631; S=0x3453f6dd; converted property
@property(assign) int rotationY;	// G=0x345c4621; S=0x3453f6ed; converted property
- (id)init;	// 0x3453f64d
// converted property getter: - (int)depthPercent;	// 0x345c4641
// converted property getter: - (int)heightPercent;	// 0x345c4651
// converted property getter: - (bool)isCluster;	// 0x345c4681
// converted property getter: - (bool)isRightAngleAxes;	// 0x345c4671
// converted property getter: - (int)perspective;	// 0x345c4661
// converted property getter: - (int)rotationX;	// 0x345c4631
// converted property getter: - (int)rotationY;	// 0x345c4621
// converted property setter: - (void)setCluster:(bool)cluster;	// 0x3453f75d
// converted property setter: - (void)setDepthPercent:(int)percent;	// 0x3453f725
// converted property setter: - (void)setHeightPercent:(int)percent;	// 0x3453f741
// converted property setter: - (void)setPerspective:(int)perspective;	// 0x3453f6fd
// converted property setter: - (void)setRightAngleAxes:(bool)axes;	// 0x3453f715
// converted property setter: - (void)setRotationX:(int)x;	// 0x3453f6dd
// converted property setter: - (void)setRotationY:(int)y;	// 0x3453f6ed
@end

