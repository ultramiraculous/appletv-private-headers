/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSDate;

@interface MSBackoffManager : NSObject {
@private
	double _initialInterval;	// 4 = 0x4
	double _backoffFactor;	// 12 = 0xc
	double _randomizeFactor;	// 20 = 0x14
	double _maxBackoffInterval;	// 28 = 0x1c
	double _currentInterval;	// 36 = 0x24
	NSDate *_nextExpiryDate;	// 44 = 0x2c
	NSDate *_retryAfterDate;	// 48 = 0x30
}
@property(assign, nonatomic) double backoffFactor;	// G=0x338a39d5; S=0x338a39ed; @synthesize=_backoffFactor
@property(assign, nonatomic) double currentInterval;	// G=0x338a3a59; S=0x338a35a5; @synthesize=_currentInterval
@property(assign, nonatomic) double initialInterval;	// G=0x338a39a9; S=0x338a39c1; @synthesize=_initialInterval
@property(assign, nonatomic) double maxBackoffInterval;	// G=0x338a3a2d; S=0x338a3a45; @synthesize=_maxBackoffInterval
@property(retain, nonatomic) NSDate *nextExpiryDate;	// G=0x338a3685; S=0x338a3a71; @synthesize=_nextExpiryDate
@property(assign, nonatomic) double randomizeFactor;	// G=0x338a3a01; S=0x338a3a19; @synthesize=_randomizeFactor
@property(retain, nonatomic) NSDate *retryAfterDate;	// G=0x338a3a95; S=0x338a3aa5; @synthesize=_retryAfterDate
- (id)initWithInitialInterval:(double)initialInterval backoffFactor:(double)factor randomizeFactor:(double)factor3 maxBackoffInterval:(double)interval retryAfterDate:(id)date;	// 0x338a3481
- (void)backoff;	// 0x338a3849
// declared property getter: - (double)backoffFactor;	// 0x338a39d5
// declared property getter: - (double)currentInterval;	// 0x338a3a59
- (void)dealloc;	// 0x338a3545
- (void)didReceiveRetryAfterDate:(id)date;	// 0x338a3709
// declared property getter: - (double)initialInterval;	// 0x338a39a9
// declared property getter: - (double)maxBackoffInterval;	// 0x338a3a2d
// declared property getter: - (id)nextExpiryDate;	// 0x338a3685
// declared property getter: - (double)randomizeFactor;	// 0x338a3a01
- (void)reset;	// 0x338a37cd
// declared property getter: - (id)retryAfterDate;	// 0x338a3a95
// declared property setter: - (void)setBackoffFactor:(double)factor;	// 0x338a39ed
// declared property setter: - (void)setCurrentInterval:(double)interval;	// 0x338a35a5
// declared property setter: - (void)setInitialInterval:(double)interval;	// 0x338a39c1
// declared property setter: - (void)setMaxBackoffInterval:(double)interval;	// 0x338a3a45
// declared property setter: - (void)setNextExpiryDate:(id)date;	// 0x338a3a71
// declared property setter: - (void)setRandomizeFactor:(double)factor;	// 0x338a3a19
// declared property setter: - (void)setRetryAfterDate:(id)date;	// 0x338a3aa5
@end

