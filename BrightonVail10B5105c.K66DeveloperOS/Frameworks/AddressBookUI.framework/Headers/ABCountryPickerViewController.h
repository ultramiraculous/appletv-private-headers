/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UISearchDisplayDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABPickerViewController.h"

@class UISearchBar, UISearchDisplayController, UILocalizedIndexedCollation, NSIndexPath, NSString, UITableView, NSArray, NSDictionary;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate> {
	UITableView *_tableView;	// 236 = 0xec
	UILocalizedIndexedCollation *_collation;	// 240 = 0xf0
	NSArray *_sections;	// 244 = 0xf4
	NSArray *_sectionIndexTitles;	// 248 = 0xf8
	NSDictionary *_indexToSections;	// 252 = 0xfc
	UISearchBar *_searchBar;	// 256 = 0x100
	UISearchDisplayController *_searchController;	// 260 = 0x104
	NSArray *_filteredCountries;	// 264 = 0x108
	NSString *_selectedCountryCode;	// 268 = 0x10c
	NSIndexPath *_selectedIndexPath;	// 272 = 0x110
	NSArray *_allCountries;	// 276 = 0x114
}
@property(retain, nonatomic) NSString *selectedCountryCode;	// G=0x376589c9; S=0x3765877d; 
- (id)init;	// 0x376584e9
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x37659495
- (void)_setSelectedCountryCode:(id)code atPath:(id)path;	// 0x37658709
- (float)ab_heightToFitForViewInPopoverView;	// 0x37659359
- (void)configureSections;	// 0x376589d9
- (void)dealloc;	// 0x376585dd
- (void)loadView;	// 0x37659099
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x37659645
- (void)reloadCountryCodes;	// 0x37658db9
- (void)scrollToSearchFieldAnimated:(BOOL)searchFieldAnimated;	// 0x37659025
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x37659a71
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x37659a89
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;	// 0x37659aad
- (void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;	// 0x37659b9d
- (void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;	// 0x37659bc1
- (id)sectionIndexTitlesForTableView:(id)tableView;	// 0x3765975d
// declared property getter: - (id)selectedCountryCode;	// 0x376589c9
// declared property setter: - (void)setSelectedCountryCode:(id)code;	// 0x3765877d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x376594cd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x37659881
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x37659679
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x37659785
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x376596dd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x376599f1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x37659805
- (void)viewWillAppear:(BOOL)view;	// 0x3765949d
@end
