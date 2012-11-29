/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSString, UIImageView, NSTimer;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	UILabel *_currentTimeInverseLabel;	// 176 = 0xb0
	UILabel *_currentTimeLabel;	// 180 = 0xb4
	BOOL _allowsScrubbing;	// 184 = 0xb8
	BOOL _allowsDetailScrubbing;	// 185 = 0xb9
	BOOL _autoscrubActive;	// 186 = 0xba
	NSTimer *_autoscrubTimer;	// 188 = 0xbc
	double _availableDuration;	// 192 = 0xc0
	CGPoint _beginLocationInView;	// 200 = 0xc8
	BOOL _canCommit;	// 208 = 0xd0
	double _currentTime;	// 212 = 0xd4
	id _delegate;	// 220 = 0xdc
	float _detailScrubbingVerticalRange;	// 224 = 0xe0
	BOOL _didBeginTracking;	// 228 = 0xe4
	UIImageView *_downloadingTrackOverlay;	// 232 = 0xe8
	double _duration;	// 236 = 0xec
	BOOL _durationAllowsDetailScrubbing;	// 244 = 0xf4
	UIImageView *_glowDetailScrubImageView;	// 248 = 0xf8
	BOOL _isTracking;	// 252 = 0xfc
	CGPoint _lastCommittedLocationInView;	// 256 = 0x100
	float _minScale;	// 264 = 0x108
	float _minTimeLabelWidth;	// 268 = 0x10c
	float _maxTrackWidth;	// 272 = 0x110
	BOOL _needsCommit;	// 276 = 0x114
	CGPoint _previousLocationInView;	// 280 = 0x118
	int _scrubValue;	// 288 = 0x120
	int _style;	// 292 = 0x124
	UIEdgeInsets _timeLabelInsets;	// 296 = 0x128
	int _timeLabelStyle;	// 312 = 0x138
	UIImageView *_thumbImageView;	// 316 = 0x13c
	float _trackInset;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x35d12d3d; S=0x35d12f55; 
@property(assign, nonatomic) BOOL allowsScrubbing;	// G=0x35d14bc9; S=0x35d12f21; @synthesize=_allowsScrubbing
@property(assign, nonatomic) double availableDuration;	// G=0x35d14b15; S=0x35d12f71; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x35d14b2d; S=0x35d14b3d; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x35d12e21; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x35d14b4d; S=0x35d14b5d; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x35d14b6d; S=0x35d12fe9; @synthesize=_duration
@property(readonly, assign) BOOL isTracking;	// G=0x35d12d09; converted property
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x35d12e51; 
@property(assign, nonatomic) float minTimeLabelWidth;	// G=0x35d14bb9; S=0x35d13111; @synthesize=_minTimeLabelWidth
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x35d14b85; S=0x35d13149; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x35d14ba9; S=0x35d131d9; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x35d12d19
+ (Class)labelClass;	// 0x35d12d21
- (id)initWithFrame:(CGRect)frame;	// 0x35d10fc5
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x35d10f8d
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x35d10eb9
- (void)_adjustMinScale;	// 0x35d13981
- (void)_autoscrubTick:(id)tick;	// 0x35d11fc9
- (void)_commitValue;	// 0x35d140b5
- (void)_resetScrubInfo;	// 0x35d1402d
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x35d13b49
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x35d139f1
- (void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;	// 0x35d11d41
- (void)_setupControlsForStyle;	// 0x35d13395
- (id)_stringForCurrentTime:(double)currentTime;	// 0x35d13e61
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x35d13f05
- (id)_stringForTime:(double)time;	// 0x35d13d39
- (CGRect)_thumbHitFrame;	// 0x35d13fd9
- (void)_updateForAvailableDuraton;	// 0x35d14159
- (void)_updateTimeDisplayForTime:(double)time;	// 0x35d13c2d
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x35d13c51
- (void)_updateTrackInset;	// 0x35d135e5
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x35d12d3d
// declared property getter: - (BOOL)allowsScrubbing;	// 0x35d14bc9
// declared property getter: - (double)availableDuration;	// 0x35d14b15
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35d11ea1
- (void)cancelTracking;	// 0x35d12d4d
- (void)cancelTrackingWithEvent:(id)event;	// 0x35d12cf9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35d12241
- (id)createThumbView;	// 0x35d1171d
- (id)currentThumbImage;	// 0x35d117d1
- (void)dealloc;	// 0x35d10ff9
// declared property getter: - (id)delegate;	// 0x35d14b2d
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x35d12e21
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x35d14b4d
// declared property getter: - (double)duration;	// 0x35d14b6d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35d12bb9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35d110a9
// converted property getter: - (BOOL)isTracking;	// 0x35d12d09
- (void)layoutSubviews;	// 0x35d11129
// declared property getter: - (id)localizedScrubSpeedText;	// 0x35d12e51
// declared property getter: - (float)minTimeLabelWidth;	// 0x35d14bb9
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35d12f55
// declared property setter: - (void)setAllowsScrubbing:(BOOL)scrubbing;	// 0x35d12f21
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x35d12f71
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35d14b3d
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x35d14b5d
// declared property setter: - (void)setDuration:(double)duration;	// 0x35d12fe9
- (void)setFrame:(CGRect)frame;	// 0x35d116b9
// declared property setter: - (void)setMinTimeLabelWidth:(float)width;	// 0x35d13111
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x35d13149
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x35d131d9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x35d11d11
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x35d11afd
- (id)timeLabelFontForStyle:(int)style;	// 0x35d13201
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x35d14b85
- (id)timeLabelShadowColorForStyle:(int)style;	// 0x35d132a9
- (CGSize)timeLabelShadowOffsetForStyle:(int)style;	// 0x35d132f5
// declared property getter: - (int)timeLabelStyle;	// 0x35d14ba9
- (id)timeLabelTextColorForStyle:(int)style;	// 0x35d13325
- (float)timeLabelVerticalOffsetForStyle:(int)style;	// 0x35d13371
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x35d11a35
@end
