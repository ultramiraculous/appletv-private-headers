/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import <NSObject.h> // Unknown library
#import "MPNavigatorSupport.h"

@class MCContainerNavigator, NSString, NSMutableDictionary, MPNavigatorInternal, MCPlug;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x36052e5d; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x36051f79; converted property
@property(assign) double duration;	// G=0x36052925; S=0x36052949; converted property
@property(copy, nonatomic) NSString *initialLayer;	// G=0x36051ead; S=0x36051ecd; @dynamic
@property(assign) BOOL isTriggered;	// G=0x36052d41; S=0x36052d65; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x36051f69; converted property
@property(assign) double numberOfLoops;	// G=0x36052c31; S=0x36052c51; converted property
@property(assign) float opacity;	// G=0x360521fd; S=0x3605221d; converted property
@property(retain) id parent;	// G=0x36051921; S=0x3605332d; converted property
@property(assign) double phaseInDuration;	// G=0x36052a11; S=0x36052a31; converted property
@property(assign) double phaseOutDuration;	// G=0x36052b21; S=0x36052b41; converted property
@property(retain) MCPlug *plug;	// G=0x36053011; S=0x360535f9; converted property
@property(assign) CGPoint position;	// G=0x360522b1; S=0x360522e1; converted property
@property(assign) float rotationAngle;	// G=0x36052425; S=0x36052445; converted property
@property(assign) float scale;	// G=0x36052701; S=0x36052721; converted property
@property(assign) CGSize size;	// G=0x360524d9; S=0x36052509; converted property
@property(assign) BOOL startsPaused;	// G=0x36052df1; S=0x36052e15; converted property
@property(assign) double timeIn;	// G=0x36052871; S=0x36052891; converted property
@property(assign) float xRotationAngle;	// G=0x36052599; S=0x360525b9; converted property
@property(assign) float yRotationAngle;	// G=0x3605264d; S=0x3605266d; converted property
@property(assign) int zIndex;	// G=0x360527b5; S=0x36052801; converted property
@property(assign) float zPosition;	// G=0x36052371; S=0x36052391; converted property
- (id)init;	// 0x360501b9
- (id)initWithCoder:(id)coder;	// 0x36050b39
- (id)actionForKey:(id)key;	// 0x36052e6d
- (id)actionableObjectForID:(id)anId;	// 0x36054a8d
// converted property getter: - (id)actions;	// 0x36052e5d
- (id)allSlides:(BOOL)slides;	// 0x36053021
- (id)allSongs;	// 0x36053139
- (id)animationPathForKey:(id)key;	// 0x36051f89
// converted property getter: - (id)animationPaths;	// 0x36051f79
- (void)cleanup;	// 0x36054081
- (void)configureActions;	// 0x360533e5
- (void)copyActions:(id)actions;	// 0x360548ad
- (void)copyAnimationPaths:(id)paths;	// 0x360547a9
- (void)copyLayers:(id)layers;	// 0x360545dd
- (void)copyStruct:(id)aStruct;	// 0x360542ad
- (id)copyWithZone:(NSZone *)zone;	// 0x360516a9
- (void)dealloc;	// 0x360517ad
// converted property getter: - (double)duration;	// 0x36052925
- (void)encodeWithCoder:(id)coder;	// 0x36050461
- (void)finalize;	// 0x3605176d
// declared property getter: - (id)initialLayer;	// 0x36051ead
// converted property getter: - (BOOL)isTriggered;	// 0x36052d41
- (id)layerForKey:(id)key;	// 0x360519a9
- (id)layerKey;	// 0x36051931
- (id)layerKeyDictionary;	// 0x36054bb1
// converted property getter: - (id)layers;	// 0x36051f69
- (id)navigatorKey;	// 0x36051895
// converted property getter: - (double)numberOfLoops;	// 0x36052c31
- (id)objectID;	// 0x360532ed
// converted property getter: - (float)opacity;	// 0x360521fd
// converted property getter: - (id)parent;	// 0x36051921
- (id)parentDocument;	// 0x3605324d
// converted property getter: - (double)phaseInDuration;	// 0x36052a11
// converted property getter: - (double)phaseOutDuration;	// 0x36052b21
// converted property getter: - (id)plug;	// 0x36053011
- (id)plugID;	// 0x360532cd
// converted property getter: - (CGPoint)position;	// 0x360522b1
- (void)reconnectAll;	// 0x360549b1
- (void)removeActionForKey:(id)key;	// 0x36052f99
- (void)removeAllLayers;	// 0x36051dc5
- (void)removeAnimationPathForKey:(id)key;	// 0x36052131
- (void)removeLayerForKey:(id)key;	// 0x36051c2d
// converted property getter: - (float)rotationAngle;	// 0x36052425
// converted property getter: - (float)scale;	// 0x36052701
- (void)setAction:(id)action forKey:(id)key;	// 0x36052e8d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36051fa9
- (void)setContainer:(id)container;	// 0x360535b5
// converted property setter: - (void)setDuration:(double)duration;	// 0x36052949
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x36051ecd
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36052d65
- (void)setLayer:(id)layer forKey:(id)key;	// 0x360519c9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36052c51
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3605221d
// converted property setter: - (void)setParent:(id)parent;	// 0x3605332d
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36052a31
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36052b41
// converted property setter: - (void)setPlug:(id)plug;	// 0x360535f9
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x360522e1
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x36052445
// converted property setter: - (void)setScale:(float)scale;	// 0x36052721
// converted property setter: - (void)setSize:(CGSize)size;	// 0x36052509
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36052e15
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x36052891
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x360525b9
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3605266d
// converted property setter: - (void)setZIndex:(int)index;	// 0x36052801
// converted property setter: - (void)setZPosition:(float)position;	// 0x36052391
// converted property getter: - (CGSize)size;	// 0x360524d9
// converted property getter: - (BOOL)startsPaused;	// 0x36052df1
// converted property getter: - (double)timeIn;	// 0x36052871
- (id)uuid;	// 0x3605330d
// converted property getter: - (float)xRotationAngle;	// 0x36052599
// converted property getter: - (float)yRotationAngle;	// 0x3605264d
// converted property getter: - (int)zIndex;	// 0x360527b5
// converted property getter: - (float)zPosition;	// 0x36052371
@end

