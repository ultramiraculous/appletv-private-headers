/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class CADisplay, BRDisplayMode, NSTimer, NSString, NSArray, ATVBSRLayer;

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
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x13f521
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x13f5a5
- (id)init;	// 0x13f5fd
- (void)_availableModesChanged;	// 0x140a49
- (id)_countdownString;	// 0x140521
- (BOOL)_executeDisplayChangeEvent;	// 0x1405e9
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x13ff79
- (id)_nextModeToTry;	// 0x140419
- (void)_playResolutionSwitchFailedSound;	// 0x1409d1
- (void)_restoreOriginalModeAndPopController;	// 0x1408f1
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x1402cd
- (void)_timerCallback:(id)callback;	// 0x140585
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x140241
- (BOOL)brEventAction:(id)action;	// 0x13fa45
- (void)dealloc;	// 0x13f605
- (float)heightForRow:(long)row;	// 0x13fe01
- (long)itemCount;	// 0x13fdc5
- (id)itemForRow:(long)row;	// 0x13fce9
- (void)itemSelected:(long)selected;	// 0x13fae1
- (void)layoutSubcontrols;	// 0x13f6e1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x13fe09
- (BOOL)rowSelectable:(long)selectable;	// 0x13fe05
- (id)titleForRow:(long)row;	// 0x13fbd9
- (void)wasPopped;	// 0x13f981
- (void)wasPushed;	// 0x13f7ed
@end
