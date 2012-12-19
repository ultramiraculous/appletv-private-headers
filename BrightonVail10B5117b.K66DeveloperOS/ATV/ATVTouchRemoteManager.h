/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVRemoteControlMessageHandler, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVTouchRemoteManager : BRSingleton {
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSMutableArray *_pairableTouchRemotesWhichHaveBeenPaired;	// 16 = 0x10
	NSTimer *_trickSpeedAdvanceTimer;	// 20 = 0x14
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x239b4d; converted property
+ (void)setSingleton:(id)singleton;	// 0x239671
+ (id)singleton;	// 0x239661
+ (id)touchablePlayer;	// 0x239681
- (id)init;	// 0x23972d
- (void)_pairableTouchRemoteAppeared:(id)appeared;	// 0x23a8d9
- (void)_pairableTouchRemoteDisappeared:(id)disappeared;	// 0x23aa71
- (BOOL)_preparePlayback;	// 0x23a6d1
- (void)_removePairableTouchRemote:(id)remote hasDisappeared:(BOOL)disappeared;	// 0x23aac1
- (void)_sendPromptUpdate:(id)update;	// 0x23acdd
- (void)_startPlaybackWithPlayer:(id)player;	// 0x23a795
- (void)_startTrickSpeedAdvanceTimer;	// 0x23a5b9
- (void)_stopTrickSpeedAdvanceTimer;	// 0x23a625
- (void)_updateTrickSpeed:(id)speed;	// 0x23a651
- (void)_userAction;	// 0x23a4fd
- (void)beginFF;	// 0x239f75
- (void)beginRW;	// 0x23a069
- (void)dealloc;	// 0x23988d
- (void)nextChapter;	// 0x23a15d
- (void)nextItem;	// 0x23a1ed
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x239b85
// converted property getter: - (id)pairableTouchRemotes;	// 0x239b4d
- (id)pairedTouchRemotes;	// 0x239959
- (void)pause;	// 0x239ea9
- (void)play;	// 0x239d19
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x239c69
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x239bc1
- (void)playPause;	// 0x239d65
- (void)playResume;	// 0x239dcd
- (void)prevChapter;	// 0x23a1a5
- (void)prevItem;	// 0x23a2c1
- (void)removePairableTouchRemote:(id)remote;	// 0x239945
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x23998d
- (void)repeatAdvance;	// 0x23a449
- (void)restartItem;	// 0x239f41
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x23a4c5
- (void)shuffleSongs;	// 0x239d15
- (void)shuffleToggle;	// 0x23a3e1
- (void)stop;	// 0x239ef5
@end
