/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, ABContactsFilter, NSMutableArray, NSRecursiveLock;

@interface ABModel : NSObject {
	void *_addressBook;	// 4 = 0x4
	XXStruct_IqUx3B *_sectionLists;	// 8 = 0x8
	CFDictionaryRef _headerSortKeyToHeaderString;	// 12 = 0xc
	NSRange _displayedMemberPreparedRange;	// 16 = 0x10
	unsigned _numberOfDisplayedMembers;	// 24 = 0x18
	BOOL _displayedMembersAreSearchResults;	// 28 = 0x1c
	void *_selectedPerson;	// 32 = 0x20
	unsigned _displayOrdering;	// 36 = 0x24
	CFArrayRef _databaseChangeDelegates;	// 40 = 0x28
	void *_backgroundAddressBook;	// 44 = 0x2c
	BOOL _backgroundAddressBookInvalidated;	// 48 = 0x30
	NSMutableArray *_cachedModelRecords;	// 52 = 0x34
	NSRecursiveLock *_memberLock;	// 56 = 0x38
	BOOL _loadingInBackground;	// 60 = 0x3c
	NSRecursiveLock *_backgroundLoadingLock;	// 64 = 0x40
	BOOL _backgroundInvalidated;	// 68 = 0x44
	id _delayedNotificationHandler;	// 72 = 0x48
	BOOL _autoInvalidateOnDatabaseChange;	// 76 = 0x4c
	NSArray *_lastSeenSources;	// 80 = 0x50
	NSArray *_lastSeenGroups;	// 84 = 0x54
	int _meID;	// 88 = 0x58
	ABContactsFilter *_displayedContactsFilter;	// 92 = 0x5c
	ABContactsFilter *_selectedContactsFilter;	// 96 = 0x60
	ABContactsFilter *_lastSelectedContactsFilter;	// 100 = 0x64
}
@property(assign, nonatomic) void *addressBook;	// G=0x3142349d; S=0x3145c379; 
@property(retain, nonatomic) ABContactsFilter *displayedContactsFilter;	// G=0x31422fcd; S=0x31422f2d; @synthesize=_displayedContactsFilter
@property(readonly, assign, nonatomic) ABContactsFilter *lastSelectedContactsFilter;	// G=0x3142239d; @synthesize=_lastSelectedContactsFilter
@property(readonly, assign) int meID;	// G=0x31427f79; converted property
@property(readonly, assign) unsigned numberOfDisplayedMembers;	// G=0x31424ee1; converted property
@property(readonly, assign, nonatomic) ABContactsFilter *selectedContactsFilter;	// G=0x3142371d; @synthesize=_selectedContactsFilter
@property(assign) void *selectedPerson;	// G=0x31429c15; S=0x3142301d; converted property
+ (void)initialize;	// 0x314221f9
+ (unsigned)sortOrdering;	// 0x31427e7d
- (id)initWithAddressBook:(void *)addressBook;	// 0x31422211
- (void)_cacheMeID;	// 0x31422aa9
- (void)_cachePeople:(CFArrayRef)people atEnd:(BOOL)end;	// 0x31427c35
- (CFArrayRef)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(NSRange)range inBackground:(BOOL)background;	// 0x31427b95
- (CFArrayRef)_databaseChangeDelegates;	// 0x3145d0a9
- (id)_displayedGroupMembersInRange:(NSRange)range;	// 0x3145c011
- (int)_indexOfMember:(void *)member inDisplayedMembers:(id)displayedMembers;	// 0x3145006d
- (void)_loadMembersInBackground:(id)background;	// 0x3142a139
- (void)_modelDatabaseChangedExternally:(CFDictionaryRef)externally;	// 0x3145c811
- (void)_modelDatabaseChangedLocally:(CFDictionaryRef)locally;	// 0x3145c71d
- (id)_newModelRecordFromRecord:(void *)record;	// 0x31427d29
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(BOOL)deletedGroup deletedPerson:(BOOL)person;	// 0x3145c5e1
- (id)_partialDisplayedGroupMembersInRange:(NSRange)range;	// 0x31427879
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)forward;	// 0x3142a095
- (void)_updateForMajorAddressBookChange:(BOOL)majorAddressBookChange;	// 0x3145c839
- (void)_waitUntilBackgroundThreadFinished;	// 0x31422715
- (void)addDatabaseChangeDelegate:(id)delegate;	// 0x314236d1
// declared property getter: - (void *)addressBook;	// 0x3142349d
- (id)allCachedModelRecords;	// 0x3145bfdd
- (id)allDatabaseDirectories;	// 0x314ad231
- (id)allGroups;	// 0x31425d2d
- (id)allSources;	// 0x31425d65
- (void)copyDisplayedNamePieces:(id *)pieces isGroup:(BOOL *)group highlightIndex:(int *)index forMemberID:(int *)memberID atindex:(unsigned)atindex;	// 0x31427595
- (id)databaseFullDirectory;	// 0x314ad1b9
- (id)databaseHomeDirectory;	// 0x314ad19d
- (id)databaseSubdirectory;	// 0x314ad1e5
- (void)dealloc;	// 0x3145ba19
// declared property getter: - (id)displayedContactsFilter;	// 0x31422fcd
- (void *)displayedMemberAtIndex:(unsigned)index;	// 0x3142aab1
- (XXStruct_IqUx3B *)displayedMemberSectionLists;	// 0x31424fbd
- (int)displayedMemberSectionListsCount;	// 0x31424ded
- (id)displayedMembersInRange:(NSRange)range;	// 0x314276f5
- (CFDictionaryRef)headerSortKeyToHeaderStringDictionary;	// 0x3142276d
- (int)indexForDisplayedMember:(void *)displayedMember;	// 0x3144ff0d
- (void)invalidateDisplayedMembers;	// 0x3145c2ed
- (void)invalidateLastSelectedContactsFilter;	// 0x3145c255
// declared property getter: - (id)lastSelectedContactsFilter;	// 0x3142239d
// converted property getter: - (int)meID;	// 0x31427f79
// converted property getter: - (unsigned)numberOfDisplayedMembers;	// 0x31424ee1
- (void)prepareDisplayedMembersInRange:(NSRange)range;	// 0x314276e5
- (void)removeDatabaseChangeDelegate:(id)delegate;	// 0x3145d035
- (long)resetFullSectionList:(CFDictionaryRef)list maximumSectionCount:(int)count;	// 0x3145bc85
- (long)resetPartialSectionListWithMaximumCount:(int)maximumCount headerSortKeyToHeaderString:(CFDictionaryRef)headerString;	// 0x314228d9
- (void)resetSectionList;	// 0x3142264d
- (void)resetSortKeyToHeaderStringDictionary;	// 0x3145bc05
// declared property getter: - (id)selectedContactsFilter;	// 0x3142371d
// converted property getter: - (void *)selectedPerson;	// 0x31429c15
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x3145c379
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)change;	// 0x31422aed
- (void)setDisplayNameOrdering:(unsigned)ordering;	// 0x3145bbdd
// declared property setter: - (void)setDisplayedContactsFilter:(id)filter;	// 0x31422f2d
- (void)setFilteredDisplayedMembers:(CFArrayRef)members;	// 0x3145bec9
- (void)setLastSelectedContactsFilter:(id)filter;	// 0x3145c181
- (void)setSelectedContactsFilter:(id)filter;	// 0x3145c281
// converted property setter: - (void)setSelectedPerson:(void *)person;	// 0x3142301d
- (void)setSortOrdering:(unsigned)ordering;	// 0x3145bbb9
- (BOOL)shouldUsePartialLoadingForContactsFilter:(id)contactsFilter;	// 0x314228b1
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)databaseChangeDelegate;	// 0x3145d0b9
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)databaseChangeDelegate andDeliverDelayedNotifications:(BOOL)notifications;	// 0x3145d155
- (void)updateForMajorAddressBookChange;	// 0x3145c825
@end
