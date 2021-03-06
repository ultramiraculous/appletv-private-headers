/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import "CAMediaTiming.h"
#import <NSObject.h> // Unknown library
#import "CAPropertyInfo.h"

@class NSString, NSDictionary, NSArray;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
	void *_attr[2];	// 4 = 0x4
	void *_state;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(assign) float alphaRange;	// G=0x320fcf39; S=0x320fcf51; 
@property(assign) float alphaSpeed;	// G=0x320fcf69; S=0x320fcf81; 
@property(assign) BOOL autoreverses;	// G=0x320fc9f9; S=0x320fca11; 
@property(assign) double beginTime;	// G=0x320fc879; S=0x320fc89d; 
@property(assign) float birthRate;	// G=0x320fcae9; S=0x320fcb01; 
@property(assign) float blueRange;	// G=0x320fced9; S=0x320fcef1; 
@property(assign) float blueSpeed;	// G=0x320fcf09; S=0x320fcf21; 
@property(assign) CGColorRef color;	// G=0x320fcde9; S=0x320fce01; 
@property(retain) id contents;	// G=0x320fcf99; S=0x320fcfb1; 
@property(assign) CGRect contentsRect;	// G=0x320fcfc9; S=0x320fcfdd; 
@property(assign) double duration;	// G=0x320fc909; S=0x320fc92d; 
@property(assign) float emissionLatitude;	// G=0x320fcb79; S=0x320fcb91; 
@property(assign) float emissionLongitude;	// G=0x320fcba9; S=0x320fcbc1; 
@property(assign) float emissionRange;	// G=0x320fcbd9; S=0x320fcbf1; 
@property(copy) NSArray *emitterCells;	// G=0x320fd091; S=0x320fd0a9; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x320fca89; S=0x320fcaa1; 
@property(copy) NSString *fillMode;	// G=0x320fca29; S=0x320fca41; 
@property(assign) float greenRange;	// G=0x320fce79; S=0x320fce91; 
@property(assign) float greenSpeed;	// G=0x320fcea9; S=0x320fcec1; 
@property(assign) float lifetime;	// G=0x320fcb19; S=0x320fcb31; 
@property(assign) float lifetimeRange;	// G=0x320fcb49; S=0x320fcb61; 
@property(copy) NSString *magnificationFilter;	// G=0x320fd001; S=0x320fd019; 
@property(copy) NSString *minificationFilter;	// G=0x320fd031; S=0x320fd049; 
@property(assign) float minificationFilterBias;	// G=0x320fd061; S=0x320fd079; 
@property(copy) NSString *name;	// G=0x320fca59; S=0x320fca71; 
@property(assign) float redRange;	// G=0x320fce19; S=0x320fce31; 
@property(assign) float redSpeed;	// G=0x320fce49; S=0x320fce61; 
@property(assign) float repeatCount;	// G=0x320fc981; S=0x320fc999; 
@property(assign) double repeatDuration;	// G=0x320fc9b1; S=0x320fc9d5; 
@property(assign) float scale;	// G=0x320fccf9; S=0x320fcd11; 
@property(assign) float scaleRange;	// G=0x320fcd29; S=0x320fcd41; 
@property(assign) float scaleSpeed;	// G=0x320fcd59; S=0x320fcd71; 
@property(assign) float speed;	// G=0x320fc951; S=0x320fc969; 
@property(assign) float spin;	// G=0x320fcd89; S=0x320fcda1; 
@property(assign) float spinRange;	// G=0x320fcdb9; S=0x320fcdd1; 
@property(copy) NSDictionary *style;	// G=0x320fcab9; S=0x320fcad1; 
@property(assign) double timeOffset;	// G=0x320fc8c1; S=0x320fc8e5; 
@property(assign) float velocity;	// G=0x320fcc09; S=0x320fcc21; 
@property(assign) float velocityRange;	// G=0x320fcc39; S=0x320fcc51; 
@property(assign) float xAcceleration;	// G=0x320fcc69; S=0x320fcc81; 
@property(assign) float yAcceleration;	// G=0x320fcc99; S=0x320fccb1; 
@property(assign) float zAcceleration;	// G=0x320fccc9; S=0x320fcce1; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x320fc7a5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x320fc785
+ (id)defaultValueForKey:(id)key;	// 0x320fbd69
+ (id)emitterCell;	// 0x320fbd31
+ (id)properties;	// 0x320fd0c1
- (id)initWithCoder:(id)coder;	// 0x320fc59d
- (Object *)CA_copyRenderValue;	// 0x320fbfd9
- (void)CA_prepareRenderValue;	// 0x320fbf89
// declared property getter: - (float)alphaRange;	// 0x320fcf39
// declared property getter: - (float)alphaSpeed;	// 0x320fcf69
// declared property getter: - (BOOL)autoreverses;	// 0x320fc9f9
// declared property getter: - (double)beginTime;	// 0x320fc879
// declared property getter: - (float)birthRate;	// 0x320fcae9
// declared property getter: - (float)blueRange;	// 0x320fced9
// declared property getter: - (float)blueSpeed;	// 0x320fcf09
// declared property getter: - (CGColorRef)color;	// 0x320fcde9
// declared property getter: - (id)contents;	// 0x320fcf99
// declared property getter: - (CGRect)contentsRect;	// 0x320fcfc9
- (void)dealloc;	// 0x320fbf19
- (id)debugDescription;	// 0x320fc7d5
// declared property getter: - (double)duration;	// 0x320fc909
// declared property getter: - (float)emissionLatitude;	// 0x320fcb79
// declared property getter: - (float)emissionLongitude;	// 0x320fcba9
// declared property getter: - (float)emissionRange;	// 0x320fcbd9
// declared property getter: - (id)emitterCells;	// 0x320fd091
- (void)encodeWithCoder:(id)coder;	// 0x320fc5a5
// declared property getter: - (id)fillMode;	// 0x320fca29
// declared property getter: - (float)greenRange;	// 0x320fce79
// declared property getter: - (float)greenSpeed;	// 0x320fcea9
// declared property getter: - (BOOL)isEnabled;	// 0x320fca89
// declared property getter: - (float)lifetime;	// 0x320fcb19
// declared property getter: - (float)lifetimeRange;	// 0x320fcb49
// declared property getter: - (id)magnificationFilter;	// 0x320fd001
// declared property getter: - (id)minificationFilter;	// 0x320fd031
// declared property getter: - (float)minificationFilterBias;	// 0x320fd061
// declared property getter: - (id)name;	// 0x320fca59
// declared property getter: - (float)redRange;	// 0x320fce19
// declared property getter: - (float)redSpeed;	// 0x320fce49
// declared property getter: - (float)repeatCount;	// 0x320fc981
// declared property getter: - (double)repeatDuration;	// 0x320fc9b1
// declared property getter: - (float)scale;	// 0x320fccf9
// declared property getter: - (float)scaleRange;	// 0x320fcd29
// declared property getter: - (float)scaleSpeed;	// 0x320fcd59
// declared property setter: - (void)setAlphaRange:(float)range;	// 0x320fcf51
// declared property setter: - (void)setAlphaSpeed:(float)speed;	// 0x320fcf81
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x320fca11
// declared property setter: - (void)setBeginTime:(double)time;	// 0x320fc89d
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x320fcb01
// declared property setter: - (void)setBlueRange:(float)range;	// 0x320fcef1
// declared property setter: - (void)setBlueSpeed:(float)speed;	// 0x320fcf21
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x320fce01
// declared property setter: - (void)setContents:(id)contents;	// 0x320fcfb1
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x320fcfdd
// declared property setter: - (void)setDuration:(double)duration;	// 0x320fc92d
// declared property setter: - (void)setEmissionLatitude:(float)latitude;	// 0x320fcb91
// declared property setter: - (void)setEmissionLongitude:(float)longitude;	// 0x320fcbc1
// declared property setter: - (void)setEmissionRange:(float)range;	// 0x320fcbf1
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x320fd0a9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x320fcaa1
// declared property setter: - (void)setFillMode:(id)mode;	// 0x320fca41
// declared property setter: - (void)setGreenRange:(float)range;	// 0x320fce91
// declared property setter: - (void)setGreenSpeed:(float)speed;	// 0x320fcec1
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x320fcb31
// declared property setter: - (void)setLifetimeRange:(float)range;	// 0x320fcb61
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x320fd019
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x320fd049
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x320fd079
// declared property setter: - (void)setName:(id)name;	// 0x320fca71
// declared property setter: - (void)setRedRange:(float)range;	// 0x320fce31
// declared property setter: - (void)setRedSpeed:(float)speed;	// 0x320fce61
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x320fc999
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x320fc9d5
// declared property setter: - (void)setScale:(float)scale;	// 0x320fcd11
// declared property setter: - (void)setScaleRange:(float)range;	// 0x320fcd41
// declared property setter: - (void)setScaleSpeed:(float)speed;	// 0x320fcd71
// declared property setter: - (void)setSpeed:(float)speed;	// 0x320fc969
// declared property setter: - (void)setSpin:(float)spin;	// 0x320fcda1
// declared property setter: - (void)setSpinRange:(float)range;	// 0x320fcdd1
// declared property setter: - (void)setStyle:(id)style;	// 0x320fcad1
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x320fc8e5
- (void)setValue:(id)value forKey:(id)key;	// 0x320fc5e1
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x320fc6e5
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x320fc665
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x320fcc21
// declared property setter: - (void)setVelocityRange:(float)range;	// 0x320fcc51
// declared property setter: - (void)setXAcceleration:(float)acceleration;	// 0x320fcc81
// declared property setter: - (void)setYAcceleration:(float)acceleration;	// 0x320fccb1
// declared property setter: - (void)setZAcceleration:(float)acceleration;	// 0x320fcce1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x320fc559
// declared property getter: - (float)speed;	// 0x320fc951
// declared property getter: - (float)spin;	// 0x320fcd89
// declared property getter: - (float)spinRange;	// 0x320fcdb9
// declared property getter: - (id)style;	// 0x320fcab9
// declared property getter: - (double)timeOffset;	// 0x320fc8c1
- (id)valueForKey:(id)key;	// 0x320fc5ad
- (id)valueForKeyPath:(id)keyPath;	// 0x320fc6dd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x320fc619
// declared property getter: - (float)velocity;	// 0x320fcc09
// declared property getter: - (float)velocityRange;	// 0x320fcc39
// declared property getter: - (float)xAcceleration;	// 0x320fcc69
// declared property getter: - (float)yAcceleration;	// 0x320fcc99
// declared property getter: - (float)zAcceleration;	// 0x320fccc9
@end

