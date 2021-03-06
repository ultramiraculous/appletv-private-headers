/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSMutableArray, ATVRemoteControlMessageHandler, NSTimer;

@interface ATVTouchRemoteManager : BRSingleton {
@private
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSTimer *_trickSpeedAdvanceTimer;	// 16 = 0x10
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x30699ca5; converted property
+ (void)setSingleton:(id)singleton;	// 0x30699359
+ (id)singleton;	// 0x3069934d
+ (id)touchablePlayer;	// 0x30699f49
- (id)init;	// 0x30699e71
- (BOOL)_preparePlayback;	// 0x30699fe5
- (void)_sendPromptUpdate:(id)update;	// 0x30699369
- (void)_startPlaybackWithPlayer:(id)player;	// 0x30699395
- (void)_startTrickSpeedAdvanceTimer;	// 0x30699555
- (void)_stopTrickSpeedAdvanceTimer;	// 0x30699529
- (void)_updateTrickSpeed:(id)speed;	// 0x306994bd
- (void)_userAction;	// 0x306995b9
- (void)beginFF;	// 0x30699a6d
- (void)beginRW;	// 0x30699985
- (void)dealloc;	// 0x30699ddd
- (void)nextChapter;	// 0x30699945
- (void)nextItem;	// 0x30699849
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x30699c71
// converted property getter: - (id)pairableTouchRemotes;	// 0x30699ca5
- (id)pairedTouchRemotes;	// 0x30699d09
- (void)pause;	// 0x30699bc5
- (void)play;	// 0x3069a171
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x3069a1b9
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x3069a279
- (void)playPause;	// 0x30699c09
- (void)playResume;	// 0x3069a099
- (void)prevChapter;	// 0x30699905
- (void)prevItem;	// 0x30699755
- (void)removePairableTouchRemote:(id)remote;	// 0x30699d35
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x30699cd5
- (void)repeatAdvance;	// 0x3069968d
- (void)restartItem;	// 0x30699b55
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x3069965d
- (void)shuffleSongs;	// 0x30699365
- (void)shuffleToggle;	// 0x306996f9
- (void)stop;	// 0x30699b81
@end

