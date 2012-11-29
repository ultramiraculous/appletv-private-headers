/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPickerViewController.h"
#import "AddressBookUI-Structs.h"

@class UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController {
	id _vibrationPickerViewController;	// 236 = 0xec
	BOOL _canEnterEditingMode;	// 240 = 0xf0
	UIBarButtonItem *_saveButton;	// 244 = 0xf4
}
@property(retain, nonatomic, setter=_setSaveButton:) UIBarButtonItem *_saveButton;	// G=0x3768a485; S=0x3768a495; @synthesize
@property(readonly, assign, nonatomic) id vibrationPickerViewController;	// G=0x3768a0f1; 
- (id)initWithVibrationType:(int)vibrationType;	// 0x37689ef5
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3768a395
// declared property getter: - (id)_saveButton;	// 0x3768a485
// declared property setter: - (void)_setSaveButton:(id)button;	// 0x3768a495
- (void)_vibrationSaveButtonClicked:(id)clicked;	// 0x3768a445
- (float)ab_heightToFitForViewInPopoverView;	// 0x3768a249
- (void)dealloc;	// 0x3768a07d
- (void)loadView;	// 0x3768a101
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x3768a3a9
// declared property getter: - (id)vibrationPickerViewController;	// 0x3768a0f1
@end
