/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCPlug.h"

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
@property(readonly, assign) float aspectRatio;	// G=0x3252733d; 
@property(assign, nonatomic) short audioPriority;	// G=0x325290c9; S=0x325290d9; @synthesize=mAudioPriority
@property(assign, nonatomic) BOOL clipsContainer;	// G=0x32528cb1; S=0x32528cc9; 
@property(readonly, assign) unsigned char countOfLayouts;	// G=0x32528ced; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x32528d1d; S=0x32528d31; 
@property(readonly, assign) BOOL hasAbsoluteAspectRatio;	// G=0x32527131; 
@property(readonly, assign) BOOL hasValidWidth;	// G=0x325271bd; 
@property(readonly, assign) float height;	// G=0x325272b9; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x32529041; @synthesize=mIDInSupercontainer
@property(assign, nonatomic) BOOL isTriggered;	// G=0x32528c39; S=0x32528c51; 
@property(assign, nonatomic) float opacity;	// G=0x325290e9; S=0x32526855; @synthesize=mOpacity
@property(assign, nonatomic) CGPoint position;	// G=0x32526865; S=0x325268e1; 
@property(assign, nonatomic) float positionZ;	// G=0x32528435; S=0x32528471; 
@property(assign, nonatomic) BOOL resetsTimeOnTrigger;	// G=0x32528c75; S=0x32528c8d; 
@property(assign, nonatomic) float rotation;	// G=0x3252803d; S=0x325280a1; 
@property(assign, nonatomic) float rotationAngle;	// G=0x32528e21; S=0x32528e31; 
@property(assign, nonatomic) float rotationX;	// G=0x325286e1; S=0x3252871d; 
@property(assign, nonatomic) float rotationY;	// G=0x3252898d; S=0x325289c9; 
@property(assign, nonatomic) float scale;	// G=0x32527c41; S=0x32527ca5; 
@property(assign, nonatomic) CGSize size;	// G=0x32526cb1; S=0x32526d61; 
@property(assign) MCContainerParallelizer *supercontainer;	// G=0x32529065; S=0x32529079; @synthesize=mSupercontainer
@property(assign, nonatomic) double timeIn;	// G=0x32529091; S=0x32526841; @synthesize=mTimeIn
@property(readonly, assign) float width;	// G=0x32527235; 
@property(assign, nonatomic) float xRotationAngle;	// G=0x32528e61; S=0x32528e71; 
@property(assign, nonatomic) float yRotationAngle;	// G=0x32528e81; S=0x32528e91; 
@property(assign, nonatomic) short zIndex;	// G=0x325290a9; S=0x325290b9; @synthesize=mZIndex
@property(assign, nonatomic) float zPosition;	// G=0x32528e41; S=0x32528e51; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32525819
- (id)init;	// 0x325258fd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32525941
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32528d4d
// declared property getter: - (float)aspectRatio;	// 0x3252733d
- (float)aspectRatioForParentAspectRatio:(float)parentAspectRatio;	// 0x325273d5
// declared property getter: - (short)audioPriority;	// 0x325290c9
// declared property getter: - (BOOL)clipsContainer;	// 0x32528cb1
// declared property getter: - (unsigned char)countOfLayouts;	// 0x32528ced
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x32528d1d
- (void)demolish;	// 0x3252616d
- (id)description;	// 0x32528ea1
// declared property getter: - (BOOL)hasAbsoluteAspectRatio;	// 0x32527131
// declared property getter: - (BOOL)hasValidWidth;	// 0x325271bd
// declared property getter: - (float)height;	// 0x325272b9
// declared property getter: - (id)idInSupercontainer;	// 0x32529041
- (id)imprint;	// 0x325261e5
// declared property getter: - (BOOL)isTriggered;	// 0x32528c39
// declared property getter: - (float)opacity;	// 0x325290e9
// declared property getter: - (CGPoint)position;	// 0x32526865
// declared property getter: - (float)positionZ;	// 0x32528435
// declared property getter: - (BOOL)resetsTimeOnTrigger;	// 0x32528c75
// declared property getter: - (float)rotation;	// 0x3252803d
// declared property getter: - (float)rotationAngle;	// 0x32528e21
// declared property getter: - (float)rotationX;	// 0x325286e1
// declared property getter: - (float)rotationY;	// 0x3252898d
// declared property getter: - (float)scale;	// 0x32527c41
// declared property setter: - (void)setAudioPriority:(short)priority;	// 0x325290d9
// declared property setter: - (void)setClipsContainer:(BOOL)container;	// 0x32528cc9
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x32528d31
- (void)setHeight:(float)height andAbsoluteAspectRatio:(float)ratio;	// 0x325278a1
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x32529055
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32528c51
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x32526855
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x325268e1
// declared property setter: - (void)setPositionZ:(float)z;	// 0x32528471
// declared property setter: - (void)setResetsTimeOnTrigger:(BOOL)trigger;	// 0x32528c8d
// declared property setter: - (void)setRotation:(float)rotation;	// 0x325280a1
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x32528e31
// declared property setter: - (void)setRotationX:(float)x;	// 0x3252871d
// declared property setter: - (void)setRotationY:(float)y;	// 0x325289c9
// declared property setter: - (void)setScale:(float)scale;	// 0x32527ca5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x32526d61
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x32529079
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x32526841
- (void)setWidth:(float)width andAbsoluteAspectRatio:(float)ratio;	// 0x32527501
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x32528e71
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x32528e91
// declared property setter: - (void)setZIndex:(short)index;	// 0x325290b9
// declared property setter: - (void)setZPosition:(float)position;	// 0x32528e51
// declared property getter: - (CGSize)size;	// 0x32526cb1
- (CGSize)sizeForParentAspectRatio:(float)parentAspectRatio;	// 0x32527461
// declared property getter: - (id)supercontainer;	// 0x32529065
// declared property getter: - (double)timeIn;	// 0x32529091
// declared property getter: - (float)width;	// 0x32527235
// declared property getter: - (float)xRotationAngle;	// 0x32528e61
// declared property getter: - (float)yRotationAngle;	// 0x32528e81
// declared property getter: - (short)zIndex;	// 0x325290a9
// declared property getter: - (float)zPosition;	// 0x32528e41
@end
