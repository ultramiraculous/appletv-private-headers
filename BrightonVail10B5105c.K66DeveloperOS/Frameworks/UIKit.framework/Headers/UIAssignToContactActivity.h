/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIActivity.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class UIImage, ABPeoplePickerNavigationController, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
	UIImage *_image;	// 8 = 0x8
	void *_person;	// 12 = 0xc
	UIImagePickerController *_imagePickerController;	// 16 = 0x10
	ABPeoplePickerNavigationController *_peoplePicker;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *image;	// G=0x349a35ed; S=0x349a35fd; @synthesize=_image
@property(retain, nonatomic) UIImagePickerController *imagePickerController;	// G=0x349a362d; S=0x349a363d; @synthesize=_imagePickerController
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePicker;	// G=0x349a364d; S=0x349a365d; @synthesize=_peoplePicker
@property(assign, nonatomic) void *person;	// G=0x349a360d; S=0x349a361d; @synthesize=_person
- (id)_activityImage;	// 0x349a2e1d
- (void)_cleanup;	// 0x349a311d
- (id)_embeddedActivityViewController;	// 0x349a3029
- (id)activityTitle;	// 0x349a2e91
- (id)activityType;	// 0x346d1cc5
- (id)activityViewController;	// 0x349a30a5
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x349a2ead
- (void)dealloc;	// 0x349a2d91
// declared property getter: - (id)image;	// 0x349a35ed
// declared property getter: - (id)imagePickerController;	// 0x349a362d
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;	// 0x349a33b1
- (void)imagePickerControllerDidCancel:(id)imagePickerController;	// 0x349a35d9
// declared property getter: - (id)peoplePicker;	// 0x349a364d
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person;	// 0x349a31d1
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x349a33ad
- (void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;	// 0x349a31bd
// declared property getter: - (void *)person;	// 0x349a360d
- (void)prepareWithActivityItems:(id)activityItems;	// 0x349a2ed1
// declared property setter: - (void)setImage:(id)image;	// 0x349a35fd
// declared property setter: - (void)setImagePickerController:(id)controller;	// 0x349a363d
// declared property setter: - (void)setPeoplePicker:(id)picker;	// 0x349a365d
// declared property setter: - (void)setPerson:(void *)person;	// 0x349a361d
@end

