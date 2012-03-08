/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectInternal, MCPlugParallel, MPEffectContainer, NSString, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCContainerEffect;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
@private
	NSMutableArray *_slides;	// 4 = 0x4
	NSMutableArray *_secondarySlides;	// 8 = 0x8
	NSMutableArray *_texts;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCContainerEffect *_container;	// 28 = 0x1c
	MCPlugParallel *_plug;	// 32 = 0x20
	MPAudioPlaylist *_audioPlaylist;	// 36 = 0x24
	MPEffectContainer *_parentContainer;	// 40 = 0x28
	BOOL _replaceSlides;	// 44 = 0x2c
	BOOL _supportsEffectTiming;	// 45 = 0x2d
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	MPEffectInternal *_internal;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x32e98425; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x32e9874d; S=0x32e9875d; converted property
@property(assign) int audioPriority;	// G=0x32e988e5; S=0x32e98905; converted property
@property(retain) MCContainerEffect *container;	// G=0x32e98bc9; S=0x32e9b179; converted property
@property(retain) id effectAttributes;	// G=0x32e93a59; S=0x32e93af1; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x32e93771; S=0x32e93791; 
@property(readonly, assign) NSObject<MZEffectTiming> *effectTiming;	// G=0x32e98ad9; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x32e97ce9; converted property
@property(assign) double fullDuration;	// G=0x32e99969; S=0x32e999c9; converted property
@property(assign) float height;	// G=0x32e9c7c1; S=0x32e9c805; converted property
@property(assign) int liveIndex;	// G=0x32e98b89; S=0x32e98ba9; converted property
@property(assign) double mainDuration;	// G=0x32e9510d; S=0x32e9512d; 
@property(assign) float opacity;	// G=0x32e93e19; S=0x32e93e39; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x32e989a9; S=0x32e9bb81; converted property
@property(assign) double phaseInDuration;	// G=0x32e94a19; S=0x32e94a39; 
@property(assign) double phaseOutDuration;	// G=0x32e94d91; S=0x32e94db1; 
@property(retain) MCPlugParallel *plug;	// G=0x32e98bd9; S=0x32e9abbd; converted property
@property(assign) CGPoint position;	// G=0x32e940ed; S=0x32e9411d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x32e938c5; S=0x32e938f9; 
@property(assign) int randomSeed;	// G=0x32e989b9; S=0x32e989d9; converted property
@property(assign) BOOL replaceSlides;	// G=0x32e970ed; S=0x32e970fd; 
@property(assign) float rotationAngle;	// G=0x32e9441d; S=0x32e9443d; converted property
@property(assign) float scale;	// G=0x32e93f81; S=0x32e93fa1; converted property
@property(retain) id scriptingAnimations;	// G=0x32e9c8b1; S=0x32e9cc15; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x32e96895; converted property
@property(assign) CGSize size;	// G=0x32e94585; S=0x32e945b5; converted property
@property(readonly, assign) NSArray *slides;	// G=0x32e95505; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x32e99ea1; converted property
@property(readonly, assign) NSArray *texts;	// G=0x32e97509; 
@property(assign) float width;	// G=0x32e9c839; S=0x32e9c87d; converted property
@property(assign) float xPosition;	// G=0x32e9c6d1; S=0x32e9c715; converted property
@property(assign) float xRotationAngle;	// G=0x32e94749; S=0x32e94769; converted property
@property(assign) float yPosition;	// G=0x32e9c749; S=0x32e9c78d; converted property
@property(assign) float yRotationAngle;	// G=0x32e948b1; S=0x32e948d1; converted property
@property(assign) float zPosition;	// G=0x32e942b5; S=0x32e942d5; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32e91331
+ (id)effectWithEffectID:(id)effectID;	// 0x32e91381
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x32e913bd
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x32e913fd
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x32e9143d
- (id)init;	// 0x32e9171d
- (id)initWithCoder:(id)coder;	// 0x32e927c1
- (id)initWithEffectID:(id)effectID;	// 0x32e91485
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x32e91499
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x32e91565
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x32e91635
- (void)_updateEffectTiming;	// 0x32e9710d
- (void)_updateTiming:(BOOL)timing;	// 0x32e97319
- (void)addFilter:(id)filter;	// 0x32e97cf9
- (void)addFilters:(id)filters;	// 0x32e97d59
- (void)addSecondarySlide:(id)slide;	// 0x32e968a5
- (void)addSecondarySlides:(id)slides;	// 0x32e96905
- (void)addSlide:(id)slide;	// 0x32e95515
- (void)addSlides:(id)slides;	// 0x32e95575
- (void)addText:(id)text;	// 0x32e97519
- (void)addTexts:(id)texts;	// 0x32e97579
- (id)animationPathForKey:(id)key;	// 0x32e98435
// converted property getter: - (id)animationPaths;	// 0x32e98425
// converted property getter: - (id)audioPlaylist;	// 0x32e9874d
// converted property getter: - (int)audioPriority;	// 0x32e988e5
- (void)cleanup;	// 0x32e9aa99
// converted property getter: - (id)container;	// 0x32e98bc9
- (void)copyAnimationPaths:(id)paths;	// 0x32e9a979
- (void)copyAudioPlaylist:(id)playlist;	// 0x32e9aa55
- (void)copyFilters:(id)filters;	// 0x32e9a881
- (void)copySecondarySlides:(id)slides;	// 0x32e9a691
- (void)copySlides:(id)slides;	// 0x32e9a599
- (void)copyStruct:(id)aStruct;	// 0x32e9a281
- (void)copyTexts:(id)texts;	// 0x32e9a789
- (id)copyWithZone:(NSZone *)zone;	// 0x32e93481
- (int)countOfFilters;	// 0x32e9c5a1
- (int)countOfSlides;	// 0x32e9c341
- (int)countOfTexts;	// 0x32e9c471
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x32e99569
- (void)createSlidesWithPaths:(id)paths;	// 0x32e993ed
- (void)createTextsWithDefaultStrings;	// 0x32e98be9
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x32e98fcd
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x32e98ff1
- (void)dealloc;	// 0x32e935e5
- (id)description;	// 0x32e91a41
- (void)dump;	// 0x32e99a35
- (id)effectAttributeForKey:(id)key;	// 0x32e93bf1
// converted property getter: - (id)effectAttributes;	// 0x32e93a59
// declared property getter: - (id)effectID;	// 0x32e93771
- (id)effectPresetID;	// 0x32e99e41
// declared property getter: - (id)effectTiming;	// 0x32e98ad9
- (void)encodeWithCoder:(id)coder;	// 0x32e91ebd
// converted property getter: - (id)filters;	// 0x32e97ce9
- (void)finalize;	// 0x32e935a5
- (id)fullDebugLog;	// 0x32e99a5d
// converted property getter: - (double)fullDuration;	// 0x32e99969
- (BOOL)hasMovies;	// 0x32e9c265
// converted property getter: - (float)height;	// 0x32e9c7c1
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x32e97d9d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x32e9c5e1
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x32e9c381
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x32e9c4b1
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x32e96949
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x32e955b9
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x32e975bd
- (BOOL)isTextOnly;	// 0x32e97ca1
// converted property getter: - (int)liveIndex;	// 0x32e98b89
- (double)lowestDisplayTime;	// 0x32e974cd
// declared property getter: - (double)mainDuration;	// 0x32e9510d
- (int)maxNumberOfSecondarySlides;	// 0x32e98b39
- (int)maxNumberOfSlides;	// 0x32e98ae9
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x32e98349
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x32e967c1
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x32e97bcd
- (id)nearestLayerGroup;	// 0x32e9c319
- (id)nearestPlug;	// 0x32e9a241
- (BOOL)needsParallelizer;	// 0x32e9bc31
- (id)objectID;	// 0x32e9a1c1
- (id)objectInFiltersAtIndex:(int)index;	// 0x32e9c5c1
- (id)objectInSlidesAtIndex:(int)index;	// 0x32e9c361
- (id)objectInTextsAtIndex:(int)index;	// 0x32e9c491
// converted property getter: - (float)opacity;	// 0x32e93e19
// converted property getter: - (id)parentContainer;	// 0x32e989a9
- (id)parentDocument;	// 0x32e9a209
// declared property getter: - (double)phaseInDuration;	// 0x32e94a19
// declared property getter: - (double)phaseOutDuration;	// 0x32e94d91
// converted property getter: - (id)plug;	// 0x32e98bd9
- (id)plugID;	// 0x32e9a199
// converted property getter: - (CGPoint)position;	// 0x32e940ed
// declared property getter: - (id)presetID;	// 0x32e938c5
// converted property getter: - (int)randomSeed;	// 0x32e989b9
- (void)reconfigureSlides;	// 0x32e996e9
- (void)removeAllFilters;	// 0x32e982e9
- (void)removeAllSecondarySlides;	// 0x32e97031
- (void)removeAllSlides;	// 0x32e965c9
- (void)removeAllTexts;	// 0x32e97b6d
- (void)removeAnimationPathForKey:(id)key;	// 0x32e98645
- (void)removeFiltersAtIndices:(id)indices;	// 0x32e980bd
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x32e9c621
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x32e9c3c1
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x32e9c4f1
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x32e96e05
- (void)removeSlidesAtIndices:(id)indices;	// 0x32e96085
- (void)removeTextsAtIndices:(id)indices;	// 0x32e97989
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x32e9c65d
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x32e9c3fd
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x32e9c52d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x32e967a9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x32e9662d
// declared property getter: - (BOOL)replaceSlides;	// 0x32e970ed
- (void)replaceTextsWitStrings:(id)strings;	// 0x32e98d4d
// converted property getter: - (float)rotationAngle;	// 0x32e9441d
// converted property getter: - (float)scale;	// 0x32e93f81
- (void)scaleMainDuration;	// 0x32e9be4d
// converted property getter: - (id)scriptingAnimations;	// 0x32e9c8b1
// converted property getter: - (id)secondarySlides;	// 0x32e96895
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x32e98461
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x32e9875d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x32e98905
// converted property setter: - (void)setContainer:(id)container;	// 0x32e9b179
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x32e93c8d
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x32e93af1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x32e93791
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x32e999c9
// converted property setter: - (void)setHeight:(float)height;	// 0x32e9c805
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x32e98ba9
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x32e9512d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x32e93e39
// converted property setter: - (void)setParentContainer:(id)container;	// 0x32e9bb81
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32e94a39
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32e94db1
// converted property setter: - (void)setPlug:(id)plug;	// 0x32e9abbd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32e9411d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32e938f9
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x32e989d9
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x32e970fd
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x32e9443d
// converted property setter: - (void)setScale:(float)scale;	// 0x32e93fa1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x32e9cc15
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32e945b5
// converted property setter: - (void)setWidth:(float)width;	// 0x32e9c87d
// converted property setter: - (void)setXPosition:(float)position;	// 0x32e9c715
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x32e94769
// converted property setter: - (void)setYPosition:(float)position;	// 0x32e9c78d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x32e948d1
// converted property setter: - (void)setZPosition:(float)position;	// 0x32e942d5
// converted property getter: - (CGSize)size;	// 0x32e94585
- (id)slideInformation;	// 0x32e99eb1
// declared property getter: - (id)slides;	// 0x32e95505
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x32e99ea1
- (BOOL)supportsUnlimitedSlides;	// 0x32e97095
// declared property getter: - (id)texts;	// 0x32e97509
- (void)updateEffectAttributes;	// 0x32e9a0c5
- (id)uuid;	// 0x32e9a1e9
- (id)videoPaths;	// 0x32e99d61
// converted property getter: - (float)width;	// 0x32e9c839
// converted property getter: - (float)xPosition;	// 0x32e9c6d1
// converted property getter: - (float)xRotationAngle;	// 0x32e94749
// converted property getter: - (float)yPosition;	// 0x32e9c749
// converted property getter: - (float)yRotationAngle;	// 0x32e948b1
- (int)zIndex;	// 0x32e95491
// converted property getter: - (float)zPosition;	// 0x32e942b5
@end
