/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRPhotoMediaCollection, BRMediaPlayer, BRControl, BRImageControl, NSString;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
	BRMediaPlayer *_slideshowPhotoPlayer;	// 112 = 0x70
	BRImageControl *_listBackgroundControl;	// 116 = 0x74
	BRControl *_slideshowPreview;	// 120 = 0x78
	BRPhotoMediaCollection *_collection;	// 124 = 0x7c
	NSString *_nextSlideshowThemeKey;	// 128 = 0x80
	NSString *_newlyRequestedThemeKey;	// 132 = 0x84
	BRControl *_fadeThroughBlackShroudControl;	// 136 = 0x88
	BOOL _themeSwitchInFlight;	// 140 = 0x8c
	BOOL _playerVisualsChanged;	// 141 = 0x8d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 142 = 0x8e
	BOOL _loopPhotos;	// 143 = 0x8f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x3ba985
- (void)_beginTransitionToNewTheme;	// 0x3bba01
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x3bb8ed
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x3bbe99
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x3bbbcd
- (void)_finishTransitionToNewTheme;	// 0x3bbd41
- (void)_insertSlideshowPreview;	// 0x3bb87d
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x3bb9f1
- (void)_playerVisualsChanged:(id)changed;	// 0x3bb779
- (void)_prepareToBeginTransitionToNewTheme;	// 0x3bb915
- (void)_removeSlideshowPreview;	// 0x3bb801
- (void)controlWasActivated;	// 0x3bac59
- (void)controlWasDeactivated;	// 0x3baeb9
- (id)currentTheme;	// 0x3bb379
- (id)currentTransitions;	// 0x3bb469
- (void)dealloc;	// 0x3bab61
- (void)layoutSubcontrols;	// 0x3baef9
- (id)musicServerID;	// 0x3bb629
- (void)playSlideshow;	// 0x3bb05d
- (id)playlistID;	// 0x3bb5cd
- (void)setLoopPhotos:(BOOL)photos;	// 0x3bb759
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x3bb4ad
- (void)setMuted:(BOOL)muted;	// 0x3bb161
- (void)setTimePerSlide:(double)slide;	// 0x3bb6ad
- (void)stopSlideshow;	// 0x3bb095
- (void)switchToNewMenu;	// 0x3bb685
- (BOOL)switchToThemeKey:(id)themeKey;	// 0x3bb181
- (void)switchToTransition:(id)transition;	// 0x3bb3bd
- (void)toggleSlideshowPlayback;	// 0x3bb119
@end

