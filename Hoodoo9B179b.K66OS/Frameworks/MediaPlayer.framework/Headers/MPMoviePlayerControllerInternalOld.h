/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class UIWindow, UIColor, MPMoviePlayerVideoViewController, NSURL, MPAVController, NSError;

@interface MPMoviePlayerControllerInternalOld : NSObject {
@private
	MPAVController *_player;	// 4 = 0x4
	NSURL *_contentURL;	// 8 = 0x8
	int _scalingMode;	// 12 = 0xc
	int _movieControlMode;	// 16 = 0x10
	UIWindow *_window;	// 20 = 0x14
	UIWindow *_previousKeyWindow;	// 24 = 0x18
	MPMoviePlayerVideoViewController *_videoViewController;	// 28 = 0x1c
	UIColor *_backgroundColor;	// 32 = 0x20
	unsigned _previousStatusBarOrientation;	// 36 = 0x24
	int _previousStatusBarStyle;	// 40 = 0x28
	NSError *_playbackError;	// 44 = 0x2c
	double _initialPlaybackTime;	// 48 = 0x30
	struct {
		unsigned active : 1;
		unsigned visible : 1;
		unsigned mediaType : 1;
		unsigned isStreaming : 1;
		unsigned statusBarWasHidden : 1;
		unsigned shouldRestartPlaybackAfterAudioRouteChange : 1;
		unsigned playbackFailed : 1;
		unsigned isFinishing : 1;
		unsigned hideLoadingIndicatorForLocalFiles : 1;
		unsigned fullscreen : 1;
		unsigned playAfterCreatingPlayer : 1;
		unsigned canShowControlsOverlay : 1;
		unsigned tearDownPlayerOnEnd : 1;
		unsigned didSendPreloadNotification : 1;
		unsigned isValidating : 1;
		unsigned unused : 17;
	} _playerBitfield;	// 56 = 0x38
}
@end

