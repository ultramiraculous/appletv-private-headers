/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class BRTextControl, NSString, NSTimer, BRWaitSpinnerControl, BRControl, BRFocusableImageControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuController : BRMenuController {
	BRControl *_previewControl;	// 140 = 0x8c
	BRControl *_previewContainer;	// 144 = 0x90
	NSString *_previewControlItemHash;	// 148 = 0x94
	BRFocusableImageControl *_actionControl;	// 152 = 0x98
	BRWaitSpinnerControl *_spinner;	// 156 = 0x9c
	float _controlDelay;	// 160 = 0xa0
	NSTimer *_controlDelayTimer;	// 164 = 0xa4
	BRTextControl *_noContentMessageControl;	// 168 = 0xa8
}
@property(retain) id noContentMessage;	// G=0x262601; S=0x26252d; converted property
@property(assign) BOOL showSpinner;	// G=0x261eb1; S=0x261e09; converted property
- (id)init;	// 0x261b9d
- (void)_cleanupControlDelayTimer;	// 0x263165
- (void)_controlDelayTimerHandler:(id)handler;	// 0x263199
- (void)_playstateChanged;	// 0x2631b9
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x2630b1
- (void)_scrollWillStart:(id)_scroll;	// 0x263081
- (void)_setDislaysActionControl:(BOOL)control;	// 0x262d19
- (void)_updateActionControl;	// 0x262f21
- (void)_updateControls;	// 0x262ce9
- (void)_updateControlsWithDelay;	// 0x2630c1
- (void)_updatePreview;	// 0x262a99
- (id)accessibilityScreenContent;	// 0x262979
- (id)actionItemAtIndex:(long)index;	// 0x262529
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x262525
- (BOOL)allowUnplayedMark;	// 0x2624d9
- (BOOL)brEventAction:(id)action;	// 0x262331
- (void)clearPreviewController;	// 0x262475
- (void)controlWasActivated;	// 0x26272d
- (void)controlWasDeactivated;	// 0x262875
- (void)dealloc;	// 0x261d29
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x262245
- (void)layoutSubcontrols;	// 0x261ec9
// converted property getter: - (id)noContentMessage;	// 0x262601
- (id)previewControlForItem:(long)item;	// 0x262999
- (void)refreshControllerForModelUpdate;	// 0x262639
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x26267d
- (void)resetPreviewController;	// 0x262435
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x26252d
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x261e09
// converted property getter: - (BOOL)showSpinner;	// 0x261eb1
- (void)updatePreviewController;	// 0x262425
@end

