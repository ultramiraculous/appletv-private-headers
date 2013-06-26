/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TPSimpleNumberPadDelegate.h"
#import <UIKit/UIViewController.h>

@class UILabel, TPSimpleNumberPad, NSString, TPPasscodeView;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {
	BOOL _confirmPIN;	// 306 = 0x132
	id<TPSetPINViewControllerDelegate> _delegate;	// 308 = 0x134
	NSString *_promptTextForOldPIN;	// 312 = 0x138
	NSString *_promptTextForNewPIN;	// 316 = 0x13c
	NSString *_promptTextForConfirmingNewPIN;	// 320 = 0x140
	NSString *_promptTextForSavingPIN;	// 324 = 0x144
	int _initialState;	// 328 = 0x148
	int _state;	// 332 = 0x14c
	unsigned _minPINLength;	// 336 = 0x150
	unsigned _maxPINLength;	// 340 = 0x154
	UILabel *_statusLabel;	// 344 = 0x158
	TPPasscodeView *_passcodeView;	// 348 = 0x15c
	TPSimpleNumberPad *_numberPad;	// 352 = 0x160
	NSString *_oldPIN;	// 356 = 0x164
	NSString *_unconfirmedPIN;	// 360 = 0x168
}
@property(assign) BOOL confirmPIN;	// G=0x329abaf5; S=0x329abb0d; @synthesize=_confirmPIN
@property(assign) id<TPSetPINViewControllerDelegate> delegate;	// G=0x329ab9f5; S=0x329aba09; @synthesize=_delegate
@property(assign) int initialState;	// G=0x329aba61; S=0x329aba75; @synthesize=_initialState
@property(assign) unsigned maxPINLength;	// G=0x329abac9; S=0x329abadd; @synthesize=_maxPINLength
@property(assign) unsigned minPINLength;	// G=0x329aba9d; S=0x329abab1; @synthesize=_minPINLength
@property(retain) TPSimpleNumberPad *numberPad;	// G=0x329abbad; S=0x329abbc1; @synthesize=_numberPad
@property(retain) NSString *oldPIN;	// G=0x329abbf1; S=0x329abc05; @synthesize=_oldPIN
@property(retain) TPPasscodeView *passcodeView;	// G=0x329abb69; S=0x329abb7d; @synthesize=_passcodeView
@property(retain, nonatomic) NSString *promptTextForConfirmingNewPIN;	// G=0x329aba41; S=0x329aaf61; @synthesize=_promptTextForConfirmingNewPIN
@property(retain, nonatomic) NSString *promptTextForNewPIN;	// G=0x329aba31; S=0x329aaf41; @synthesize=_promptTextForNewPIN
@property(retain, nonatomic) NSString *promptTextForOldPIN;	// G=0x329aba21; S=0x329aaf21; @synthesize=_promptTextForOldPIN
@property(retain, nonatomic) NSString *promptTextForSavingPIN;	// G=0x329aba51; S=0x329aaf81; @synthesize=_promptTextForSavingPIN
@property(assign, nonatomic) int state;	// G=0x329aba8d; S=0x329ab525; @synthesize=_state
@property(retain) UILabel *statusLabel;	// G=0x329abb25; S=0x329abb39; @synthesize=_statusLabel
@property(retain) NSString *unconfirmedPIN;	// G=0x329abc35; S=0x329abc49; @synthesize=_unconfirmedPIN
- (id)init;	// 0x329a9ce1
- (id)initForChangePINWithMinLength:(unsigned)minLength maxLength:(unsigned)length confirmPIN:(BOOL)pin;	// 0x329a9f81
- (id)initForNewPINWithMinLength:(unsigned)minLength maxLength:(unsigned)length confirmPIN:(BOOL)pin;	// 0x329a9f49
- (void)_cancelButtonTapped;	// 0x329ab321
- (void)_doneButtonTapped;	// 0x329aafa1
- (id)_initForMinLength:(unsigned)minLength maxLength:(unsigned)length confirmPIN:(BOOL)pin;	// 0x329a9d41
- (void)_setPromptText:(id)text oldPromptTextPointer:(id *)pointer;	// 0x329ab54d
- (void)_updateDeleteAllowed;	// 0x329ab5dd
- (void)_updateNavBarButtons;	// 0x329ab649
- (void)_updateStatusLabel;	// 0x329ab725
- (void)_updateUIForStateChange;	// 0x329ab96d
// declared property getter: - (BOOL)confirmPIN;	// 0x329abaf5
- (void)dealloc;	// 0x329a9fb9
// declared property getter: - (id)delegate;	// 0x329ab9f5
// declared property getter: - (int)initialState;	// 0x329aba61
- (void)loadView;	// 0x329aa0bd
// declared property getter: - (unsigned)maxPINLength;	// 0x329abac9
// declared property getter: - (unsigned)minPINLength;	// 0x329aba9d
// declared property getter: - (id)numberPad;	// 0x329abbad
// declared property getter: - (id)oldPIN;	// 0x329abbf1
// declared property getter: - (id)passcodeView;	// 0x329abb69
// declared property getter: - (id)promptTextForConfirmingNewPIN;	// 0x329aba41
// declared property getter: - (id)promptTextForNewPIN;	// 0x329aba31
// declared property getter: - (id)promptTextForOldPIN;	// 0x329aba21
// declared property getter: - (id)promptTextForSavingPIN;	// 0x329aba51
- (void)resetWithErrorPrompt:(id)errorPrompt;	// 0x329aad81
- (void)resetWithErrorPrompt:(id)errorPrompt title:(id)title;	// 0x329aad95
// declared property setter: - (void)setConfirmPIN:(BOOL)pin;	// 0x329abb0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x329aba09
// declared property setter: - (void)setInitialState:(int)state;	// 0x329aba75
// declared property setter: - (void)setMaxPINLength:(unsigned)length;	// 0x329abadd
// declared property setter: - (void)setMinPINLength:(unsigned)length;	// 0x329abab1
// declared property setter: - (void)setNumberPad:(id)pad;	// 0x329abbc1
// declared property setter: - (void)setOldPIN:(id)pin;	// 0x329abc05
// declared property setter: - (void)setPasscodeView:(id)view;	// 0x329abb7d
// declared property setter: - (void)setPromptTextForConfirmingNewPIN:(id)confirmingNewPIN;	// 0x329aaf61
// declared property setter: - (void)setPromptTextForNewPIN:(id)newPIN;	// 0x329aaf41
// declared property setter: - (void)setPromptTextForOldPIN:(id)oldPIN;	// 0x329aaf21
// declared property setter: - (void)setPromptTextForSavingPIN:(id)savingPIN;	// 0x329aaf81
// declared property setter: - (void)setState:(int)state;	// 0x329ab525
// declared property setter: - (void)setStatusLabel:(id)label;	// 0x329abb39
// declared property setter: - (void)setUnconfirmedPIN:(id)pin;	// 0x329abc49
- (void)simpleNumberPad:(id)pad buttonPressedWithCharacter:(id)character;	// 0x329ab365
- (void)simpleNumberPadDeletePressed:(id)pressed;	// 0x329ab461
// declared property getter: - (int)state;	// 0x329aba8d
// declared property getter: - (id)statusLabel;	// 0x329abb25
// declared property getter: - (id)unconfirmedPIN;	// 0x329abc35
- (BOOL)wantsFullScreenLayout;	// 0x329aad7d
@end
