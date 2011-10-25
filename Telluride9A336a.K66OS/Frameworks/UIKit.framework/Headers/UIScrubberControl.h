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
@property(assign) double duration;	// G=0x352ca839; S=0x352ca795; converted property
+ (BOOL)allowLayeredFillForKnob;	// 0x352c9cf9
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times knobStyle:(int)style;	// 0x352c9cfd
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times showKnob:(BOOL)knob;	// 0x352c9fdd
- (BOOL)_notAllValueAvailable;	// 0x352cacd5
- (CGRect)_rectOfTrack;	// 0x352cab21
- (void)_resetTimeFrames;	// 0x352ca321
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)_sendDelegate;	// 0x352cbcbd
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x352cb519
- (void)_updateAvailableFill;	// 0x352cb05d
- (void)_updateTimes:(BOOL)times;	// 0x352cb611
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x352cbd35
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x352cc169
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x352cbf59
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x352cc3b5
- (id)createSliderKnobView;	// 0x352ca02d
- (void)dealloc;	// 0x352ca521
- (void)disableTimesLayout;	// 0x352cbb15
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x352cad5d
// converted property getter: - (double)duration;	// 0x352ca839
- (void)enableTimesLayout;	// 0x352cbb71
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x352cc0d9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x352cc559
- (CGRect)fillBounds;	// 0x352cac81
- (CGRect)hitRect;	// 0x352caab9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x352ca8cd
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x352ca241
- (const XXStruct_NwkmQC *)metrics;	// 0x352ca311
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x352ca9b1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x352caa7d
- (BOOL)pointInsideKnob:(CGPoint)knob forEvent:(GSEventRef)event;	// 0x352ca921
- (BOOL)pointInsideKnob:(CGPoint)knob withEvent:(id)event;	// 0x352ca9ed
- (double)requiredAutoUpdateDurationForDuration:(double)duration;	// 0x352ca851
- (float)scrubValue;	// 0x352ca669
- (void)setAllowsAnyValue:(BOOL)value;	// 0x352cad3d
- (void)setDelegate:(id)delegate;	// 0x352ca5c1
// converted property setter: - (void)setDuration:(double)duration;	// 0x352ca795
- (void)setPinTimeToOutsideEdges:(BOOL)outsideEdges;	// 0x352ca08d
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)delay;	// 0x352cbc91
- (void)setShowDuration:(BOOL)duration;	// 0x352cbc55
- (void)setShowFullWidthComponents:(BOOL)components;	// 0x352cbbe1
- (void)setShowTimeCenteredInAvailableArea:(BOOL)availableArea;	// 0x352ca125
- (void)setTimeColor:(id)color;	// 0x352cc6d1
- (void)setTimeShadowColor:(id)color;	// 0x352cc725
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x352cb559
- (void)setValueAvailable:(float)available;	// 0x352cc5d5
- (void)sizeToFit;	// 0x352ca6bd
- (CGRect)sliderBounds;	// 0x352ca1c1
@end

