/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UITableViewController.h> // Unknown library
#import "TLVibrationPickerTableViewCellDelegate.h"
#import "TLVibrationRecorderViewControllerDelegate.h"

@class TLVibrationManager, NSIndexPath, NSTimer, NSArray, TLVibratorController, NSString;
@protocol TLVibrationPickerViewControllerDelegate;

@interface TLVibrationPickerViewController : UITableViewController <TLVibrationPickerTableViewCellDelegate, TLVibrationRecorderViewControllerDelegate> {
	unsigned _vibrationType;	// 200 = 0xc8
	BOOL _showsDefault;	// 204 = 0xcc
	BOOL _showsUserGenerated;	// 205 = 0xcd
	BOOL _showsNone;	// 206 = 0xce
	BOOL _showsNothingSelected;	// 207 = 0xcf
	BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;	// 208 = 0xd0
	BOOL _allowsDeletingCurrentSystemVibration;	// 209 = 0xd1
	NSString *_noneString;	// 212 = 0xd4
	BOOL _useVerboseSectionTitles;	// 216 = 0xd8
	unsigned _numberOfPrecedingSections;	// 220 = 0xdc
	NSIndexPath *_selectedVibrationIndexPath;	// 224 = 0xe0
	BOOL _canEnterEditingMode;	// 228 = 0xe4
	BOOL _vibrating;	// 229 = 0xe5
	BOOL _viewHasAppearedAtLeastOnce;	// 230 = 0xe6
	BOOL _isCallingParentViewController;	// 231 = 0xe7
	BOOL _swipeToDeleteMode;	// 232 = 0xe8
	BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;	// 233 = 0xe9
	TLVibrationManager *_vibrationManager;	// 236 = 0xec
	TLVibratorController *_vibratorController;	// 240 = 0xf0
	id<TLVibrationPickerViewControllerDelegate> _delegate;	// 244 = 0xf4
	NSTimer *_vibrationShouldStopTimer;	// 248 = 0xf8
	NSArray *_sortedVibrationIdentifiers;	// 252 = 0xfc
	NSArray *_sortedUserGeneratedVibrationIdentifiers;	// 256 = 0x100
}
@property(assign, nonatomic, setter=_setNumberOfPrecedingSections:) unsigned _numberOfPrecedingSections;	// G=0x35cc6801; S=0x35cc6811; @synthesize
@property(readonly, assign, nonatomic) int _sectionForDefaultGroup;	// G=0x35cc4919; 
@property(readonly, assign, nonatomic) int _sectionForNoneGroup;	// G=0x35cc4a0d; 
@property(readonly, assign, nonatomic) int _sectionForSystemGroup;	// G=0x35cc4965; 
@property(readonly, assign, nonatomic) int _sectionForUserGeneratedGroup;	// G=0x35cc49b1; 
@property(retain, nonatomic, setter=_setSelectedVibrationIndexPath:) NSIndexPath *_selectedVibrationIndexPath;	// G=0x35cc37d9; S=0x35cc380d; 
@property(readonly, assign, nonatomic) BOOL _showsOnlyEditableSections;	// G=0x35cc3869; 
@property(readonly, assign, nonatomic) NSArray *_sortedUserGeneratedVibrationIdentifiers;	// G=0x35cc3de1; 
@property(readonly, assign, nonatomic) NSArray *_sortedVibrationIdentifiers;	// G=0x35cc3d79; 
@property(assign, nonatomic, setter=_setUseVerboseSectionTitles:) BOOL _useVerboseSectionTitles;	// G=0x35cc6821; S=0x35cc6831; @synthesize
@property(assign, nonatomic) BOOL allowsDeletingCurrentSystemVibration;	// G=0x35cc67e1; S=0x35cc67f1; @synthesize=_allowsDeletingCurrentSystemVibration
@property(retain, nonatomic, setter=setAVController:) id avController;	// G=0x35cc325d; S=0x35cc327d; 
@property(assign, nonatomic) BOOL canEnterEditingMode;	// G=0x35cc3445; S=0x35cc346d; @synthesize=_canEnterEditingMode
@property(readonly, assign, nonatomic) float contentHeight;	// G=0x35cc34bd; 
@property(assign, nonatomic) id<TLVibrationPickerViewControllerDelegate> delegate;	// G=0x35cc6791; S=0x35cc67a1; @synthesize=_delegate
@property(retain, nonatomic) NSString *noneString;	// G=0x35cc67b1; S=0x35cc329d; @synthesize=_noneString
@property(retain, nonatomic) NSString *selectedVibrationIdentifier;	// G=0x35cc3501; S=0x35cc3549; 
@property(assign, nonatomic) BOOL showsEditButtonAtRightSideOfCurrentNavigationController;	// G=0x35cc67d1; S=0x35cc3419; @synthesize=_showsEditButtonAtRightSideOfCurrentNavigationController
@property(assign, nonatomic) BOOL showsNothingSelected;	// G=0x35cc67c1; S=0x35cc3399; @synthesize=_showsNothingSelected
- (id)initWithStyle:(int)style;	// 0x35cc2f75
- (id)initWithVibrationType:(unsigned)vibrationType avController:(id)controller showsDefault:(BOOL)aDefault showsUserGenerated:(BOOL)generated showsNone:(BOOL)none;	// 0x35cc2f9d
- (id)_actualIndexPathFromNonEditingIndexPath:(id)nonEditingIndexPath;	// 0x35cc371d
- (id)_adjustedNameForVibrationWithDesiredName:(id)desiredName vibrationIdentifier:(id)identifier;	// 0x35cc4451
- (void)_handleError:(id)error;	// 0x35cc4915
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x35cc47b5
- (id)_identifierOfVibrationAtIndexPath:(id)indexPath;	// 0x35cc3ec9
- (id)_indexPathForVibrationWithIdentifier:(id)identifier;	// 0x35cc4085
- (int)_nonAdjustedNumberOfSectionsInTableView:(id)tableView;	// 0x35cc4fd1
- (id)_nonEditingIndexPathFromActualIndexPath:(id)actualIndexPath;	// 0x35cc3665
// declared property getter: - (unsigned)_numberOfPrecedingSections;	// 0x35cc6801
- (void)_processSelectionOfVibrationWithIdentifier:(id)identifier;	// 0x35cc4209
// declared property getter: - (int)_sectionForDefaultGroup;	// 0x35cc4919
// declared property getter: - (int)_sectionForNoneGroup;	// 0x35cc4a0d
// declared property getter: - (int)_sectionForSystemGroup;	// 0x35cc4965
// declared property getter: - (int)_sectionForUserGeneratedGroup;	// 0x35cc49b1
// declared property getter: - (id)_selectedVibrationIndexPath;	// 0x35cc37d9
// declared property setter: - (void)_setNumberOfPrecedingSections:(unsigned)precedingSections;	// 0x35cc6811
- (void)_setSelectedVibrationIdentifier:(id)identifier processSelectionOfVibrationIdentifier:(BOOL)vibrationIdentifier;	// 0x35cc355d
// declared property setter: - (void)_setSelectedVibrationIndexPath:(id)path;	// 0x35cc380d
// declared property setter: - (void)_setUseVerboseSectionTitles:(BOOL)titles;	// 0x35cc6831
// declared property getter: - (BOOL)_showsOnlyEditableSections;	// 0x35cc3869
- (id)_sortedArrayWithVibrationIdentifiers:(id)vibrationIdentifiers allowsDuplicateVibrationNames:(BOOL)names;	// 0x35cc3a49
// declared property getter: - (id)_sortedUserGeneratedVibrationIdentifiers;	// 0x35cc3de1
// declared property getter: - (id)_sortedVibrationIdentifiers;	// 0x35cc3d79
- (void)_startVibratingWithVibrationIdentifier:(id)vibrationIdentifier;	// 0x35cc5cb5
- (void)_updateEditButtonItem;	// 0x35cc4261
- (void)_updateEditButtonItemWithAnimation:(BOOL)animation;	// 0x35cc42ad
- (void)_updateSelectionStyleForCell:(id)cell indexPath:(id)path;	// 0x35cc4359
// declared property getter: - (BOOL)_useVerboseSectionTitles;	// 0x35cc6821
// declared property getter: - (BOOL)allowsDeletingCurrentSystemVibration;	// 0x35cc67e1
// declared property getter: - (id)avController;	// 0x35cc325d
// declared property getter: - (BOOL)canEnterEditingMode;	// 0x35cc3445
// declared property getter: - (float)contentHeight;	// 0x35cc34bd
- (void)dealloc;	// 0x35cc317d
// declared property getter: - (id)delegate;	// 0x35cc6791
- (void)finishedWithPicker;	// 0x35cc6175
// declared property getter: - (id)noneString;	// 0x35cc67b1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35cc503d
// declared property getter: - (id)selectedVibrationIdentifier;	// 0x35cc3501
// declared property setter: - (void)setAVController:(id)controller;	// 0x35cc327d
// declared property setter: - (void)setAllowsDeletingCurrentSystemVibration:(BOOL)vibration;	// 0x35cc67f1
// declared property setter: - (void)setCanEnterEditingMode:(BOOL)mode;	// 0x35cc346d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35cc67a1
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x35cc61b1
// declared property setter: - (void)setNoneString:(id)string;	// 0x35cc329d
// declared property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x35cc3549
// declared property setter: - (void)setShowsEditButtonAtRightSideOfCurrentNavigationController:(BOOL)currentNavigationController;	// 0x35cc3419
// declared property setter: - (void)setShowsNothingSelected:(BOOL)selected;	// 0x35cc3399
// declared property getter: - (BOOL)showsEditButtonAtRightSideOfCurrentNavigationController;	// 0x35cc67d1
// declared property getter: - (BOOL)showsNothingSelected;	// 0x35cc67c1
- (void)stopVibrating;	// 0x35cc5ea5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35cc4a79
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x35cc5121
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x35cc59c9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35cc54fd
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x35cc58b9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35cc5065
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x35cc535d
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x35cc59a5
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x35cc546d
- (void)vibrationPickerTableViewCell:(id)cell endedEditingWithText:(id)text;	// 0x35cc5f0d
- (void)vibrationRecorderViewController:(id)controller didFinishRecordingVibrationPattern:(id)pattern name:(id)name;	// 0x35cc59f9
- (void)viewDidAppear:(BOOL)view;	// 0x35cc3979
- (void)viewWillAppear:(BOOL)view;	// 0x35cc389d
- (void)viewWillDisappear:(BOOL)view;	// 0x35cc39bd
@end

