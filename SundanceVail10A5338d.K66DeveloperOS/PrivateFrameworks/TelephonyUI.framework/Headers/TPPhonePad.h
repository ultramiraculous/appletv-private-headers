/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIControl.h> // Unknown library


@interface TPPhonePad : UIControl {
	int _downKey;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
	BOOL _playsSounds;	// 116 = 0x74
	BOOL _supportsHardPause;	// 117 = 0x75
	float _topHeight;	// 120 = 0x78
	float _midHeight;	// 124 = 0x7c
	float _bottomHeight;	// 128 = 0x80
	float _leftWidth;	// 132 = 0x84
	float _midWidth;	// 136 = 0x88
	float _rightWidth;	// 140 = 0x8c
	CFSetRef _inflightSounds;	// 144 = 0x90
	CFDictionaryRef _keyToButtonMap;	// 148 = 0x94
	unsigned _incompleteSounds;	// 152 = 0x98
	unsigned _delegateSoundCallbacks : 1;	// 156 = 0x9c
	unsigned _soundsActivated : 1;	// 156 = 0x9c
}
@property(assign) BOOL supportsHardPause;	// G=0x32adc659; S=0x32adc671; @synthesize=_supportsHardPause
+ (void)_delayedDeactivate;	// 0x32adaf95
+ (BOOL)launchFieldTestIfNeeded:(id)needed;	// 0x32adad7d
+ (BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;	// 0x32adac61
- (id)initWithFrame:(CGRect)frame;	// 0x32adadd9
- (void)_activateSounds:(BOOL)sounds;	// 0x32adafdd
- (void)_appResumed;	// 0x32adb19d
- (void)_appSuspended;	// 0x32adb189
- (id)_buttonForKeyAtIndex:(int)index;	// 0x32adb5a5
- (void)_handleKey:(id)key forUIEvent:(id)uievent;	// 0x32adbd25
- (void)_handleKeyPressAndHold:(id)hold;	// 0x32adc039
- (id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;	// 0x32adb7e5
- (int)_keyForPoint:(CGPoint)point;	// 0x32adc141
- (id)_keypadImage;	// 0x32adb735
- (CGPoint)_keypadOrigin;	// 0x32adb61d
- (void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;	// 0x32adc415
- (void)_playSoundForKey:(int)key;	// 0x32adc479
- (id)_pressedImage;	// 0x32adb6fd
- (CGRect)_rectForKey:(int)key;	// 0x32adc2ad
- (void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;	// 0x32adc599
- (void)_stopSoundForKey:(int)key;	// 0x32adc559
- (CGRect)_updateRect:(CGRect)rect withScale:(float)scale;	// 0x32adb775
- (float)_yFudge;	// 0x32adb76d
- (BOOL)cancelTouchTracking;	// 0x32adbc31
- (void)dealloc;	// 0x32adaee5
- (void)drawRect:(CGRect)rect;	// 0x32adb88d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32adbaf1
- (void)movedFromWindow:(id)window;	// 0x32adb1c5
- (void)movedToWindow:(id)window;	// 0x32adb209
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x32adbaed
- (void)removeFromSuperview;	// 0x32adb129
- (id)scriptingInfoWithChildren;	// 0x32adc689
- (void)setButton:(id)button forKeyAtIndex:(int)index;	// 0x32adb4e9
- (void)setDelegate:(id)delegate;	// 0x32adb25d
- (void)setHighlighted:(BOOL)highlighted;	// 0x32adbb69
- (void)setNeedsDisplayForKey:(int)key;	// 0x32adb5c1
- (void)setPlaysSounds:(BOOL)sounds;	// 0x32adb2f1
// declared property setter: - (void)setSupportsHardPause:(BOOL)pause;	// 0x32adc671
// declared property getter: - (BOOL)supportsHardPause;	// 0x32adc659
@end

