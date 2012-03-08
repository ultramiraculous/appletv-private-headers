/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuView.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer, BRImageControl, BRControl, BRPhotoMediaCollection, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
@private
	BRMediaPlayer *_slideshowPhotoPlayer;	// 92 = 0x5c
	BRImageControl *_listBackgroundControl;	// 96 = 0x60
	BRControl *_slideshowPreview;	// 100 = 0x64
	BRPhotoMediaCollection *_collection;	// 104 = 0x68
	NSArray *_slideshowThemeIdentifierKeys;	// 108 = 0x6c
	NSString *_nextSlideshowTheme;	// 112 = 0x70
	NSString *_newlyRequestedTheme;	// 116 = 0x74
	BRControl *_fadeThroughBlackShroudControl;	// 120 = 0x78
	BOOL _themeSwitchInFlight;	// 124 = 0x7c
	BOOL _playerVisualsChanged;	// 125 = 0x7d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 126 = 0x7e
	BOOL _loopPhotos;	// 127 = 0x7f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x33adffb5
- (void)_beginTransitionToNewTheme;	// 0x33ae1029
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x33ae0f1d
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x33ae14c5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x33ae11f9
- (void)_finishTransitionToNewTheme;	// 0x33ae136d
- (void)_insertSlideshowPreview;	// 0x33ae0e9d
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x33ae1019
- (void)_playerVisualsChanged:(id)changed;	// 0x33ae0d95
- (void)_prepareToBeginTransitionToNewTheme;	// 0x33ae0f49
- (void)_removeSlideshowPreview;	// 0x33ae0e1d
- (void)controlWasActivated;	// 0x33ae02b9
- (void)controlWasDeactivated;	// 0x33ae04f9
- (id)currentTheme;	// 0x33ae09a1
- (id)currentTransitions;	// 0x33ae0a89
- (void)dealloc;	// 0x33ae01ad
- (void)layoutSubcontrols;	// 0x33ae0539
- (id)musicServerID;	// 0x33ae0c3d
- (void)playSlideshow;	// 0x33ae0679
- (id)playlistID;	// 0x33ae0be5
- (void)setLoopPhotos:(BOOL)photos;	// 0x33ae0d71
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(ATVMediaCollectionRef)ref;	// 0x33ae0acd
- (void)setMuted:(BOOL)muted;	// 0x33ae0785
- (void)setTimePerSlide:(double)slide;	// 0x33ae0cbd
- (void)stopSlideshow;	// 0x33ae06b5
- (void)switchToNewMenu;	// 0x33ae0c95
- (BOOL)switchToTheme:(id)theme;	// 0x33ae07a5
- (void)switchToTransition:(id)transition;	// 0x33ae09e5
- (void)toggleSlideshowPlayback;	// 0x33ae073d
@end
