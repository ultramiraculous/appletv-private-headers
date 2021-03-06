/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "ToneLibrary-Structs.h"
#import "UITableViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSIndexPath, UITableView, TLVibrationPickerViewController, NSString, TLToneManager;

@interface TLToneTableController : NSObject <TLVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSMutableArray *_ringtoneGroupLists;	// 8 = 0x8
	NSMutableArray *_ringtoneGroupNames;	// 12 = 0xc
	NSIndexPath *_selectedRingtoneIndexPath;	// 16 = 0x10
	BOOL _showsNone;	// 20 = 0x14
	BOOL _showsDefault;	// 21 = 0x15
	NSString *_noneString;	// 24 = 0x18
	NSString *_noneIdentifier;	// 28 = 0x1c
	NSString *_defaultIdentifier;	// 32 = 0x20
	BOOL _showsNothingSelected;	// 36 = 0x24
	BOOL _showsRingtonesStore;	// 37 = 0x25
	BOOL _noneAtTop;	// 38 = 0x26
	UITableView *_tableView;	// 40 = 0x28
	BOOL _showsVibrations;	// 44 = 0x2c
	BOOL _showsVibrationsAlongsideTones;	// 45 = 0x2d
	BOOL _showsDefaultVibration;	// 46 = 0x2e
	BOOL _showsUserGeneratedVibrations;	// 47 = 0x2f
	BOOL _showsNoneVibration;	// 48 = 0x30
	BOOL _showsNoVibrationSelected;	// 49 = 0x31
	NSString *_selectedVibrationIdentifier;	// 52 = 0x34
	TLVibrationPickerViewController *_vibrationPickerViewController;	// 56 = 0x38
	TLToneManager *_ringtoneManager;	// 60 = 0x3c
	id _avController;	// 64 = 0x40
	BOOL _startedInteruption;	// 68 = 0x44
	BOOL _customAVController;	// 69 = 0x45
	BOOL _tonePicker;	// 70 = 0x46
	unsigned _filter;	// 72 = 0x48
	unsigned _systemRingtoneStartIndex;	// 76 = 0x4c
}
@property(readonly, retain) id avController;	// G=0x304c37d1; converted property
@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier;	// G=0x304c3fad; S=0x304c3fbd; @synthesize=_defaultIdentifier
@property(readonly, retain) TLToneManager *ringtoneManager;	// G=0x304c16e9; converted property
@property(retain) id selectedRingtoneIdentifier;	// G=0x304c16c9; S=0x304c1531; converted property
@property(retain) NSString *selectedVibrationIdentifier;	// G=0x304c1ce5; S=0x304c1da9; converted property
- (id)init;	// 0x304bfc3d
- (id)initWithAVController:(id)avcontroller;	// 0x304bfc51
- (id)initWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x304bfc71
- (void)_setRingtoneManager:(id)manager;	// 0x304c3f6d
- (void)_setSelectedVibrationIdentifierTableViewUpdateDidComplete:(id)_setSelectedVibrationIdentifierTableViewUpdate;	// 0x304c1cf5
- (BOOL)_showsDefaultVibration;	// 0x304c222d
- (BOOL)_showsNoneVibration;	// 0x304c224d
- (BOOL)_showsUserGeneratedVibrations;	// 0x304c223d
- (BOOL)_showsVibrations;	// 0x304c2179
- (BOOL)_showsVibrationsSwitchIsOn;	// 0x304c21c9
- (void)_stopPlayingButKeepVibrating:(BOOL)vibrating;	// 0x304c3d89
- (void)_stopPlayingWithFadeOut:(BOOL)fadeOut shouldKeepVibrating:(BOOL)vibrating;	// 0x304c3c49
- (void)_switchValueDidChange:(id)_switchValue;	// 0x304c3eb1
- (id)_vibrationPickerViewController;	// 0x304c2279
- (void)addRingtonesInDirectory:(id)directory toArray:(id)array fileExtension:(id)extension;	// 0x304bffd9
// converted property getter: - (id)avController;	// 0x304c37d1
- (int)compareRingtoneWithIdentifier:(id)identifier toRingtoneWithIdentifier:(id)identifier2;	// 0x304c0109
- (id)copyCurrentPhoneRingtoneIdentifier;	// 0x304c24cd
- (id)copyCurrentPhoneRingtoneName;	// 0x304c24ad
- (id)copyCurrentPhoneTextToneIdentifier;	// 0x304c250d
- (id)copyCurrentPhoneTextToneName;	// 0x304c24ed
- (void)dealloc;	// 0x304bfe61
// declared property getter: - (id)defaultIdentifier;	// 0x304c3fad
- (void)finishedWithPicker;	// 0x304c3db1
- (id)identifierOfRingtoneAtIndexPath:(id)indexPath;	// 0x304c04b5
- (id)indexPathForDefaultGroup;	// 0x304c0749
- (id)indexPathForFirstRingtoneGroup;	// 0x304c07c9
- (id)indexPathForNoneGroup;	// 0x304c0875
- (id)indexPathForRingtoneWithIdentifier:(id)identifier;	// 0x304c0611
- (id)indexPathForRingtonesStoreGroup;	// 0x304c070d
- (id)indexPathForSelectedRingtone;	// 0x304c09c9
- (id)indexPathForVibrationGroup;	// 0x304c0915
- (BOOL)isDefaultGroupAtIndexPath:(id)indexPath;	// 0x304c01dd
- (BOOL)isDividerAtIndexPath:(id)indexPath;	// 0x304c0485
- (BOOL)isNoneGroupAtIndexPath:(id)indexPath;	// 0x304c0271
- (BOOL)isOtherVibrationGroupWithSection:(int)section;	// 0x304c0409
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)indexPath;	// 0x304c018d
- (BOOL)isVibrationGroupAtIndexPath:(id)indexPath;	// 0x304c0335
- (id)loadTextTonesFromPlist;	// 0x304c09d9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x304c2c8d
- (void)playRingtoneWithIdentifier:(id)identifier;	// 0x304c39bd
- (void)processNewRingtoneSelected:(id)selected;	// 0x304c2435
- (void)reloadRingtones;	// 0x304c0bad
// converted property getter: - (id)ringtoneManager;	// 0x304c16e9
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x304c16c9
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x304c1ce5
- (void)setAVController:(id)controller;	// 0x304c36bd
// declared property setter: - (void)setDefaultIdentifier:(id)identifier;	// 0x304c3fbd
- (void)setDelegate:(id)delegate;	// 0x304c14dd
- (void)setNoneAtTop:(BOOL)top;	// 0x304c19f5
- (void)setNoneString:(id)string;	// 0x304c1aa1
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x304c1531
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x304c1da9
- (void)setShowsDefault:(BOOL)aDefault;	// 0x304c17bd
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x304c1b15
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x304c1c81
- (void)setShowsNone:(BOOL)none;	// 0x304c194d
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x304c1c71
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x304c1ae5
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x304c16f9
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x304c1b25
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x304c1af5
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x304c1b05
- (void)setTableView:(id)view;	// 0x304c14ed
- (void)stopPlaying;	// 0x304c3d9d
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x304c3d75
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x304c252d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x304c2fa9
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x304c2f4d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x304c2d79
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x304c345d
- (void)togglePlayWithRingtoneWithIdentifier:(id)identifier;	// 0x304c3959
- (void)vibrationPickerViewController:(id)controller selectedVibrationWithIdentifier:(id)identifier;	// 0x304c3e39
@end

