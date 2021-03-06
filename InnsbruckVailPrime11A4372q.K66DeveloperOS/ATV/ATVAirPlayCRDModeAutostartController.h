/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRWaitPromptControl, BRTextControl, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVAirPlayCRDModeAutostartController : BRController {
	BRWaitPromptControl *_prompt;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
	NSTimer *_countdownTimer;	// 108 = 0x6c
}
@property(retain, nonatomic) NSTimer *countdownTimer;	// G=0x37b801; S=0x37b811; @synthesize=_countdownTimer
@property(retain, nonatomic) BRWaitPromptControl *prompt;	// G=0x37b791; S=0x37b7a1; @synthesize=_prompt
@property(retain, nonatomic) BRTextControl *subtext;	// G=0x37b7c9; S=0x37b7d9; @synthesize=_subtext
- (id)init;	// 0x37b355
- (void).cxx_destruct;	// 0x37b839
- (void)_enterCRDMode;	// 0x37b981
- (void)_startCountdown;	// 0x37b881
- (void)_stopCountdown;	// 0x37b919
- (id)accessibilityLabel;	// 0x37b5f5
- (BOOL)brEventAction:(id)action;	// 0x37b615
// declared property getter: - (id)countdownTimer;	// 0x37b801
- (void)dealloc;	// 0x37b5b1
- (BOOL)isAccessibilityElement;	// 0x37b5f1
- (void)layoutSubcontrols;	// 0x37b6c1
// declared property getter: - (id)prompt;	// 0x37b791
// declared property setter: - (void)setCountdownTimer:(id)timer;	// 0x37b811
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x37b7a1
// declared property setter: - (void)setSubtext:(id)subtext;	// 0x37b7d9
// declared property getter: - (id)subtext;	// 0x37b7c9
- (void)wasPushed;	// 0x37b681
@end

