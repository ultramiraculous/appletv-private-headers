/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class ABPersonTableViewActionsDelegate, NSString, ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, UIView, ABPersonViewControllerHelper, NSArray;
@protocol ABStyleProvider, ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
	id _helper;	// 196 = 0xc4
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;	// 200 = 0xc8
	id _reserved;	// 204 = 0xcc
	ABPersonTableViewDataSource *_dataSource;	// 208 = 0xd0
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 212 = 0xd4
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 216 = 0xd8
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x37190b1d; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x3716e879; S=0x3718ee21; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x371700a5; S=0x3716fb9d; 
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;	// G=0x3718f0cd; S=0x3716fb6d; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x3718f171; S=0x3718f145; 
@property(assign, nonatomic) BOOL allowsSendingTextMessage;	// G=0x3718f11d; S=0x3718f0f1; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x3718f079; S=0x3718f0a1; 
@property(copy, nonatomic) NSString *alternateName;	// G=0x3718eead; S=0x3718ee81; 
@property(copy, nonatomic) NSString *attribution;	// G=0x3718f349; S=0x3718f371; 
@property(assign) BOOL badgeEmailPropertiesForMailVIP;	// G=0x3718f86d; S=0x3718f895; converted property
@property(readonly, assign, nonatomic) BOOL canShareContact;	// G=0x3718f46d; 
@property(retain) id customFooterView;	// G=0x3718f5b1; S=0x3718f585; converted property
@property(retain) id customHeaderView;	// G=0x3718f55d; S=0x3718f531; converted property
@property(retain) id customMessageView;	// G=0x3718f025; S=0x3718f04d; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x3716e8a9; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x37170085; S=0x3716f665; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x3718f309; S=0x3718f329; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x3716e899; 
@property(assign, nonatomic) BOOL isLocation;	// G=0x3718f495; S=0x3718f4b9; 
@property(readonly, assign, nonatomic) BOOL isShowingMultipleVCards;	// G=0x3716f685; 
@property(copy, nonatomic) NSString *message;	// G=0x3718ef01; S=0x3718eed5; 
@property(retain) id messageDetail;	// G=0x3718efa9; S=0x3718ef7d; converted property
@property(retain) id messageDetailFont;	// G=0x3718efd1; S=0x3718eff9; converted property
@property(retain) id messageFont;	// G=0x3718ef55; S=0x3718ef29; converted property
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x3718f279; S=0x3716e8b9; 
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;	// G=0x3718f5f9; S=0x3718f5d9; 
@property(retain) id shareLocationSnapshotImage;	// G=0x3718f771; S=0x3718f799; converted property
@property(retain) id shareLocationURL;	// G=0x3718f71d; S=0x3718f745; converted property
@property(retain) id shareMessageBody;	// G=0x3718f675; S=0x3718f69d; converted property
@property(assign) BOOL shareMessageBodyIsHTML;	// G=0x3718f621; S=0x3718f649; converted property
@property(retain) id shareMessageSubject;	// G=0x3718f6c9; S=0x3718f6f1; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x37190b2d; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x3718f2cd; S=0x3718f2a1; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3718ee41; S=0x3718ee61; 
@property(assign, nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;	// G=0x3716fb29; S=0x3716e999; @synthesize=_unknownPersonViewDelegate
@property(retain) id willTweetLocationCallback;	// G=0x3718f7c5; S=0x3718f7ed; converted property
@property(retain) id willWeiboLocationCallback;	// G=0x3718f819; S=0x3718f841; converted property
+ (id)defaultLabelsForProperty:(int)property person:(void *)person addressBook:(void *)book;	// 0x3716e9a9
- (id)init;	// 0x3718e839
- (id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;	// 0x3716e5f1
- (id)initWithStyle:(int)style;	// 0x3716e5d1
- (id)initWithVCardData:(id)vcardData;	// 0x3718eabd
- (void)_addToExistingContacts;	// 0x37190235
- (void)_addUnmergedRecords;	// 0x3718fb21
- (id)_alertSheet;	// 0x3718ebf5
- (BOOL)_allowsAutorotation;	// 0x3718f8c1
- (void)_createNewContacts;	// 0x3718fa9d
- (id)_findMatchingCardsForRecord:(void *)record;	// 0x3718fe2d
- (id)_forwarder;	// 0x3718ec95
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3718f985
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3718f905
- (void)_showCardViewerForIndex:(int)index;	// 0x371908c9
- (void)_showUnmergedContactsAlert;	// 0x3718fbcd
- (id)_unmergedAlertSheet;	// 0x3718ec1d
- (id)_unmergedRecords;	// 0x3718ec45
- (void)_unselectTable;	// 0x37190885
- (id)_vCardProperties;	// 0x3718ebcd
- (id)_vCardTable;	// 0x3718ec6d
- (id)_vCards;	// 0x3716f6b5
- (id)_viewControllerForCardAtIndex:(int)index;	// 0x371904e5
- (int)abViewControllerType;	// 0x3718f61d
- (float)ab_heightToFitForViewInPopoverView;	// 0x37170895
- (void)accessChanged;	// 0x3719058d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x37190415
// declared property getter: - (id)actionsDelegate;	// 0x37190b1d
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x371a5ead
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x371a5dad
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x371a5ddd
// declared property getter: - (void *)addressBook;	// 0x3716e879
// declared property getter: - (BOOL)allowsActions;	// 0x371700a5
// declared property getter: - (BOOL)allowsAddingToAddressBook;	// 0x3718f0cd
// declared property getter: - (BOOL)allowsConferencing;	// 0x3718f171
// declared property getter: - (BOOL)allowsSendingTextMessage;	// 0x3718f11d
// declared property getter: - (BOOL)allowsSharing;	// 0x3718f079
// declared property getter: - (id)alternateName;	// 0x3718eead
- (void)applicationDidResume;	// 0x3718f9ad
// declared property getter: - (id)attribution;	// 0x3718f349
// converted property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x3718f86d
// declared property getter: - (BOOL)canShareContact;	// 0x3718f46d
// converted property getter: - (id)customFooterView;	// 0x3718f5b1
// converted property getter: - (id)customHeaderView;	// 0x3718f55d
// converted property getter: - (id)customMessageView;	// 0x3718f025
// declared property getter: - (id)dataSource;	// 0x3716e8a9
- (void)dealloc;	// 0x37171665
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3718ea01
- (void)dismissAnimated:(BOOL)animated;	// 0x371901d9
// declared property getter: - (void *)displayedPerson;	// 0x37170085
// declared property getter: - (id)displayedProperties;	// 0x3718f309
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x3718e8dd
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x371a5d65
// declared property getter: - (id)helper;	// 0x3716e899
// declared property getter: - (BOOL)isLocation;	// 0x3718f495
// declared property getter: - (BOOL)isShowingMultipleVCards;	// 0x3716f685
- (void)loadView;	// 0x3716fe4d
// declared property getter: - (id)message;	// 0x3718ef01
// converted property getter: - (id)messageDetail;	// 0x3718efa9
// converted property getter: - (id)messageDetailFont;	// 0x3718efd1
// converted property getter: - (id)messageFont;	// 0x3718ef55
- (id)newActionButton;	// 0x371a5e85
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x371905d1
// declared property getter: - (id)personHeaderView;	// 0x3718f279
- (BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x3718f9f1
- (void)presentAddToContactsSheet;	// 0x3718f415
- (void)presentNewContactViewControllerForAddToContacts;	// 0x3718f4d9
- (void)presentPeoplePickerNavigationControllerForMergeToContact;	// 0x3718f505
- (void)presentShareContactSheet;	// 0x3718f441
- (void)reloadImageData;	// 0x3718f3ed
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x371a5e29
// declared property getter: - (BOOL)savesNewContactOnSuspend;	// 0x3718f5f9
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x371a5e59
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x3718ee21
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x3716fb9d
// declared property setter: - (void)setAllowsAddingToAddressBook:(BOOL)addressBook;	// 0x3716fb6d
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x3718f145
// declared property setter: - (void)setAllowsSendingTextMessage:(BOOL)message;	// 0x3718f0f1
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x3718f0a1
// declared property setter: - (void)setAlternateName:(id)name;	// 0x3718ee81
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x3718f371
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x3718f3b5
// converted property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x3718f895
- (void)setCardContentProvider:(id)provider;	// 0x3718f199
- (void)setCustomAppearanceProvider:(id)provider;	// 0x371b9dc5
// converted property setter: - (void)setCustomFooterView:(id)view;	// 0x3718f585
// converted property setter: - (void)setCustomHeaderView:(id)view;	// 0x3718f531
// converted property setter: - (void)setCustomMessageView:(id)view;	// 0x3718f04d
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x3716f665
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x3718f329
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x3718f235
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x3718f1f5
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x3718f1b9
// declared property setter: - (void)setIsLocation:(BOOL)location;	// 0x3718f4b9
// declared property setter: - (void)setMessage:(id)message;	// 0x3718eed5
// converted property setter: - (void)setMessageDetail:(id)detail;	// 0x3718ef7d
// converted property setter: - (void)setMessageDetailFont:(id)font;	// 0x3718eff9
// converted property setter: - (void)setMessageFont:(id)font;	// 0x3718ef29
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x3716e8b9
- (void)setPrimaryProperty:(int)property;	// 0x3718f2f5
- (void)setPrimaryProperty:(int)property countryCode:(id)code;	// 0x3716f6dd
// declared property setter: - (void)setSavesNewContactOnSuspend:(BOOL)suspend;	// 0x3718f5d9
// converted property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x3718f799
// converted property setter: - (void)setShareLocationURL:(id)url;	// 0x3718f745
// converted property setter: - (void)setShareMessageBody:(id)body;	// 0x3718f69d
// converted property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x3718f649
// converted property setter: - (void)setShareMessageSubject:(id)subject;	// 0x3718f6f1
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x3718f2a1
- (void)setStringValue:(id)value forProperty:(int)property;	// 0x3718f259
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3718ee61
// declared property setter: - (void)setUnknownPersonViewDelegate:(id)delegate;	// 0x3716e999
// converted property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x3718f7ed
// converted property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x3718f841
// converted property getter: - (id)shareLocationSnapshotImage;	// 0x3718f771
// converted property getter: - (id)shareLocationURL;	// 0x3718f71d
// converted property getter: - (id)shareMessageBody;	// 0x3718f675
// converted property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x3718f621
// converted property getter: - (id)shareMessageSubject;	// 0x3718f6c9
// declared property getter: - (id)sharingDelegate;	// 0x37190b2d
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x3718f2cd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x371709a9
// declared property getter: - (id)styleProvider;	// 0x3718ee41
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x37190605
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3719094d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x371905d5
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x3719090d
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x3718eded
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector target:(id)target localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x3718ed2d
// declared property getter: - (id)unknownPersonViewDelegate;	// 0x3716fb29
- (void)updateNavigationButtons;	// 0x3717084d
- (void)viewDidAppear:(BOOL)view;	// 0x371715f1
- (void)viewDidLoad;	// 0x37170851
- (void)viewDidUnload;	// 0x3718f98d
- (void)viewWillAppear:(BOOL)view;	// 0x37170939
- (void)viewWillDisappear:(BOOL)view;	// 0x3717161d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3718f951
// converted property getter: - (id)willTweetLocationCallback;	// 0x3718f7c5
// converted property getter: - (id)willWeiboLocationCallback;	// 0x3718f819
@end

