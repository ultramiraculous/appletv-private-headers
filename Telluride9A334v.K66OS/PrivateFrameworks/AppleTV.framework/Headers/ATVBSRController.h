/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSTimer, ATVBSRLayer, BRDisplayMode, NSArray, CADisplay, NSString;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
@private
	id _completionBlock;	// 124 = 0x7c
	ATVBSRLayer *_bsrControl;	// 128 = 0x80
	int _selectionKind;	// 132 = 0x84
	BRDisplayMode *_originalMode;	// 136 = 0x88
	BRDisplayMode *_failedMode;	// 140 = 0x8c
	BOOL _originalModeWasAuto;	// 144 = 0x90
	CADisplay *_mainDisplay;	// 148 = 0x94
	NSString *_mainDisplayUniqueID;	// 152 = 0x98
	NSArray *_listOfResolutionsToTry;	// 156 = 0x9c
	NSTimer *_modeTimer;	// 160 = 0xa0
	int _secondsLeftBeforeNextDisplayMode;	// 164 = 0xa4
	int _attemptedModeNumber;	// 168 = 0xa8
	int _numberOfBSRAttempts;	// 172 = 0xac
	BOOL _isBSRController;	// 176 = 0xb0
	int _result;	// 180 = 0xb4
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x330bd8d5
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x330bd959
- (id)init;	// 0x330bd9b1
- (void)_availableModesChanged;	// 0x330beddd
- (id)_countdownString;	// 0x330be8d5
- (BOOL)_executeDisplayChangeEvent;	// 0x330be999
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x330be331
- (id)_nextModeToTry;	// 0x330be7d5
- (void)_playResolutionSwitchFailedSound;	// 0x330bed69
- (void)_restoreOriginalModeAndPopController;	// 0x330bec91
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x330be689
- (void)_timerCallback:(id)callback;	// 0x330be939
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x330be5f5
- (BOOL)brEventAction:(id)action;	// 0x330bddf1
- (void)dealloc;	// 0x330bd9b9
- (float)heightForRow:(long)row;	// 0x330be1a1
- (long)itemCount;	// 0x330be165
- (id)itemForRow:(long)row;	// 0x330be089
- (void)itemSelected:(long)selected;	// 0x330bde8d
- (void)layoutSubcontrols;	// 0x330bda95
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x330be1a9
- (BOOL)rowSelectable:(long)selectable;	// 0x330be1a5
- (id)titleForRow:(long)row;	// 0x330bdf7d
- (void)wasPopped;	// 0x330bdd29
- (void)wasPushed;	// 0x330bdb95
@end

