/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface ABContactsFilter : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSArray *_groups;	// 8 = 0x8
	NSArray *_sources;	// 12 = 0xc
	void *_directorySource;	// 16 = 0x10
	BOOL _showsAllContacts;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) void *addressBook;	// G=0x3090c531; 
@property(readonly, assign, nonatomic) void *directorySource;	// G=0x3090c521; @synthesize=_directorySource
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x308de7bd; 
@property(readonly, assign, nonatomic) void *groupForNewRecords;	// G=0x30966f75; 
@property(readonly, assign, nonatomic) NSArray *groups;	// G=0x308dfc61; @synthesize=_groups
@property(readonly, assign, nonatomic) BOOL isDirectory;	// G=0x308dc005; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x308dc755; 
@property(readonly, assign, nonatomic) BOOL shouldChangeModelSelectionWhenDisplayed;	// G=0x30966c71; 
@property(readonly, assign, nonatomic) BOOL showsAllContacts;	// G=0x308db8c9; @synthesize=_showsAllContacts
@property(readonly, assign, nonatomic) void *sourceForNewRecords;	// G=0x30966f99; 
@property(readonly, assign, nonatomic) NSArray *sources;	// G=0x308de929; @synthesize=_sources
+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)groupWrapperRepresentation withAddressBook:(void *)addressBook;	// 0x3090c0a5
+ (id)newContactsFilterFromDictionaryRepresentation:(id)dictionaryRepresentation withAddressBook:(void *)addressBook;	// 0x3090bcc5
- (id)initWithAddressBook:(void *)addressBook;	// 0x308db439
- (id)initWithDirectorySource:(void *)directorySource addressBook:(void *)book;	// 0x30966891
- (id)initWithGroups:(id)groups sources:(id)sources addressBook:(void *)book;	// 0x308db46d
- (void *)_defaultSourceForAccountContainingSource:(void *)accountContainingSource;	// 0x30966c95
- (void)_getWritableSource:(const void **)source andGroup:(const void **)group;	// 0x30966cbd
- (id)_sortedRecordsForRecords:(id)records byNameProperty:(int)property;	// 0x3090c335
// declared property getter: - (void *)addressBook;	// 0x3090c531
- (id)copyDictionaryRepresentation;	// 0x30966951
- (void)dealloc;	// 0x3090c541
- (id)description;	// 0x30967071
// declared property getter: - (void *)directorySource;	// 0x3090c521
// declared property getter: - (void *)groupForNewRecords;	// 0x30966f75
// declared property getter: - (id)groups;	// 0x308dfc61
- (unsigned)hash;	// 0x30967109
- (void)invalidateSourcesForAllContacts;	// 0x30966911
// declared property getter: - (BOOL)isDirectory;	// 0x308dc005
// declared property getter: - (BOOL)isEditable;	// 0x308de7bd
- (BOOL)isEqual:(id)equal;	// 0x3090c3c1
// declared property getter: - (id)name;	// 0x308dc755
// declared property getter: - (BOOL)shouldChangeModelSelectionWhenDisplayed;	// 0x30966c71
// declared property getter: - (BOOL)showsAllContacts;	// 0x308db8c9
- (id)sortedGroupsForGroups:(id)groups;	// 0x30967051
- (id)sortedSourcesForSources:(id)sources;	// 0x3090c315
// declared property getter: - (void *)sourceForNewRecords;	// 0x30966f99
// declared property getter: - (id)sources;	// 0x308de929
@end
