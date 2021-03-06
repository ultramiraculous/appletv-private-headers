/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class BRFocusableImageControl, BRControl, NSTimer, NSString, BRTextControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuController : BRMenuController {
	BRControl *_previewControl;	// 144 = 0x90
	BRControl *_previewContainer;	// 148 = 0x94
	NSString *_previewControlItemHash;	// 152 = 0x98
	BRFocusableImageControl *_actionControl;	// 156 = 0x9c
	BRWaitSpinnerControl *_spinner;	// 160 = 0xa0
	float _controlDelay;	// 164 = 0xa4
	NSTimer *_controlDelayTimer;	// 168 = 0xa8
	BRTextControl *_noContentMessageControl;	// 172 = 0xac
}
@property(retain) id noContentMessage;	// G=0x29b43d; S=0x29b369; converted property
@property(assign) BOOL showSpinner;	// G=0x29aced; S=0x29ac45; converted property
- (id)init;	// 0x29a9d9
- (void)_cleanupControlDelayTimer;	// 0x29bfa1
- (void)_controlDelayTimerHandler:(id)handler;	// 0x29bfd5
- (void)_playstateChanged;	// 0x29bff5
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x29beed
- (void)_scrollWillStart:(id)_scroll;	// 0x29bebd
- (void)_setDislaysActionControl:(BOOL)control;	// 0x29bb55
- (void)_updateActionControl;	// 0x29bd5d
- (void)_updateControls;	// 0x29bb25
- (void)_updateControlsWithDelay;	// 0x29befd
- (void)_updatePreview;	// 0x29b8d5
- (id)accessibilityScreenContent;	// 0x29b7b5
- (id)actionItemAtIndex:(long)index;	// 0x29b365
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x29b361
- (BOOL)allowUnplayedMark;	// 0x29b315
- (BOOL)brEventAction:(id)action;	// 0x29b16d
- (void)clearPreviewController;	// 0x29b2b1
- (void)controlWasActivated;	// 0x29b569
- (void)controlWasDeactivated;	// 0x29b6b1
- (void)dealloc;	// 0x29ab65
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x29b081
- (void)layoutSubcontrols;	// 0x29ad05
// converted property getter: - (id)noContentMessage;	// 0x29b43d
- (id)previewControlForItem:(long)item;	// 0x29b7d5
- (void)refreshControllerForModelUpdate;	// 0x29b475
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x29b4b9
- (void)resetPreviewController;	// 0x29b271
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x29b369
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x29ac45
// converted property getter: - (BOOL)showSpinner;	// 0x29aced
- (void)updatePreviewController;	// 0x29b261
@end

