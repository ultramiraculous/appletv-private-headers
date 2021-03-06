/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIOldSliderControl.h"

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {
@private
	XXUnion_a01swB _sliderAvailableFill;	// 172 = 0xac
@protected
	double _duration;	// 176 = 0xb0
	float _lastDisplayedWidth;	// 184 = 0xb8
	float _maxTrackWidth;	// 188 = 0xbc
	UIView *_elapsedTimeView;	// 192 = 0xc0
	UIView *_remainingTimeView;	// 196 = 0xc4
	id _delegate;	// 200 = 0xc8
	double _trackingStartTime;	// 204 = 0xcc
	CGPoint _lastUpdatedPoint;	// 212 = 0xd4
	float _valueAvailable;	// 220 = 0xdc
	unsigned _didDrag : 1;	// 224 = 0xe0
	unsigned _sentScrubbingStart : 1;	// 224 = 0xe0
	unsigned _autoSizesToFitDuration : 1;	// 224 = 0xe0
	unsigned _layoutTimeParts : 2;	// 224 = 0xe0
	unsigned _remainingIsDuration : 1;	// 224 = 0xe0
	unsigned _delegateDidEnterScrubbingState : 1;	// 224 = 0xe0
	unsigned _delegateDidChangeScrubValue : 1;	// 224 = 0xe0
	unsigned _delegateShouldBeginScrubbing : 1;	// 225 = 0xe1
	unsigned _endingTracking : 1;	// 225 = 0xe1
	unsigned _showKnob : 1;	// 225 = 0xe1
	unsigned _largeKnob : 1;	// 225 = 0xe1
	unsigned _rightCapIsDownloadCap : 1;	// 225 = 0xe1
	unsigned _requireMomentaryDelay : 1;	// 225 = 0xe1
	unsigned _showFullWidthComponents : 1;	// 225 = 0xe1
	unsigned _alwaysShowAllComponentsForDuration : 1;	// 225 = 0xe1
	unsigned _timeLayoutDisabledCount : 7;	// 226 = 0xe2
	unsigned _timeLayoutSkippedLayout : 1;	// 226 = 0xe2
	unsigned _timeLayoutSkippedForcedLayout : 1;	// 227 = 0xe3
	unsigned _showTimeCentered : 1;	// 227 = 0xe3
	unsigned _leftCapIsDownloadCap : 1;	// 227 = 0xe3
	unsigned _allowsAnyValue : 1;	// 227 = 0xe3
	unsigned _unused : 3;	// 227 = 0xe3
}
@property(assign) double duration;	// G=0x3551e879; S=0x3551e7d5; converted property
+ (BOOL)allowLayeredFillForKnob;	// 0x3551dd39
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times knobStyle:(int)style;	// 0x3551dd3d
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times showKnob:(BOOL)knob;	// 0x3551e01d
- (BOOL)_notAllValueAvailable;	// 0x3551ed15
- (CGRect)_rectOfTrack;	// 0x3551eb61
- (void)_resetTimeFrames;	// 0x3551e361
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)_sendDelegate;	// 0x3551fcfd
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x3551f559
- (void)_updateAvailableFill;	// 0x3551f09d
- (void)_updateTimes:(BOOL)times;	// 0x3551f651
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x3551fd75
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355201a9
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x3551ff99
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355203f5
- (id)createSliderKnobView;	// 0x3551e06d
- (void)dealloc;	// 0x3551e561
- (void)disableTimesLayout;	// 0x3551fb55
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x3551ed9d
// converted property getter: - (double)duration;	// 0x3551e879
- (void)enableTimesLayout;	// 0x3551fbb1
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x35520119
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35520599
- (CGRect)fillBounds;	// 0x3551ecc1
- (CGRect)hitRect;	// 0x3551eaf9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3551e90d
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x3551e281
- (const XXStruct_NwkmQC *)metrics;	// 0x3551e351
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3551e9f1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3551eabd
- (BOOL)pointInsideKnob:(CGPoint)knob forEvent:(GSEventRef)event;	// 0x3551e961
- (BOOL)pointInsideKnob:(CGPoint)knob withEvent:(id)event;	// 0x3551ea2d
- (double)requiredAutoUpdateDurationForDuration:(double)duration;	// 0x3551e891
- (float)scrubValue;	// 0x3551e6a9
- (void)setAllowsAnyValue:(BOOL)value;	// 0x3551ed7d
- (void)setDelegate:(id)delegate;	// 0x3551e601
// converted property setter: - (void)setDuration:(double)duration;	// 0x3551e7d5
- (void)setPinTimeToOutsideEdges:(BOOL)outsideEdges;	// 0x3551e0cd
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)delay;	// 0x3551fcd1
- (void)setShowDuration:(BOOL)duration;	// 0x3551fc95
- (void)setShowFullWidthComponents:(BOOL)components;	// 0x3551fc21
- (void)setShowTimeCenteredInAvailableArea:(BOOL)availableArea;	// 0x3551e165
- (void)setTimeColor:(id)color;	// 0x35520711
- (void)setTimeShadowColor:(id)color;	// 0x35520765
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x3551f599
- (void)setValueAvailable:(float)available;	// 0x35520615
- (void)sizeToFit;	// 0x3551e6fd
- (CGRect)sliderBounds;	// 0x3551e201
@end

