/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMovieScrubberTrackViewDelegate.h"
#import "UIMovieScrubberTrackViewDataSource.h"
#import "UIControl.h"

@class UIMovieScrubberTrackView, UIMovieScrubberEditingView, UIImage, UILabel, UIImageView;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
	UIImageView *_thumbView;	// 68 = 0x44
	UIMovieScrubberTrackView *_trackView;	// 72 = 0x48
	UIMovieScrubberEditingView *_editingView;	// 76 = 0x4c
	UILabel *_elapsedLabel;	// 80 = 0x50
	UILabel *_remainingLabel;	// 84 = 0x54
	int _timeComponents;	// 88 = 0x58
	UIImage *_fillImage;	// 92 = 0x5c
	UIImage *_innerShadowImage;	// 96 = 0x60
	UIImage *_maskImage;	// 100 = 0x64
	UIImage *_shadowImage;	// 104 = 0x68
	id<UIMovieScrubberDataSource> _dataSource;	// 108 = 0x6c
	id<UIMovieScrubberDelegate> _delegate;	// 112 = 0x70
	CGRect _trackRect;	// 116 = 0x74
	float _hitOffset;	// 132 = 0x84
	float _zoomDelay;	// 136 = 0x88
	BOOL _showTimeViews;	// 140 = 0x8c
	BOOL _editable;	// 141 = 0x8d
	double _value;	// 144 = 0x90
	double _maximumValue;	// 152 = 0x98
	double _minimumValue;	// 160 = 0xa0
	CGPoint _touchLocationWhenTrackPressBegan;	// 168 = 0xa8
	double _trimStartValue;	// 176 = 0xb0
	double _trimEndValue;	// 184 = 0xb8
	double _minTrimmedLength;	// 192 = 0xc0
	double _maxTrimmedLength;	// 200 = 0xc8
	double _zoomAnimationDuration;	// 208 = 0xd0
	double _zoomAnimationDelay;	// 216 = 0xd8
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
	} _sliderFlags;	// 224 = 0xe0
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x3029f499; S=0x3029f47d; 
@property(assign, nonatomic) id<UIMovieScrubberDataSource> dataSource;	// G=0x3029f435; S=0x302a08f1; 
@property(assign, nonatomic) id<UIMovieScrubberDelegate> delegate;	// G=0x3029f445; S=0x302a06b1; 
@property(assign, nonatomic) double duration;	// G=0x3029f4e5; S=0x302a0131; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3029f46d; S=0x302a056d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3029f4ad; S=0x302a03f9; 
@property(readonly, assign, nonatomic) BOOL isInsideNavigationBar;	// G=0x3029f4c1; 
@property(assign, nonatomic) double maximumTrimLength;	// G=0x3029f65d; S=0x3029f66d; @synthesize=_maxTrimmedLength
@property(assign, nonatomic) double minimumTrimLength;	// G=0x3029f639; S=0x3029f649; @synthesize=_minTrimmedLength
@property(assign, nonatomic) BOOL showTimeViews;	// G=0x3029f681; S=0x3029f691; @synthesize=_showTimeViews
@property(assign, nonatomic) BOOL thumbIsVisible;	// G=0x3029f455; S=0x302a05fd; 
@property(readonly, assign) CGRect trackRect;	// G=0x302a1c39; converted property
@property(assign, nonatomic) double trimEndValue;	// G=0x3029f551; S=0x302a13b9; @dynamic
@property(assign, nonatomic) double trimStartValue;	// G=0x3029f4f5; S=0x302a1671; @dynamic
@property(assign, nonatomic) double value;	// G=0x3029f4d5; S=0x302a030d; @dynamic
@property(assign, nonatomic) float zoomDelay;	// G=0x3029f6a1; S=0x3029f6b1; @synthesize=_zoomDelay
+ (id)timeStringForSeconds:(int)seconds forceFullWidthComponents:(BOOL)components isElapsed:(BOOL)elapsed;	// 0x3029fa95
- (id)init;	// 0x302a0919
- (id)initWithFrame:(CGRect)frame;	// 0x302a0be9
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3029fcc1
- (void)_animateAfterEdit:(BOOL)edit;	// 0x302a20d9
- (void)_beginTrackPressWithTouch:(id)touch touchesBegan:(BOOL)began;	// 0x302a11bd
- (void)_cancelTrackPress:(BOOL)press;	// 0x3029feb9
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)touch;	// 0x302a1145
- (void)_computeTrackRectForBounds:(CGRect)bounds;	// 0x302a3281
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x3029f5c1
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x3029f5c9
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x3029f5c5
- (float)_editingFrameDeltaXForValue:(float)value handle:(int)handle;	// 0x302a3605
- (int)_editingHandleWithTouch:(id)touch;	// 0x302a10d5
- (CGRect)_editingRect;	// 0x302a1b99
- (CGRect)_editingViewFrameForEndValueWithFrame:(CGRect)frame;	// 0x302a0055
- (CGRect)_editingViewFrameForStartValueWithFrame:(CGRect)frame;	// 0x302a00bd
- (void)_initSubviews;	// 0x302a2ce1
- (id)_scriptingInfo;	// 0x302a0a29
- (void)_sendDelayedActions;	// 0x302a09c1
- (void)_setValue:(double)value andSendAction:(BOOL)action;	// 0x302a021d
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x3029fff9
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x3029f5ad
- (void)_sliderValueDidChange:(id)_sliderValue;	// 0x3029fc75
- (void)_trackPressWasHeld;	// 0x302a34f5
- (void)_trimAnimationDidStop:(id)_trimAnimation finished:(id)finished context:(id)context;	// 0x302a0411
- (void)_updateThumbLocation;	// 0x302a1935
- (void)_updateTimes;	// 0x302a27ad
- (float)_valueForTouch:(id)touch;	// 0x302a12c9
- (void)animateAfterEdit;	// 0x302a0555
- (void)animateCancelEdit;	// 0x302a053d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x302a2329
- (BOOL)cancelTouchTracking;	// 0x3029fcd9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3029fd3d
// declared property getter: - (id)dataSource;	// 0x3029f435
- (void)dealloc;	// 0x302a0b31
// declared property getter: - (id)delegate;	// 0x3029f445
- (void)didMoveToSuperview;	// 0x302a03b1
- (void)didMoveToWindow;	// 0x302a0389
// declared property getter: - (double)duration;	// 0x3029f4e5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x302a0dd9
- (BOOL)isAnimatingValueChange;	// 0x3029f5cd
// declared property getter: - (BOOL)isContinuous;	// 0x3029f499
// declared property getter: - (BOOL)isEditable;	// 0x3029f46d
// declared property getter: - (BOOL)isEditing;	// 0x3029f4ad
// declared property getter: - (BOOL)isInsideNavigationBar;	// 0x3029f4c1
- (void)layoutSubviews;	// 0x302a37bd
// declared property getter: - (double)maximumTrimLength;	// 0x3029f65d
// declared property getter: - (double)minimumTrimLength;	// 0x3029f639
- (void)movieScrubberTrackView:(id)view clampedSizeWidthDelta:(float)delta actualSizeWidthDelta:(float)delta3 originXDelta:(float)delta4 minimumVisibleValue:(float)value maximumVisibleValue:(float)value6;	// 0x302a297d
- (id)movieScrubberTrackView:(id)view evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;	// 0x3029fbfd
- (void)movieScrubberTrackView:(id)view requestThumbnailImageForTimestamp:(id)timestamp;	// 0x3029fba1
- (id)movieScrubberTrackView:(id)view timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;	// 0x3029fbc5
- (void)movieScrubberTrackViewDidCollapse:(id)movieScrubberTrackView;	// 0x3029fb29
- (void)movieScrubberTrackViewDidExpand:(id)movieScrubberTrackView;	// 0x3029f619
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)movieScrubberTrackView;	// 0x3029fab9
- (double)movieScrubberTrackViewDuration:(id)duration;	// 0x3029fc35
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)ratio;	// 0x3029fb5d
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)movieScrubberTrackView;	// 0x3029faf1
- (float)movieScrubberTrackViewZoomAnimationDelay:(id)delay;	// 0x3029f5fd
- (float)movieScrubberTrackViewZoomAnimationDuration:(id)duration;	// 0x3029f5e1
- (BOOL)pointInsideThumb:(CGPoint)thumb withEvent:(id)event;	// 0x302a28dd
- (void)reloadData;	// 0x302a08ad
- (id)scriptingInfoWithChildren;	// 0x302a0f3d
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x3029f47d
// declared property setter: - (void)setDataSource:(id)source;	// 0x302a08f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302a06b1
// declared property setter: - (void)setDuration:(double)duration;	// 0x302a0131
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x302a056d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x302a03f9
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x302a1cb9
- (void)setFrame:(CGRect)frame;	// 0x302a264d
// declared property setter: - (void)setMaximumTrimLength:(double)length;	// 0x3029f66d
// declared property setter: - (void)setMinimumTrimLength:(double)length;	// 0x3029f649
- (void)setRotationDisabled:(BOOL)disabled;	// 0x3029ff75
// declared property setter: - (void)setShowTimeViews:(BOOL)views;	// 0x3029f691
// declared property setter: - (void)setThumbIsVisible:(BOOL)visible;	// 0x302a05fd
- (void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;	// 0x3029fb81
// declared property setter: - (void)setTrimEndValue:(double)value;	// 0x302a13b9
// declared property setter: - (void)setTrimStartValue:(double)value;	// 0x302a1671
// declared property setter: - (void)setValue:(double)value;	// 0x302a030d
- (void)setValue:(double)value animated:(BOOL)animated;	// 0x302a19ad
- (void)setZoomAnimationDuration:(float)duration;	// 0x302a03d9
// declared property setter: - (void)setZoomDelay:(float)delay;	// 0x3029f6b1
// declared property getter: - (BOOL)showTimeViews;	// 0x3029f681
// declared property getter: - (BOOL)thumbIsVisible;	// 0x3029f455
- (CGRect)thumbRectForValue:(float)value;	// 0x302a3385
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302a095d
// converted property getter: - (CGRect)trackRect;	// 0x302a1c39
// declared property getter: - (double)trimEndValue;	// 0x3029f551
// declared property getter: - (double)trimStartValue;	// 0x3029f4f5
// declared property getter: - (double)value;	// 0x3029f4d5
// declared property getter: - (float)zoomDelay;	// 0x3029f6a1
@end

