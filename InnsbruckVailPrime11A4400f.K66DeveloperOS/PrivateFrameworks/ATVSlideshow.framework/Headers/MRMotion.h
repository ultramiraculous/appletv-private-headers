/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSString;

@interface MRMotion : NSObject {
	NSString *_key;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _value;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _duration;	// 24 = 0x18
	float _easeIn;	// 32 = 0x20
	float _easeOut;	// 36 = 0x24
}
@property(readonly, assign) double duration;	// G=0x2fd70c9d; @synthesize=_duration
@property(readonly, assign) float easeIn;	// G=0x2fd70cd1; @synthesize=_easeIn
@property(readonly, assign) float easeOut;	// G=0x2fd70ce5; @synthesize=_easeOut
@property(readonly, assign) NSString *key;	// G=0x2fd70c29; @synthesize=_key
@property(assign, nonatomic) double startTime;	// G=0x2fd70c71; S=0x2fd70c89; @synthesize=_startTime
@property(assign, nonatomic) float startValue;	// G=0x2fd70c3d; S=0x2fd70c4d; @synthesize=_startValue
@property(readonly, assign) float value;	// G=0x2fd70c5d; @synthesize=_value
- (id)initWithKey:(id)key value:(float)value duration:(double)duration easeIn:(float)anIn easeOut:(float)anOut;	// 0x2fd709b5
- (void)dealloc;	// 0x2fd70aad
// declared property getter: - (double)duration;	// 0x2fd70c9d
// declared property getter: - (float)easeIn;	// 0x2fd70cd1
// declared property getter: - (float)easeOut;	// 0x2fd70ce5
// declared property getter: - (id)key;	// 0x2fd70c29
// declared property setter: - (void)setStartTime:(double)time;	// 0x2fd70c89
// declared property setter: - (void)setStartValue:(float)value;	// 0x2fd70c4d
// declared property getter: - (double)startTime;	// 0x2fd70c71
// declared property getter: - (float)startValue;	// 0x2fd70c3d
// declared property getter: - (float)value;	// 0x2fd70c5d
- (float)valueAtTime:(double)time;	// 0x2fd70b01
@end

