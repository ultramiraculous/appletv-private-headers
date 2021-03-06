/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"
#import "ATVSlideshow-Structs.h"

@class NSString, MCContainerParallelizer;

@interface MCPlugParallel : MCPlug {
	void *mGeometry;	// 68 = 0x44
	NSString *mIDInSupercontainer;	// 72 = 0x48
	MCContainerParallelizer *mSupercontainer;	// 76 = 0x4c
	double mTimeIn;	// 80 = 0x50
	short mZIndex;	// 88 = 0x58
	short mAudioPriority;	// 90 = 0x5a
	float mOpacity;	// 92 = 0x5c
}
@property(readonly, assign) float aspectRatio;	// G=0x334d1dfd; 
@property(assign, nonatomic) short audioPriority;	// G=0x334d3b9d; S=0x334d3bad; @synthesize=mAudioPriority
@property(assign, nonatomic) BOOL clipsContainer;	// G=0x334d3771; S=0x334d3789; 
@property(readonly, assign) unsigned char countOfLayouts;	// G=0x334d37ad; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x334d37dd; S=0x334d37f1; 
@property(readonly, assign) BOOL hasAbsoluteAspectRatio;	// G=0x334d1bf1; 
@property(readonly, assign) BOOL hasValidWidth;	// G=0x334d1c7d; 
@property(readonly, assign) float height;	// G=0x334d1d79; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x334d3b01; @synthesize=mIDInSupercontainer
@property(assign, nonatomic) BOOL isTriggered;	// G=0x334d36f9; S=0x334d3711; 
@property(assign, nonatomic) float opacity;	// G=0x334d3bbd; S=0x334d1315; @synthesize=mOpacity
@property(assign, nonatomic) CGPoint position;	// G=0x334d1325; S=0x334d13a1; 
@property(assign, nonatomic) float positionZ;	// G=0x334d2ef5; S=0x334d2f31; 
@property(assign, nonatomic) BOOL resetsTimeOnTrigger;	// G=0x334d3735; S=0x334d374d; 
@property(assign, nonatomic) float rotation;	// G=0x334d2afd; S=0x334d2b61; 
@property(assign, nonatomic) float rotationAngle;	// G=0x334d38e1; S=0x334d38f1; 
@property(assign, nonatomic) float rotationX;	// G=0x334d31a1; S=0x334d31dd; 
@property(assign, nonatomic) float rotationY;	// G=0x334d344d; S=0x334d3489; 
@property(assign, nonatomic) float scale;	// G=0x334d2701; S=0x334d2765; 
@property(assign, nonatomic) CGSize size;	// G=0x334d1771; S=0x334d1821; 
@property(assign) MCContainerParallelizer *supercontainer;	// G=0x334d3b39; S=0x334d3b4d; @synthesize=mSupercontainer
@property(assign, nonatomic) double timeIn;	// G=0x334d3b65; S=0x334d1301; @synthesize=mTimeIn
@property(readonly, assign) float width;	// G=0x334d1cf5; 
@property(assign, nonatomic) float xRotationAngle;	// G=0x334d3921; S=0x334d3931; 
@property(assign, nonatomic) float yRotationAngle;	// G=0x334d3941; S=0x334d3951; 
@property(assign, nonatomic) short zIndex;	// G=0x334d3b7d; S=0x334d3b8d; @synthesize=mZIndex
@property(assign, nonatomic) float zPosition;	// G=0x334d3901; S=0x334d3911; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x334d02d9
- (id)init;	// 0x334d03bd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x334d0401
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334d380d
// declared property getter: - (float)aspectRatio;	// 0x334d1dfd
- (float)aspectRatioForParentAspectRatio:(float)parentAspectRatio;	// 0x334d1e95
// declared property getter: - (short)audioPriority;	// 0x334d3b9d
// declared property getter: - (BOOL)clipsContainer;	// 0x334d3771
// declared property getter: - (unsigned char)countOfLayouts;	// 0x334d37ad
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x334d37dd
- (void)demolish;	// 0x334d0c2d
- (id)description;	// 0x334d3961
// declared property getter: - (BOOL)hasAbsoluteAspectRatio;	// 0x334d1bf1
// declared property getter: - (BOOL)hasValidWidth;	// 0x334d1c7d
// declared property getter: - (float)height;	// 0x334d1d79
// declared property getter: - (id)idInSupercontainer;	// 0x334d3b01
- (id)imprint;	// 0x334d0ca5
// declared property getter: - (BOOL)isTriggered;	// 0x334d36f9
// declared property getter: - (float)opacity;	// 0x334d3bbd
// declared property getter: - (CGPoint)position;	// 0x334d1325
// declared property getter: - (float)positionZ;	// 0x334d2ef5
// declared property getter: - (BOOL)resetsTimeOnTrigger;	// 0x334d3735
// declared property getter: - (float)rotation;	// 0x334d2afd
// declared property getter: - (float)rotationAngle;	// 0x334d38e1
// declared property getter: - (float)rotationX;	// 0x334d31a1
// declared property getter: - (float)rotationY;	// 0x334d344d
// declared property getter: - (float)scale;	// 0x334d2701
// declared property setter: - (void)setAudioPriority:(short)priority;	// 0x334d3bad
// declared property setter: - (void)setClipsContainer:(BOOL)container;	// 0x334d3789
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x334d37f1
- (void)setHeight:(float)height andAbsoluteAspectRatio:(float)ratio;	// 0x334d2361
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x334d3b15
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x334d3711
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x334d1315
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x334d13a1
// declared property setter: - (void)setPositionZ:(float)z;	// 0x334d2f31
// declared property setter: - (void)setResetsTimeOnTrigger:(BOOL)trigger;	// 0x334d374d
// declared property setter: - (void)setRotation:(float)rotation;	// 0x334d2b61
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x334d38f1
// declared property setter: - (void)setRotationX:(float)x;	// 0x334d31dd
// declared property setter: - (void)setRotationY:(float)y;	// 0x334d3489
// declared property setter: - (void)setScale:(float)scale;	// 0x334d2765
// declared property setter: - (void)setSize:(CGSize)size;	// 0x334d1821
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x334d3b4d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x334d1301
- (void)setWidth:(float)width andAbsoluteAspectRatio:(float)ratio;	// 0x334d1fc1
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x334d3931
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x334d3951
// declared property setter: - (void)setZIndex:(short)index;	// 0x334d3b8d
// declared property setter: - (void)setZPosition:(float)position;	// 0x334d3911
// declared property getter: - (CGSize)size;	// 0x334d1771
- (CGSize)sizeForParentAspectRatio:(float)parentAspectRatio;	// 0x334d1f21
// declared property getter: - (id)supercontainer;	// 0x334d3b39
// declared property getter: - (double)timeIn;	// 0x334d3b65
// declared property getter: - (float)width;	// 0x334d1cf5
// declared property getter: - (float)xRotationAngle;	// 0x334d3921
// declared property getter: - (float)yRotationAngle;	// 0x334d3941
// declared property getter: - (short)zIndex;	// 0x334d3b7d
// declared property getter: - (float)zPosition;	// 0x334d3901
@end

