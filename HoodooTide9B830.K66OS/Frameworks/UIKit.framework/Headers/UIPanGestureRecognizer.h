/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _firstScreenLocation;	// 56 = 0x38
	CGPoint _lastScreenLocation;	// 64 = 0x40
	double _lastTouchTime;	// 72 = 0x48
	id _velocitySample;	// 80 = 0x50
	id _previousVelocitySample;	// 84 = 0x54
	NSMutableArray *_touches;	// 88 = 0x58
	unsigned _lastTouchCount;	// 92 = 0x5c
	unsigned _minimumNumberOfTouches;	// 96 = 0x60
	unsigned _maximumNumberOfTouches;	// 100 = 0x64
	float _hysteresis;	// 104 = 0x68
	CGPoint _lastUnadjustedScreenLocation;	// 108 = 0x6c
	unsigned _failsPastMaxTouches : 1;	// 116 = 0x74
	unsigned _canPanHorizontally : 1;	// 116 = 0x74
	unsigned _canPanVertically : 1;	// 116 = 0x74
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x30121b71; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x30121b05; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x302e3ca1; S=0x30060bb1; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x302e3edd; S=0x30060e51; @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x302e3ecd; S=0x300a48f1; @synthesize=_minimumNumberOfTouches
- (id)initWithCoder:(id)coder;	// 0x302e3b41
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30060a61
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x3013c581
- (BOOL)_canPanHorizontally;	// 0x3016eb05
- (BOOL)_canPanVertically;	// 0x3013d429
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3013c321
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x3013d205
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x3013d64d
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x3013f0c1
- (float)_hysteresis;	// 0x3013d385
- (int)_lastTouchCount;	// 0x302e3cb5
- (UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;	// 0x3016ea35
// declared property getter: - (id)_previousVelocitySample;	// 0x30121b71
- (void)_removeHysteresisFromTranslation;	// 0x3013d43d
- (void)_resetGestureRecognizer;	// 0x30121999
- (void)_resetVelocitySamples;	// 0x30121a09
- (void)_setCanPanHorizontally:(BOOL)horizontally;	// 0x302e3cc5
- (void)_setCanPanVertically:(BOOL)vertically;	// 0x302e3cdd
- (void)_setHysteresis:(float)hysteresis;	// 0x30060cb9
- (CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;	// 0x30170dd5
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3013cfdd
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x30196c45
// declared property getter: - (id)_velocitySample;	// 0x30121b05
- (BOOL)_willScrollX;	// 0x3013d055
- (BOOL)_willScrollY;	// 0x3013d395
- (void)dealloc;	// 0x30043849
- (void)encodeWithCoder:(id)coder;	// 0x302e3c11
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x302e3ca1
- (CGPoint)locationInView:(id)view;	// 0x302e3cf5
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x302e3da1
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x302e3edd
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x302e3ecd
- (unsigned)numberOfTouches;	// 0x3015c771
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x30060bb1
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x30060e51
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x300a48f1
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x3013d56d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301193f9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3015c63d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3011b081
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3013be1d
- (CGPoint)translationInView:(id)view;	// 0x3013d141
- (CGPoint)velocityInView:(id)view;	// 0x3013efa1
@end

