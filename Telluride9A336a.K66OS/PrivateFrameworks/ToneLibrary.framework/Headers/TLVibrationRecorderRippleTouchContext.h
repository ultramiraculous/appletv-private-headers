/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library
#import "ToneLibrary-Structs.h"


@interface TLVibrationRecorderRippleTouchContext : NSObject {
	double _creationTimestamp;	// 4 = 0x4
	CGPoint _location;	// 12 = 0xc
	float _speed;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x34f35bf1; @synthesize=_location
@property(readonly, assign, nonatomic) float speed;	// G=0x34f35c0d; @synthesize=_speed
- (id)init;	// 0x34f35a79
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location;	// 0x34f35abd
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location speed:(float)speed;	// 0x34f35ae9
// declared property getter: - (CGPoint)location;	// 0x34f35bf1
- (void)reset;	// 0x34f35b5d
// declared property getter: - (float)speed;	// 0x34f35c0d
- (double)timeIntervalSinceCreation;	// 0x34f35bad
@end

