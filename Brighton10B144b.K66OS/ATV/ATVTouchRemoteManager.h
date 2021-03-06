/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, ATVRemoteControlMessageHandler, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVTouchRemoteManager : BRSingleton {
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSMutableArray *_pairableTouchRemotesWhichHaveBeenPaired;	// 16 = 0x10
	NSTimer *_trickSpeedAdvanceTimer;	// 20 = 0x14
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x240765; converted property
+ (void)setSingleton:(id)singleton;	// 0x240289
+ (id)singleton;	// 0x240279
+ (id)touchablePlayer;	// 0x240299
- (id)init;	// 0x240345
- (void)_pairableTouchRemoteAppeared:(id)appeared;	// 0x2414f1
- (void)_pairableTouchRemoteDisappeared:(id)disappeared;	// 0x241689
- (BOOL)_preparePlayback;	// 0x2412e9
- (void)_removePairableTouchRemote:(id)remote hasDisappeared:(BOOL)disappeared;	// 0x2416d9
- (void)_sendPromptUpdate:(id)update;	// 0x2418f5
- (void)_startPlaybackWithPlayer:(id)player;	// 0x2413ad
- (void)_startTrickSpeedAdvanceTimer;	// 0x2411d1
- (void)_stopTrickSpeedAdvanceTimer;	// 0x24123d
- (void)_updateTrickSpeed:(id)speed;	// 0x241269
- (void)_userAction;	// 0x241115
- (void)beginFF;	// 0x240b8d
- (void)beginRW;	// 0x240c81
- (void)dealloc;	// 0x2404a5
- (void)nextChapter;	// 0x240d75
- (void)nextItem;	// 0x240e05
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x24079d
// converted property getter: - (id)pairableTouchRemotes;	// 0x240765
- (id)pairedTouchRemotes;	// 0x240571
- (void)pause;	// 0x240ac1
- (void)play;	// 0x240931
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x240881
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x2407d9
- (void)playPause;	// 0x24097d
- (void)playResume;	// 0x2409e5
- (void)prevChapter;	// 0x240dbd
- (void)prevItem;	// 0x240ed9
- (void)removePairableTouchRemote:(id)remote;	// 0x24055d
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x2405a5
- (void)repeatAdvance;	// 0x241061
- (void)restartItem;	// 0x240b59
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x2410dd
- (void)shuffleSongs;	// 0x24092d
- (void)shuffleToggle;	// 0x240ff9
- (void)stop;	// 0x240b0d
@end

