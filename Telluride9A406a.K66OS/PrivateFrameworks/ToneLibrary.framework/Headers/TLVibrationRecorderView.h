/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"
#import "TLVibrationRecorderTouchSurfaceDelegate.h"
#import "TLVibrationRecorderControlsViewDelegate.h"

@class TLVibrationRecorderControlsView, TLVibrationRecorderTouchSurface, UILabel;
@protocol TLVibrationRecorderViewDelegate;

@interface TLVibrationRecorderView : UIView <TLVibrationRecorderTouchSurfaceDelegate, TLVibrationRecorderControlsViewDelegate> {
	id<TLVibrationRecorderViewDelegate> _delegate;	// 48 = 0x30
	TLVibrationRecorderTouchSurface *_touchSurface;	// 52 = 0x34
	TLVibrationRecorderControlsView *_controlsView;	// 56 = 0x38
	UILabel *_instructionsLabel;	// 60 = 0x3c
	BOOL _replayMode;	// 64 = 0x40
	unsigned _leftButtonIdentifier;	// 68 = 0x44
	unsigned _rightButtonIdentifier;	// 72 = 0x48
	double _vibrationPatternMaximumDuration;	// 76 = 0x4c
	double _currentVibrationProgressDidStartTimestamp;	// 84 = 0x54
	BOOL _isWaitingForEndOfCurrentVibrationComponent;	// 92 = 0x5c
	double _currentVibrationComponentDidStartTime;	// 96 = 0x60
	BOOL _animatingProgress;	// 104 = 0x68
}
@property(assign, nonatomic, setter=_setReplayMode:) BOOL _replayMode;	// G=0x363368d9; S=0x36335b2d; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderViewDelegate> delegate;	// G=0x363368b9; S=0x363368c9; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x36335365
- (void)_enterWaitingModeWithAnimation:(BOOL)animation animateButtons:(BOOL)buttons enablePlayButton:(BOOL)button;	// 0x36335f85
- (void)_exitWaitingModeWithAnimation:(BOOL)animation;	// 0x36336165
- (void)_getButtonPropertiesForIdentifier:(unsigned)identifier enabled:(BOOL)enabled color:(int *)color title:(id *)title icon:(id *)icon;	// 0x36335e19
// declared property getter: - (BOOL)_replayMode;	// 0x363368d9
- (void)_setLeftButtonIdentifier:(unsigned)identifier enabled:(BOOL)enabled rightButtonIdentifier:(unsigned)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate;	// 0x363359f9
- (void)_setLeftButtonIdentifier:(unsigned)identifier enabled:(BOOL)enabled rightButtonIdentifier:(unsigned)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate completion:(id)completion;	// 0x36335a39
// declared property setter: - (void)_setReplayMode:(BOOL)mode;	// 0x36335b2d
- (void)_updateProgress:(id)progress;	// 0x36336761
- (void)dealloc;	// 0x36335985
// declared property getter: - (id)delegate;	// 0x363368b9
- (void)enterRecordingModeWithAnimation:(BOOL)animation;	// 0x36336265
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern animate:(BOOL)animate completion:(id)completion;	// 0x3633640d
- (void)exitRecordingModeWithAnimation:(BOOL)animation enablePlayButton:(BOOL)button;	// 0x36336321
- (void)exitReplayModeWithAnimation:(BOOL)animation;	// 0x36336589
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x363368c9
- (void)startAnimatingProgress;	// 0x36336651
- (void)stopAnimatingProgress;	// 0x3633670d
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x36335bd1
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x36335b49
- (void)vibrationRecorderControlsView:(id)view buttonTappedAtIndex:(unsigned)index;	// 0x36335c3d
- (void)vibrationRecorderTouchSurface:(id)surface didExitRecordingModeWithContextObject:(id)contextObject;	// 0x36335de5
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)vibrationRecorderTouchSurface;	// 0x36335db9
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)vibrationRecorderTouchSurface;	// 0x36335c95
@end
