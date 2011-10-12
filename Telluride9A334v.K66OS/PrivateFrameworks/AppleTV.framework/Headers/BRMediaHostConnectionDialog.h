/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextWithSpinnerController.h"

@class BRMediaHost;
@protocol BRMediaProvider, BRMediaLoading;

__attribute__((visibility("hidden")))
@interface BRMediaHostConnectionDialog : BRTextWithSpinnerController {
@private
	BRMediaHost *_mediaHost;	// 100 = 0x64
	id<BRMediaProvider, BRMediaLoading> _providerNeedingAuth;	// 104 = 0x68
	BRController *_controllerUnderneath;	// 108 = 0x6c
	BOOL _timerSatisfied;	// 112 = 0x70
	BOOL _wasBuried;	// 113 = 0x71
	BOOL _passwordWasEntered;	// 114 = 0x72
	BOOL _authAlreadyAttempted;	// 115 = 0x73
}
@property(retain) BRMediaHost *mediaHost;	// G=0x332774e1; S=0x332774a1; converted property
- (id)initWithHost:(id)host;	// 0x33277231
- (void)_authRequired:(id)required;	// 0x33278235
- (void)_checkMountStatus:(id)status;	// 0x33277af5
- (void)_hostsChanged:(id)changed;	// 0x332785fd
- (void)_waitForHostReset:(id)hostReset;	// 0x33277f19
- (BOOL)brEventAction:(id)action;	// 0x332774f1
- (void)dealloc;	// 0x3327736d
// converted property getter: - (id)mediaHost;	// 0x332774e1
// converted property setter: - (void)setMediaHost:(id)host;	// 0x332774a1
- (void)textDidChange:(id)text;	// 0x33277901
- (void)textDidEndEditing:(id)text;	// 0x33277905
- (void)wasBuried;	// 0x332778c1
- (void)wasPushed;	// 0x33277635
@end

