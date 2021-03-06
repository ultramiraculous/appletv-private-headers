/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class NSString, NSArray, BRDisplayMode, NSTimer, ATVBSRLayer, CADisplay;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
	id _completionBlock;	// 144 = 0x90
	ATVBSRLayer *_bsrControl;	// 148 = 0x94
	int _selectionKind;	// 152 = 0x98
	BRDisplayMode *_originalMode;	// 156 = 0x9c
	BRDisplayMode *_failedMode;	// 160 = 0xa0
	BOOL _originalModeWasAuto;	// 164 = 0xa4
	CADisplay *_mainDisplay;	// 168 = 0xa8
	NSString *_mainDisplayUniqueID;	// 172 = 0xac
	NSArray *_listOfResolutionsToTry;	// 176 = 0xb0
	NSTimer *_modeTimer;	// 180 = 0xb4
	int _secondsLeftBeforeNextDisplayMode;	// 184 = 0xb8
	int _attemptedModeNumber;	// 188 = 0xbc
	int _numberOfBSRAttempts;	// 192 = 0xc0
	BOOL _isBSRController;	// 196 = 0xc4
	int _result;	// 200 = 0xc8
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0xf174d
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0xf17d1
- (id)init;	// 0xf1829
- (void)_availableModesChanged;	// 0xf2c49
- (id)_countdownString;	// 0xf2711
- (BOOL)_executeDisplayChangeEvent;	// 0xf27d9
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0xf216d
- (id)_nextModeToTry;	// 0xf2605
- (void)_playResolutionSwitchFailedSound;	// 0xf2bc5
- (void)_restoreOriginalModeAndPopController;	// 0xf2ae5
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0xf24b9
- (void)_timerCallback:(id)callback;	// 0xf2775
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0xf242d
- (BOOL)brEventAction:(id)action;	// 0xf1c7d
- (void)dealloc;	// 0xf1831
- (float)heightForRow:(long)row;	// 0xf1ff5
- (long)itemCount;	// 0xf1fb9
- (id)itemForRow:(long)row;	// 0xf1edd
- (void)itemSelected:(long)selected;	// 0xf1d1d
- (void)layoutSubcontrols;	// 0xf190d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xf1ffd
- (BOOL)rowSelectable:(long)selectable;	// 0xf1ff9
- (id)titleForRow:(long)row;	// 0xf1e09
- (void)wasPopped;	// 0xf1bb9
- (void)wasPushed;	// 0xf1a25
@end

