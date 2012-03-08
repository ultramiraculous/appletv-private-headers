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
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"

@class MCMontage, MCPlugParallel, NSString, NSMutableDictionary, MPLayerInternal, NSMutableArray, MPAudioPlaylist;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x34963249; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x34961e41; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x34962ebd; S=0x34962ecd; converted property
@property(assign) int audioPriority;	// G=0x34962ed1; S=0x34962ef1; @dynamic
@property(assign) double duration;	// G=0x349629d5; S=0x349629f5; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x349616e1; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x349617f9; converted property
@property(assign) float height;	// G=0x34965839; S=0x3496587d; converted property
@property(assign) BOOL isAudioLayer;	// G=0x349630a5; S=0x349630c9; @dynamic
@property(assign) BOOL isTriggered;	// G=0x34962ce9; S=0x34962d0d; converted property
@property(copy) NSString *layerID;	// G=0x349631b1; S=0x34963191; @dynamic
@property(retain) MCMontage *montage;	// G=0x349634f9; S=0x34964eb9; converted property
@property(assign) double numberOfLoops;	// G=0x34962f95; S=0x34962fb5; converted property
@property(assign) float opacity;	// G=0x34962125; S=0x34962145; converted property
@property(retain) id parent;	// G=0x349628e9; S=0x34964e09; converted property
@property(assign) double phaseInDuration;	// G=0x34962b09; S=0x34962b29; converted property
@property(assign) double phaseOutDuration;	// G=0x34962bf9; S=0x34962c19; converted property
@property(retain) MCPlugParallel *plug;	// G=0x349634e9; S=0x3496466d; converted property
@property(assign) CGPoint position;	// G=0x349622b5; S=0x349622e5; converted property
@property(assign) float rotationAngle;	// G=0x3496247d; S=0x3496249d; converted property
@property(assign) float scale;	// G=0x349621ed; S=0x3496220d; converted property
@property(retain) id scriptingAnimations;	// G=0x34965929; S=0x34965c8d; converted property
@property(assign) CGSize size;	// G=0x34962545; S=0x34962575; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x34964f01; S=0x34964f11; converted property
@property(assign) BOOL startsPaused;	// G=0x34962df5; S=0x34962e19; converted property
@property(assign) double timeIn;	// G=0x349628f9; S=0x34962919; converted property
@property(copy) NSString *title;	// G=0x34961635; S=0x34961655; @dynamic
@property(assign) float width;	// G=0x349658b1; S=0x349658f5; converted property
@property(assign) float xPosition;	// G=0x34965749; S=0x3496578d; converted property
@property(assign) float xRotationAngle;	// G=0x34962645; S=0x34962665; converted property
@property(assign) float yPosition;	// G=0x349657c1; S=0x34965805; converted property
@property(assign) float yRotationAngle;	// G=0x3496270d; S=0x3496272d; converted property
@property(assign) int zIndex;	// G=0x349627d5; S=0x3496281d; converted property
@property(assign) float zPosition;	// G=0x349623b5; S=0x349623d5; converted property
+ (id)animatedLayer;	// 0x3495f4d9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3495f421
+ (id)effectLayer;	// 0x3495f51d
+ (id)layer;	// 0x3495f451
+ (id)sequentialLayer;	// 0x3495f495
- (id)init;	// 0x3495f561
- (id)initWithCoder:(id)coder;	// 0x34960679
- (id)action;	// 0x34963d21
- (id)actionForKey:(id)key;	// 0x34963259
// converted property getter: - (id)actions;	// 0x34963249
- (void)addEffectContainer:(id)container;	// 0x349616f1
- (void)addEffectContainers:(id)containers;	// 0x3496174d
- (void)addFilter:(id)filter;	// 0x34961809
- (void)addFilters:(id)filters;	// 0x34961865
- (id)allSlides:(BOOL)slides;	// 0x34963509
- (id)allSongs;	// 0x349638b9
- (id)animationPathForKey:(id)key;	// 0x34961e51
// converted property getter: - (id)animationPaths;	// 0x34961e41
// converted property getter: - (id)audioPlaylist;	// 0x34962ebd
// declared property getter: - (int)audioPriority;	// 0x34962ed1
- (void)cleanup;	// 0x3496454d
- (void)configureActions;	// 0x349653f9
- (void)copyActions:(id)actions;	// 0x34964431
- (void)copyAnimationPaths:(id)paths;	// 0x34964359
- (void)copyAudioPlaylist:(id)playlist;	// 0x34964509
- (void)copyEffectContainers:(id)containers;	// 0x3496416d
- (void)copyFilters:(id)filters;	// 0x34964261
- (void)copyStruct:(id)aStruct;	// 0x34963dad
- (id)copyWithZone:(NSZone *)zone;	// 0x349613e9
- (int)countOfEffectContainers;	// 0x349654e9
- (int)countOfFilters;	// 0x34965619
- (void)dealloc;	// 0x34961519
- (id)description;	// 0x3495f901
- (void)dump;	// 0x34963a61
// converted property getter: - (double)duration;	// 0x349629d5
// converted property getter: - (id)effectContainers;	// 0x349616e1
- (void)encodeWithCoder:(id)coder;	// 0x3495fa29
// converted property getter: - (id)filters;	// 0x349617f9
- (void)finalize;	// 0x349614ed
- (id)fullDebugLog;	// 0x34963a89
// converted property getter: - (float)height;	// 0x34965839
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x3496178d
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x349618a5
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x34965529
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x34965659
// declared property getter: - (BOOL)isAudioLayer;	// 0x349630a5
// converted property getter: - (BOOL)isTriggered;	// 0x34962ce9
// declared property getter: - (id)layerID;	// 0x349631b1
- (id)layerKey;	// 0x349631d1
// converted property getter: - (id)montage;	// 0x349634f9
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x349617f5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x34961d69
// converted property getter: - (double)numberOfLoops;	// 0x34962f95
- (id)objectID;	// 0x34963d6d
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x34965509
- (id)objectInFiltersAtIndex:(int)index;	// 0x34965639
// converted property getter: - (float)opacity;	// 0x34962125
// converted property getter: - (id)parent;	// 0x349628e9
- (id)parentDocument;	// 0x34963ca9
// converted property getter: - (double)phaseInDuration;	// 0x34962b09
// converted property getter: - (double)phaseOutDuration;	// 0x34962bf9
// converted property getter: - (id)plug;	// 0x349634e9
- (id)plugID;	// 0x34963d4d
// converted property getter: - (CGPoint)position;	// 0x349622b5
- (void)reconnectAllTransitions;	// 0x34965231
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x34965119
- (void)removeActionForKey:(id)key;	// 0x34963425
- (void)removeAllEffectContainers;	// 0x34961795
- (void)removeAllFilters;	// 0x34961d09
- (void)removeAnimationPathForKey:(id)key;	// 0x3496204d
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x34961791
- (void)removeFiltersAtIndices:(id)indices;	// 0x34961b51
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x34965569
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x34965699
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x349655a5
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x349656d5
- (void)resetStartTimes;	// 0x349652f1
// converted property getter: - (float)rotationAngle;	// 0x3496247d
// converted property getter: - (float)scale;	// 0x349621ed
// converted property getter: - (id)scriptingAnimations;	// 0x34965929
- (void)setAction:(id)action forKey:(id)key;	// 0x34963279
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x34961e71
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x34962ecd
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x34962ef1
// converted property setter: - (void)setDuration:(double)duration;	// 0x349629f5
// converted property setter: - (void)setHeight:(float)height;	// 0x3496587d
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x349630c9
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x34962d0d
// declared property setter: - (void)setLayerID:(id)anId;	// 0x34963191
// converted property setter: - (void)setMontage:(id)montage;	// 0x34964eb9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x34962fb5
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x34962145
// converted property setter: - (void)setParent:(id)parent;	// 0x34964e09
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x34962b29
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x34962c19
// converted property setter: - (void)setPlug:(id)plug;	// 0x3496466d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x349622e5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3496249d
// converted property setter: - (void)setScale:(float)scale;	// 0x3496220d
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x34965c8d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x34962575
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x34964f11
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x34962e19
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x34962919
// declared property setter: - (void)setTitle:(id)title;	// 0x34961655
// converted property setter: - (void)setWidth:(float)width;	// 0x349658f5
// converted property setter: - (void)setXPosition:(float)position;	// 0x3496578d
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x34962665
// converted property setter: - (void)setYPosition:(float)position;	// 0x34965805
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3496272d
// converted property setter: - (void)setZIndex:(int)index;	// 0x3496281d
// converted property setter: - (void)setZPosition:(float)position;	// 0x349623d5
// converted property getter: - (CGSize)size;	// 0x34962545
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x34964f01
// converted property getter: - (BOOL)startsPaused;	// 0x34962df5
// converted property getter: - (double)timeIn;	// 0x349628f9
// declared property getter: - (id)title;	// 0x34961635
- (void)updateDurationPadding:(double)padding;	// 0x34964f65
- (void)updateMainDuration;	// 0x34965051
- (id)uuid;	// 0x34963d8d
// converted property getter: - (float)width;	// 0x349658b1
// converted property getter: - (float)xPosition;	// 0x34965749
// converted property getter: - (float)xRotationAngle;	// 0x34962645
// converted property getter: - (float)yPosition;	// 0x349657c1
// converted property getter: - (float)yRotationAngle;	// 0x3496270d
// converted property getter: - (int)zIndex;	// 0x349627d5
// converted property getter: - (float)zPosition;	// 0x349623b5
@end
