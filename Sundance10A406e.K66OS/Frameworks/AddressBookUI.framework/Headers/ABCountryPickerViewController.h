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
@property(retain, nonatomic) NSString *selectedCountryCode;	// G=0x3146f9c9; S=0x3146f77d; 
- (id)init;	// 0x3146f4e9
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x31470495
- (void)_setSelectedCountryCode:(id)code atPath:(id)path;	// 0x3146f709
- (float)ab_heightToFitForViewInPopoverView;	// 0x31470359
- (void)configureSections;	// 0x3146f9d9
- (void)dealloc;	// 0x3146f5dd
- (void)loadView;	// 0x31470099
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31470645
- (void)reloadCountryCodes;	// 0x3146fdb9
- (void)scrollToSearchFieldAnimated:(BOOL)searchFieldAnimated;	// 0x31470025
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x31470a71
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x31470a89
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;	// 0x31470aad
- (void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;	// 0x31470b9d
- (void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;	// 0x31470bc1
- (id)sectionIndexTitlesForTableView:(id)tableView;	// 0x3147075d
// declared property getter: - (id)selectedCountryCode;	// 0x3146f9c9
// declared property setter: - (void)setSelectedCountryCode:(id)code;	// 0x3146f77d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x314704cd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31470881
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31470679
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x31470785
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x314706dd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x314709f1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x31470805
- (void)viewWillAppear:(BOOL)view;	// 0x3147049d
@end

