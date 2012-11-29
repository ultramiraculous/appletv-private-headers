/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaPlayer, BRPhotoMediaCollection;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface RUISlideShowControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	id<BRProvider> _provider;	// 88 = 0x58
	BRPhotoMediaCollection *_collection;	// 92 = 0x5c
	BOOL _screenSaverAutoFired;	// 96 = 0x60
}
- (id)init;	// 0x3aefd9
- (void).cxx_destruct;	// 0x3af375
- (void)_cupidDataClientUpdated:(id)updated;	// 0x3af3f5
- (void)_initiatePlaybackForMediaUpdate:(BOOL)mediaUpdate;	// 0x3afc75
- (void)_photoDatabaseUpdated:(id)updated;	// 0x3af659
- (void)_photoPlayerVisusalsChanged:(id)changed;	// 0x3af5e1
- (void)_providerUpdated:(id)updated;	// 0x3af4c9
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x3af3bd
- (void)_screenSaverDataReady:(id)ready;	// 0x3af6c1
- (void)_screenSaverDataReadyForMediaUpdate:(id)mediaUpdate;	// 0x3afb55
- (void)_setScreenSaverAutoFired:(BOOL)fired;	// 0x3b02c5
- (void)_startSlideshowWithCollection:(id)collection;	// 0x3afda5
- (void)controlWasActivated;	// 0x3af1dd
- (void)controlWasDeactivated;	// 0x3af221
- (void)dealloc;	// 0x3af14d
- (void)layoutSubcontrols;	// 0x3af271
@end
