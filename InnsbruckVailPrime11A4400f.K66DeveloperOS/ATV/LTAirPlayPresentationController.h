/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface LTAirPlayPresentationController : BRController {
	BRControl *_presentationControl;	// 100 = 0x64
	BRWaitPromptControl *_waitPrompt;	// 104 = 0x68
	int _stopCount;	// 108 = 0x6c
	double _savedAutoPresentTimeout;	// 112 = 0x70
	NSTimer *_backgroundTaskHoldoffTimer;	// 120 = 0x78
	BOOL _suspended;	// 124 = 0x7c
}
- (id)init;	// 0x4232d5
- (void).cxx_destruct;	// 0x423ab9
- (void)_backgroundTaskHoldoffTimer:(id)timer;	// 0x423a9d
- (BOOL)brEventAction:(id)action;	// 0x423721
- (void)controlWasActivated;	// 0x423401
- (void)controlWasDeactivated;	// 0x423581
- (void)dealloc;	// 0x423369
- (void)hideProgress;	// 0x423a3d
- (id)presentationLayer;	// 0x423925
- (void)resume;	// 0x423a89
- (void)showProgress;	// 0x423995
- (void)stopPresentation;	// 0x423945
- (void)suspend;	// 0x423a75
- (void)wasPopped;	// 0x4236d1
@end
