/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRStateMachine, BRMediaPlayer, ATVJSPlayerMoreAssetsSpinnerController, ATVJSContext, ATVInterstitialGroup;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : XXUnknownSuperclass {
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	unsigned _playlistID;	// 8 = 0x8
	BRStateMachine *_playlistStateMachine;	// 12 = 0xc
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 16 = 0x10
	ATVJSContext *context;	// 20 = 0x14
	ATVInterstitialGroup *interstitialGroup;	// 24 = 0x18
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x162d7d; S=0x162d8d; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x162db5; S=0x162dc9; @synthesize
- (void).cxx_destruct;	// 0x162dd9
- (void)_changeToAsset:(id)asset;	// 0x15f66d
- (void)_clearSubtitleFilter;	// 0x162d5d
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x15f79d
- (BOOL)_loadAssetsActivity;	// 0x161019
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x15fdc5
- (void)_playerControllerWillPresentRelatedPlaybackOptions:(id)_playerController;	// 0x160f4d
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x160e69
- (void)_playerPlaybackEnded:(id)ended;	// 0x160f21
- (void)_playerPlaybackError:(id)error;	// 0x15fe29
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x16007d
- (void)_playerStallDuringPlayback:(id)playback;	// 0x15ff51
- (void)_playerStartedBuffering:(id)buffering;	// 0x15fcd9
- (void)_playerStateChanged:(id)changed;	// 0x15f8c1
- (void)_playerTransportDisplayChange:(id)change;	// 0x1601dd
- (void)_playerWillStop:(id)_player;	// 0x16010d
- (void)_registerPlaylistHandlers;	// 0x161c29
- (void)_setSubtitleFilterWithLanguages:(id)languages andAllowsOffOption:(BOOL)option;	// 0x162b19
- (void)_setupSpinnerActivity;	// 0x161afd
- (void)_stop;	// 0x15f745
- (void)_stopWithReason:(id)reason suggestion:(id)suggestion;	// 0x15f699
- (void)_updateAsset:(id)asset;	// 0x160325
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x160669
- (void)_updateEventGroupsNotification:(id)notification;	// 0x160de5
// declared property getter: - (id)context;	// 0x162d7d
// declared property getter: - (id)interstitialGroup;	// 0x162db5
// declared property setter: - (void)setContext:(id)context;	// 0x162d8d
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x162dc9
- (void)setup;	// 0x15f2e5
- (void)tearDown;	// 0x15f5d1
@end
