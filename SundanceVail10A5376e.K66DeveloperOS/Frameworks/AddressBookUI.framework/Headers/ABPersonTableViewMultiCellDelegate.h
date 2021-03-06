/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentViewUpdateDelegate.h"
#import "ABPersonTableHeaderViewDelegate.h"
#import "ABDatePickerViewControllerDismissDelegate.h"
#import <NSObject.h> // Unknown library

@class ABPersonPickersDelegate, ABPersonTableViewDataSource, ABStyleProvider, UIDatePicker;

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate> {
	UIDatePicker *_datePicker;	// 4 = 0x4
	ABPersonTableViewDataSource *_dataSource;	// 8 = 0x8
	ABStyleProvider *_styleProvider;	// 12 = 0xc
	ABPersonPickersDelegate *_pickersDelegate;	// 16 = 0x10
}
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x31013a7d; S=0x30f99b91; @synthesize=_dataSource
@property(assign, nonatomic) ABPersonPickersDelegate *pickersDelegate;	// G=0x31013a9d; S=0x30f99c61; @synthesize=_pickersDelegate
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x31013a8d; S=0x30f99ba1; @synthesize=_styleProvider
- (BOOL)ABTabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x31013991
- (id)_capitalizedTitleForContentView:(id)contentView;	// 0x31012e65
- (void)_multiCellContentView:(id)view selectedAlert:(id)alert;	// 0x31012a41
- (void)_multiCellContentView:(id)view selectedCountry:(id)country;	// 0x31012399
- (void)_multiCellContentView:(id)view selectedLabel:(id)label;	// 0x31011fad
- (void)_multiCellContentView:(id)view selectedService:(id)service;	// 0x3101272d
- (BOOL)_tableView:(id)view isValidIndexPath:(id)path;	// 0x31013455
// declared property getter: - (id)dataSource;	// 0x31013a7d
- (void)dateField:(id)field delegateDismissDatePicker:(id)picker;	// 0x31013339
- (void)dateField:(id)field delegatePrepareToPresentDatePicker:(id)presentDatePicker;	// 0x31012fc1
- (void)dateField:(id)field delegatePresentDatePicker:(id)picker;	// 0x3101300d
- (BOOL)dateField:(id)field shouldPresentDatePicker:(id)picker;	// 0x31012f69
- (id)datePickerForDateField:(id)dateField;	// 0x31012f05
- (void)datePickerViewControllerWillDisappear:(id)datePickerViewController;	// 0x31013389
- (void)dealloc;	// 0x30fbd995
- (void)multiCellContentView:(id)view didResizeAnimated:(BOOL)animated;	// 0x31011dd5
- (void)multiCellContentView:(id)view entryField:(id)field didUpdateValue:(id)value forKey:(id)key;	// 0x310107a9
- (void)multiCellContentView:(id)view entryFieldDidBeginEditing:(id)entryField;	// 0x31010535
- (void)multiCellContentView:(id)view entryFieldDidEndEditing:(id)entryField;	// 0x31010f55
- (BOOL)multiCellContentView:(id)view entryFieldShouldBeginEditing:(id)entryField;	// 0x31010499
- (void)multiCellContentView:(id)view touchesBeganForView:(id)view2;	// 0x31010385
- (void)multiCellContentView:(id)view touchesCancelledForView:(id)view2;	// 0x31010471
- (void)multiCellContentView:(id)view touchesEndedForView:(id)view2;	// 0x30fc5ef1
- (void)multiCellContentView:(id)view willResizeAnimated:(BOOL)animated;	// 0x31011d61
- (void)multiCellContentViewDidEndEditing:(id)multiCellContentView;	// 0x31011075
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)multiCellContentView;	// 0x31011f85
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)multiCellContentView;	// 0x31011f39
- (void)personTableHeaderView:(id)view imageViewWasSelected:(id)selected;	// 0x310139f1
// declared property getter: - (id)pickersDelegate;	// 0x31013a9d
// declared property setter: - (void)setDataSource:(id)source;	// 0x30f99b91
// declared property setter: - (void)setPickersDelegate:(id)delegate;	// 0x30f99c61
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x30f99ba1
// declared property getter: - (id)styleProvider;	// 0x31013a8d
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x310134d1
@end

