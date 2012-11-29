/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "CAMediaTiming.h"
#import "QuartzCore-Structs.h"
#import "CAPropertyInfo.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSArray;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
	void *_attr[2];	// 4 = 0x4
	void *_state;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(assign) float alphaRange;	// G=0x30556789; S=0x305567a1; 
@property(assign) float alphaSpeed;	// G=0x305567b9; S=0x305567d1; 
@property(assign) BOOL autoreverses;	// G=0x30556249; S=0x30556261; 
@property(assign) double beginTime;	// G=0x305560c9; S=0x305560ed; 
@property(assign) float birthRate;	// G=0x30556339; S=0x30556351; 
@property(assign) float blueRange;	// G=0x30556729; S=0x30556741; 
@property(assign) float blueSpeed;	// G=0x30556759; S=0x30556771; 
@property(assign) CGColorRef color;	// G=0x30556639; S=0x30556651; 
@property(retain) id contents;	// G=0x305567e9; S=0x30556801; 
@property(assign) CGRect contentsRect;	// G=0x30556819; S=0x3055682d; 
@property(assign) double duration;	// G=0x30556159; S=0x3055617d; 
@property(assign) float emissionLatitude;	// G=0x305563c9; S=0x305563e1; 
@property(assign) float emissionLongitude;	// G=0x305563f9; S=0x30556411; 
@property(assign) float emissionRange;	// G=0x30556429; S=0x30556441; 
@property(copy) NSArray *emitterCells;	// G=0x305568e1; S=0x305568f9; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x305562d9; S=0x305562f1; 
@property(copy) NSString *fillMode;	// G=0x30556279; S=0x30556291; 
@property(assign) float greenRange;	// G=0x305566c9; S=0x305566e1; 
@property(assign) float greenSpeed;	// G=0x305566f9; S=0x30556711; 
@property(assign) float lifetime;	// G=0x30556369; S=0x30556381; 
@property(assign) float lifetimeRange;	// G=0x30556399; S=0x305563b1; 
@property(copy) NSString *magnificationFilter;	// G=0x30556851; S=0x30556869; 
@property(copy) NSString *minificationFilter;	// G=0x30556881; S=0x30556899; 
@property(assign) float minificationFilterBias;	// G=0x305568b1; S=0x305568c9; 
@property(copy) NSString *name;	// G=0x305562a9; S=0x305562c1; 
@property(assign) float redRange;	// G=0x30556669; S=0x30556681; 
@property(assign) float redSpeed;	// G=0x30556699; S=0x305566b1; 
@property(assign) float repeatCount;	// G=0x305561d1; S=0x305561e9; 
@property(assign) double repeatDuration;	// G=0x30556201; S=0x30556225; 
@property(assign) float scale;	// G=0x30556549; S=0x30556561; 
@property(assign) float scaleRange;	// G=0x30556579; S=0x30556591; 
@property(assign) float scaleSpeed;	// G=0x305565a9; S=0x305565c1; 
@property(assign) float speed;	// G=0x305561a1; S=0x305561b9; 
@property(assign) float spin;	// G=0x305565d9; S=0x305565f1; 
@property(assign) float spinRange;	// G=0x30556609; S=0x30556621; 
@property(copy) NSDictionary *style;	// G=0x30556309; S=0x30556321; 
@property(assign) double timeOffset;	// G=0x30556111; S=0x30556135; 
@property(assign) float velocity;	// G=0x30556459; S=0x30556471; 
@property(assign) float velocityRange;	// G=0x30556489; S=0x305564a1; 
@property(assign) float xAcceleration;	// G=0x305564b9; S=0x305564d1; 
@property(assign) float yAcceleration;	// G=0x305564e9; S=0x30556501; 
@property(assign) float zAcceleration;	// G=0x30556519; S=0x30556531; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x30555ff5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30555fd5
+ (id)defaultValueForKey:(id)key;	// 0x30555579
+ (id)emitterCell;	// 0x30555541
+ (id)properties;	// 0x30556911
- (id)initWithCoder:(id)coder;	// 0x30555ded
- (Object *)CA_copyRenderValue;	// 0x305557e9
- (void)CA_prepareRenderValue;	// 0x30555799
// declared property getter: - (float)alphaRange;	// 0x30556789
// declared property getter: - (float)alphaSpeed;	// 0x305567b9
// declared property getter: - (BOOL)autoreverses;	// 0x30556249
// declared property getter: - (double)beginTime;	// 0x305560c9
// declared property getter: - (float)birthRate;	// 0x30556339
// declared property getter: - (float)blueRange;	// 0x30556729
// declared property getter: - (float)blueSpeed;	// 0x30556759
// declared property getter: - (CGColorRef)color;	// 0x30556639
// declared property getter: - (id)contents;	// 0x305567e9
// declared property getter: - (CGRect)contentsRect;	// 0x30556819
- (void)dealloc;	// 0x30555729
- (id)debugDescription;	// 0x30556025
// declared property getter: - (double)duration;	// 0x30556159
// declared property getter: - (float)emissionLatitude;	// 0x305563c9
// declared property getter: - (float)emissionLongitude;	// 0x305563f9
// declared property getter: - (float)emissionRange;	// 0x30556429
// declared property getter: - (id)emitterCells;	// 0x305568e1
- (void)encodeWithCoder:(id)coder;	// 0x30555df5
// declared property getter: - (id)fillMode;	// 0x30556279
// declared property getter: - (float)greenRange;	// 0x305566c9
// declared property getter: - (float)greenSpeed;	// 0x305566f9
// declared property getter: - (BOOL)isEnabled;	// 0x305562d9
// declared property getter: - (float)lifetime;	// 0x30556369
// declared property getter: - (float)lifetimeRange;	// 0x30556399
// declared property getter: - (id)magnificationFilter;	// 0x30556851
// declared property getter: - (id)minificationFilter;	// 0x30556881
// declared property getter: - (float)minificationFilterBias;	// 0x305568b1
// declared property getter: - (id)name;	// 0x305562a9
// declared property getter: - (float)redRange;	// 0x30556669
// declared property getter: - (float)redSpeed;	// 0x30556699
// declared property getter: - (float)repeatCount;	// 0x305561d1
// declared property getter: - (double)repeatDuration;	// 0x30556201
// declared property getter: - (float)scale;	// 0x30556549
// declared property getter: - (float)scaleRange;	// 0x30556579
// declared property getter: - (float)scaleSpeed;	// 0x305565a9
// declared property setter: - (void)setAlphaRange:(float)range;	// 0x305567a1
// declared property setter: - (void)setAlphaSpeed:(float)speed;	// 0x305567d1
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x30556261
// declared property setter: - (void)setBeginTime:(double)time;	// 0x305560ed
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x30556351
// declared property setter: - (void)setBlueRange:(float)range;	// 0x30556741
// declared property setter: - (void)setBlueSpeed:(float)speed;	// 0x30556771
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x30556651
// declared property setter: - (void)setContents:(id)contents;	// 0x30556801
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x3055682d
// declared property setter: - (void)setDuration:(double)duration;	// 0x3055617d
// declared property setter: - (void)setEmissionLatitude:(float)latitude;	// 0x305563e1
// declared property setter: - (void)setEmissionLongitude:(float)longitude;	// 0x30556411
// declared property setter: - (void)setEmissionRange:(float)range;	// 0x30556441
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x305568f9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x305562f1
// declared property setter: - (void)setFillMode:(id)mode;	// 0x30556291
// declared property setter: - (void)setGreenRange:(float)range;	// 0x305566e1
// declared property setter: - (void)setGreenSpeed:(float)speed;	// 0x30556711
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x30556381
// declared property setter: - (void)setLifetimeRange:(float)range;	// 0x305563b1
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x30556869
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x30556899
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x305568c9
// declared property setter: - (void)setName:(id)name;	// 0x305562c1
// declared property setter: - (void)setRedRange:(float)range;	// 0x30556681
// declared property setter: - (void)setRedSpeed:(float)speed;	// 0x305566b1
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x305561e9
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x30556225
// declared property setter: - (void)setScale:(float)scale;	// 0x30556561
// declared property setter: - (void)setScaleRange:(float)range;	// 0x30556591
// declared property setter: - (void)setScaleSpeed:(float)speed;	// 0x305565c1
// declared property setter: - (void)setSpeed:(float)speed;	// 0x305561b9
// declared property setter: - (void)setSpin:(float)spin;	// 0x305565f1
// declared property setter: - (void)setSpinRange:(float)range;	// 0x30556621
// declared property setter: - (void)setStyle:(id)style;	// 0x30556321
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x30556135
- (void)setValue:(id)value forKey:(id)key;	// 0x30555e31
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x30555f35
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x30555eb5
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x30556471
// declared property setter: - (void)setVelocityRange:(float)range;	// 0x305564a1
// declared property setter: - (void)setXAcceleration:(float)acceleration;	// 0x305564d1
// declared property setter: - (void)setYAcceleration:(float)acceleration;	// 0x30556501
// declared property setter: - (void)setZAcceleration:(float)acceleration;	// 0x30556531
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x30555da9
// declared property getter: - (float)speed;	// 0x305561a1
// declared property getter: - (float)spin;	// 0x305565d9
// declared property getter: - (float)spinRange;	// 0x30556609
// declared property getter: - (id)style;	// 0x30556309
// declared property getter: - (double)timeOffset;	// 0x30556111
- (id)valueForKey:(id)key;	// 0x30555dfd
- (id)valueForKeyPath:(id)keyPath;	// 0x30555f2d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30555e69
// declared property getter: - (float)velocity;	// 0x30556459
// declared property getter: - (float)velocityRange;	// 0x30556489
// declared property getter: - (float)xAcceleration;	// 0x305564b9
// declared property getter: - (float)yAcceleration;	// 0x305564e9
// declared property getter: - (float)zAcceleration;	// 0x30556519
@end
