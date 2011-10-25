/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingLayer : BRControl {
@private
	NSMutableDictionary *_currentTrackInfo;	// 48 = 0x30
	int _scheduledAnimationCount;	// 52 = 0x34
	float _coverArtRotation;	// 56 = 0x38
	float _coverArtSizeX;	// 60 = 0x3c
	float _coverArtSizeY;	// 64 = 0x40
	float _stateIconWidth;	// 68 = 0x44
	float _textWidth;	// 72 = 0x48
	BOOL _shuffleState;	// 76 = 0x4c
	BOOL _repeatState;	// 77 = 0x4d
	BOOL _geniusState;	// 78 = 0x4e
	BOOL _isRadio;	// 79 = 0x4f
	CGPoint _randomOffset;	// 80 = 0x50
	CGPoint _coverArtPosition;	// 88 = 0x58
	CGPoint _trackNameTextPosition;	// 96 = 0x60
	CGPoint _artistNameTextPosition;	// 104 = 0x68
	CGPoint _albumNameTextPosition;	// 112 = 0x70
	CGPoint _trackXofXTextPosition;	// 120 = 0x78
	CGPoint _transportPosition;	// 128 = 0x80
	CGPoint _stateIconsLowerRightCornerPosition;	// 136 = 0x88
	float _coverArtReflectionAmount;	// 144 = 0x90
	CGSize _transportSize;	// 148 = 0x94
	BOOL _flip;	// 156 = 0x9c
}
@property(readonly, retain) NSMutableDictionary *currentTrackInfo;	// G=0x33aad9e9; converted property
- (id)init;	// 0x33aac2e5
- (id)_createFrontLayer;	// 0x33aae7a1
- (void)_flipFrame:(CGRect *)frame parentFrame:(CGRect)frame2;	// 0x33aaed71
- (void)_startScrolling;	// 0x33aaee5d
- (void)_updateRandomOffset;	// 0x33aaeda1
- (void)_updateTextStrings;	// 0x33aae24d
- (id)accessibilityLabel;	// 0x33aae17d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33aadfb5
- (void)controlWasActivated;	// 0x33aadbd5
- (void)controlWasDeactivated;	// 0x33aadb65
// converted property getter: - (id)currentTrackInfo;	// 0x33aad9e9
- (void)dealloc;	// 0x33aac585
- (int)frontLayerSide;	// 0x33aadadd
- (BOOL)isAccessibilityElement;	// 0x33aae179
- (void)layoutSubcontrols;	// 0x33aac5d1
- (void)performFlipAnimation:(float)animation;	// 0x33aadc15
- (void)removeAllPendingActions;	// 0x33aae075
- (void)setCurrentTrackInfo:(id)info WithTransition:(BOOL)transition TransitionDirection:(int)direction TransitionDuration:(float)duration NewTrackKicksInTime:(double)time OldTrackFadeOutTime:(double)time6 isRadio:(BOOL)radio;	// 0x33aad2f9
- (void)setElapsedTime:(double)time;	// 0x33aad9f9
- (void)setElapsedTime:(double)time andDuration:(double)duration;	// 0x33aada65
- (void)setGeniusState:(BOOL)state;	// 0x33aadb41
- (void)setPlayerState:(int)state;	// 0x33aadb61
- (void)setRepeatMode:(int)mode;	// 0x33aadb19
- (void)setShuffleState:(BOOL)state;	// 0x33aadaf9
- (void)updateCoverArt:(id)art;	// 0x33aae0a9
@end

