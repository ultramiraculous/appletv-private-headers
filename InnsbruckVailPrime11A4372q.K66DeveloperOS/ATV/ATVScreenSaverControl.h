/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler;
@protocol ATVScreenSaverInterstitials;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	BRMediaPlayerEventHandler *_eventHandler;	// 88 = 0x58
	BOOL _dismissWithTopMenuEvent;	// 92 = 0x5c
	id<ATVScreenSaverInterstitials> _screenSaverInterstitials;	// 96 = 0x60
	NSTimer *_screenSaverBringBackTimer;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL dismissWithTopMenuEvent;	// G=0x233795; S=0x2337a5; @synthesize=_dismissWithTopMenuEvent
@property(retain, nonatomic) NSTimer *screenSaverBringBackTimer;	// G=0x2337d5; S=0x2337e5; @synthesize=_screenSaverBringBackTimer
@property(retain, nonatomic) id<ATVScreenSaverInterstitials> screenSaverInterstitials;	// G=0x2337b5; S=0x2337c5; @synthesize=_screenSaverInterstitials
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x232cb5
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x232b2d
- (BOOL)_isRadioPlayer:(id)player;	// 0x23354d
- (BOOL)_nextTrackAction:(id)action;	// 0x2333fd
- (BOOL)_playPauseAction:(id)action;	// 0x23339d
- (void)_playerAssetChanged:(id)changed;	// 0x233359
- (void)_playerStateChanged:(id)changed;	// 0x23320d
- (BOOL)_previousTrackAction:(id)action;	// 0x23345d
- (void)_screenSaverBringBackTimerHandler:(id)handler;	// 0x23373d
- (id)_screenSaverInterstitialsForPlayer:(id)player;	// 0x2334e9
- (void)_setNewPlayer:(id)player;	// 0x2330c9
- (void)_showInterstitials:(BOOL)interstitials animate:(BOOL)animate;	// 0x2335dd
- (id)accessibilityLabel;	// 0x2330a1
- (BOOL)brEventAction:(id)action;	// 0x232d85
- (void)controlWasActivated;	// 0x232eb9
- (void)controlWasDeactivated;	// 0x232f21
- (void)dealloc;	// 0x232cf5
// declared property getter: - (BOOL)dismissWithTopMenuEvent;	// 0x233795
- (BOOL)isAccessibilityElement;	// 0x23309d
- (void)layoutSubcontrols;	// 0x232fe9
// declared property getter: - (id)screenSaverBringBackTimer;	// 0x2337d5
// declared property getter: - (id)screenSaverInterstitials;	// 0x2337b5
// declared property setter: - (void)setDismissWithTopMenuEvent:(BOOL)topMenuEvent;	// 0x2337a5
// declared property setter: - (void)setScreenSaverBringBackTimer:(id)timer;	// 0x2337e5
// declared property setter: - (void)setScreenSaverInterstitials:(id)interstitials;	// 0x2337c5
@end

