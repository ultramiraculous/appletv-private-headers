/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CalDAVCalendar.h"
#import <NSObject.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSTimeZone, NSArray, NSString, MobileCalDAVPrincipal, NSMutableArray, NSSet, NSURL, NSDictionary, NSMutableDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {
	MobileCalDAVPrincipal *_principal;	// 4 = 0x4
	NSString *_calGUID;	// 8 = 0x8
	NSString *_calendarURLString;	// 12 = 0xc
	BOOL _isDirty;	// 16 = 0x10
	BOOL _isSubscribed;	// 17 = 0x11
	BOOL _isScheduleInbox;	// 18 = 0x12
	BOOL _isScheduleOutbox;	// 19 = 0x13
	BOOL _isEnabled;	// 20 = 0x14
	BOOL _isAffectingAvailability;	// 21 = 0x15
	NSString *_pushKey;	// 24 = 0x18
	NSString *_syncToken;	// 28 = 0x1c
	BOOL _needsPublishUpdate;	// 32 = 0x20
	NSSet *_sharees;	// 36 = 0x24
	NSMutableDictionary *_uniqueIdentifierToRecordIDMap;	// 40 = 0x28
	NSMutableDictionary *_URLToRecordIDMap;	// 44 = 0x2c
	NSMutableDictionary *_URLToEtagMap;	// 48 = 0x30
	void *_calCalendar;	// 52 = 0x34
	int _mostRecentEventChangeIndex;	// 56 = 0x38
	int _mostRecentTaskChangeIndex;	// 60 = 0x3c
	int _mostRecentAlarmChangeIndex;	// 64 = 0x40
	int _mostRecentAttendeeChangeIndex;	// 68 = 0x44
	int _mostRecentAttachmentChangeIndex;	// 72 = 0x48
	int _mostRecentRecurChangeIndex;	// 76 = 0x4c
	int _mostRecentEventActionChangeIndex;	// 80 = 0x50
	int _mostRecentShareeChangeIndex;	// 84 = 0x54
	NSMutableDictionary *_deletedCalendarItems;	// 88 = 0x58
	NSArray *_syncActions;	// 92 = 0x5c
	NSArray *_shareeActions;	// 96 = 0x60
	NSDictionary *_hrefsToModDeleteActions;	// 100 = 0x64
	NSDictionary *_uuidsToAddActions;	// 104 = 0x68
	NSMutableArray *_outstandingTaskGroups;	// 108 = 0x6c
	id _syncActionCompletionBlock;	// 112 = 0x70
	BOOL _wasModifiedLocally;	// 116 = 0x74
}
@property(readonly, assign) NSString *accountID;	// G=0x3399c779; 
@property(readonly, assign) NSSet *allItemURLs;	// G=0x3399b52d; 
@property(retain) NSDictionary *bulkRequests;	// G=0x3399a231; S=0x3399a29d; 
@property(retain) NSURL *calendarURL;	// G=0x33999a8d; S=0x33999ae9; 
@property(readonly, assign) NSString *calendarURLString;	// G=0x33999ad9; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x3399a8e1; S=0x3399a901; 
@property(assign) BOOL canBePublished;	// G=0x3399a4b9; S=0x3399a4dd; 
@property(assign) BOOL canBeShared;	// G=0x3399a53d; S=0x3399a561; 
@property(retain) NSString *color;	// G=0x3399a155; S=0x3399a1a9; 
@property(retain) NSString *ctag;	// G=0x3399b311; S=0x3399b38d; 
@property(readonly, assign) NSString *displayColor;	// G=0x3399c755; 
@property(retain) NSString *guid;	// G=0x339999b1; S=0x339999c1; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x339a040d; 
@property(assign) BOOL isAffectingAvailability;	// G=0x339a1dad; S=0x339a1dc5; @synthesize=_isAffectingAvailability
@property(assign) BOOL isDirty;	// G=0x339a1d7d; S=0x339a1d95; @synthesize=_isDirty
@property(assign) BOOL isEditable;	// G=0x3399b1f1; S=0x3399b21d; 
@property(assign) BOOL isEnabled;	// G=0x339a1d4d; S=0x339a1d65; @synthesize=_isEnabled
@property(assign) BOOL isEventContainer;	// G=0x33999de5; S=0x33999e09; 
@property(readonly, assign) BOOL isHidden;	// G=0x3399c731; 
@property(assign) BOOL isNotification;	// G=0x33999e6d; S=0x33999e71; 
@property(assign) BOOL isPoll;	// G=0x33999e75; S=0x33999e79; 
@property(assign) BOOL isPublished;	// G=0x3399a5c1; S=0x3399a5e5; 
@property(assign) BOOL isRenameable;	// G=0x3399b281; S=0x3399b2ad; 
@property(assign) BOOL isScheduleInbox;	// G=0x33999e65; S=0x33999e69; 
@property(assign) BOOL isScheduleOutbox;	// G=0x339a1d1d; S=0x339a1d35; @synthesize=_isScheduleOutbox
@property(assign) BOOL isSubscribed;	// G=0x339a1ced; S=0x339a1d05; @synthesize=_isSubscribed
@property(assign) BOOL isTaskContainer;	// G=0x33999d65; S=0x33999d89; 
@property(assign) BOOL needsPublishUpdate;	// G=0x339a1ddd; S=0x339a1df5; @synthesize=_needsPublishUpdate
@property(retain) NSString *notes;	// G=0x33999fc9; S=0x3399a035; 
@property(assign) int order;	// G=0x3399ab31; S=0x3399ab5d; 
@property(retain) NSURL *owner;	// G=0x3399a3bd; S=0x3399a419; 
@property(retain) NSString *ownerDisplayName;	// G=0x3399a725; S=0x3399a75d; 
@property(readonly, assign) NSString *ownerEmailAddress;	// G=0x3399a7e1; 
@property(retain) NSURL *prePublishURL;	// G=0x3399a6e9; S=0x3399a721; 
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x339a1cb5; @synthesize=_principal
@property(retain) NSURL *publishURL;	// G=0x3399a645; S=0x3399a67d; 
@property(retain) NSString *pushKey;	// G=0x339a1cc9; S=0x339a1cdd; @synthesize=_pushKey
@property(readonly, assign) NSArray *shareeActions;	// G=0x339a0265; 
@property(retain) NSSet *sharees;	// G=0x3399b0dd; S=0x3399aca5; 
@property(assign) int sharingStatus;	// G=0x3399abb1; S=0x3399abe1; 
@property(readonly, assign) NSArray *syncActions;	// G=0x3399fed5; 
@property(retain) NSString *syncToken;	// G=0x3399b405; S=0x3399b481; 
@property(retain) NSTimeZone *timeZone;	// G=0x3399ab11; S=0x3399ab2d; 
@property(retain) NSString *title;	// G=0x33999e7d; S=0x33999eb5; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x339a03fd; 
@property(assign) BOOL wasModifiedLocally;	// G=0x339a1e0d; S=0x339a1e25; @synthesize=_wasModifiedLocally
+ (int)addedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3399d205
+ (BOOL)clearCalendarChangesToIndex:(int)index inPrincipal:(id)principal;	// 0x3399dc69
+ (int)deletedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3399da3d
+ (int)modifiedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3399d685
- (void *)initCalCalendarWithTitle:(id)title;	// 0x3399ca69
- (id)initWithCalendarURL:(id)calendarURL calCalendar:(void *)calendar principal:(id)principal;	// 0x33999659
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal;	// 0x339996ed
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x339993e1
- (int)_addAddedItemsOfType:(int)type toArray:(id)array;	// 0x3399e4a1
- (void)_addCalendarItemWithRowID:(int)rowID toArrayIfNeeded:(id)arrayIfNeeded withChangeRowid:(int)changeRowid changeType:(id)type;	// 0x3399e1dd
- (void)_addShareeWithRowID:(id)rowID toDictionaryIfNeeded:(id)dictionaryIfNeeded;	// 0x339a041d
- (id)_calExternalRep;	// 0x3399d161
- (void)_clearChangesAtIndices:(id)indices withClearCall:(/*function-pointer*/ void *)clearCall forType:(id)type;	// 0x3399f851
- (void)_clearChangesFromItem:(id)item;	// 0x3399f9b5
- (void)_collectShareeActions;	// 0x339a0545
- (void *)_copyCalItemWithExternalID:(id)externalID;	// 0x3399ba89
- (void *)_copyCalItemWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x3399b9e1
- (id)_copyDeletedEventActions;	// 0x3399f4dd
- (id)_createActionsForItems:(id)items withAction:(int)action alreadySentItems:(id)items3 shouldSave:(BOOL *)save;	// 0x3399fb0d
- (void)_dropCalStoreContext;	// 0x3399d101
- (int)_gatherDeletedChanges:(/*function-pointer*/ void *)changes inDictionary:(id)dictionary;	// 0x3399eed5
- (int)_gatherModifiedEventsInArray:(id)array;	// 0x3399e8f9
- (int)_gatherModifiedItemsFromCalChangesCall:(/*function-pointer*/ void *)calChangesCall forType:(id)type inArray:(id)array;	// 0x3399e7a9
- (int)_gatherModifiedTasksInArray:(id)array;	// 0x3399eb99
- (id)_itemPropertyDictForItemAtIndex:(int)index withChangedIDs:(CFArrayRef)changedIDs withChangedRowids:(CFArrayRef)changedRowids withExternalIDs:(CFArrayRef)externalIDs uniqueIdentifiers:(CFArrayRef)identifiers significantAttributeChanges:(CFArrayRef)changes oldCalendarIDs:(CFArrayRef)ids;	// 0x3399dced
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x3399c4a9
- (void)_setSupportsEvents:(BOOL)events supportsTodos:(BOOL)todos;	// 0x33999ce5
- (BOOL)_updateCalendarOwnerInfo;	// 0x3399c7b1
// declared property getter: - (id)accountID;	// 0x3399c779
// declared property getter: - (id)allItemURLs;	// 0x3399b52d
- (Class)appSpecificCalendarItemClass;	// 0x339a1c99
// declared property getter: - (id)bulkRequests;	// 0x3399a231
// declared property getter: - (id)calendarURL;	// 0x33999a8d
// declared property getter: - (id)calendarURLString;	// 0x33999ad9
// declared property getter: - (id)calendarUserAddresses;	// 0x3399a8e1
// declared property getter: - (BOOL)canBePublished;	// 0x3399a4b9
// declared property getter: - (BOOL)canBeShared;	// 0x3399a53d
- (void)clearEventChanges;	// 0x3399f6ed
- (void)clearShareeActions;	// 0x339a0299
// declared property getter: - (id)color;	// 0x3399a155
- (id)copyAddedItems;	// 0x3399e691
- (id)copyAllItems;	// 0x3399df25
- (id)copyDeletedItems;	// 0x3399f46d
- (id)copyModifiedItems;	// 0x3399ed81
// declared property getter: - (id)ctag;	// 0x3399b311
- (void)dealloc;	// 0x33999711
- (void)deleteAction:(id)action completedWithError:(id)error;	// 0x339a00c5
- (void)deleteCalendar;	// 0x339998f5
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3399c609
- (id)description;	// 0x33999865
// declared property getter: - (id)displayColor;	// 0x3399c755
- (id)etagsForItemURLs:(id)itemURLs;	// 0x3399b761
- (void)flushCaches;	// 0x339a1ba9
- (void *)getCalCalendar;	// 0x3399ce45
// declared property getter: - (id)guid;	// 0x339999b1
- (BOOL)hasCalendarUserAddressEquivalentToURL:(id)url;	// 0x3399aa09
- (BOOL)hasEvents;	// 0x3399c6fd
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x339a040d
// declared property getter: - (BOOL)isAffectingAvailability;	// 0x339a1dad
// declared property getter: - (BOOL)isDirty;	// 0x339a1d7d
// declared property getter: - (BOOL)isEditable;	// 0x3399b1f1
// declared property getter: - (BOOL)isEnabled;	// 0x339a1d4d
// declared property getter: - (BOOL)isEventContainer;	// 0x33999de5
// declared property getter: - (BOOL)isHidden;	// 0x3399c731
// declared property getter: - (BOOL)isNotification;	// 0x33999e6d
// declared property getter: - (BOOL)isPoll;	// 0x33999e75
// declared property getter: - (BOOL)isPublished;	// 0x3399a5c1
// declared property getter: - (BOOL)isRenameable;	// 0x3399b281
// declared property getter: - (BOOL)isScheduleInbox;	// 0x33999e65
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x339a1d1d
// declared property getter: - (BOOL)isSubscribed;	// 0x339a1ced
// declared property getter: - (BOOL)isTaskContainer;	// 0x33999d65
// declared property getter: - (BOOL)needsPublishUpdate;	// 0x339a1ddd
// declared property getter: - (id)notes;	// 0x33999fc9
// declared property getter: - (int)order;	// 0x3399ab31
// declared property getter: - (id)owner;	// 0x3399a3bd
// declared property getter: - (id)ownerDisplayName;	// 0x3399a725
// declared property getter: - (id)ownerEmailAddress;	// 0x3399a7e1
// declared property getter: - (id)prePublishURL;	// 0x3399a6e9
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x339a1579
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x339a0ca1
// declared property getter: - (id)principal;	// 0x339a1cb5
// declared property getter: - (id)publishURL;	// 0x3399a645
// declared property getter: - (id)pushKey;	// 0x339a1cc9
- (void)putAction:(id)action completedWithError:(id)error;	// 0x3399fee5
- (CalRecordID *)recordIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3399bb69
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3399be95
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x3399a29d
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x33999ae9
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x3399a901
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x3399a4dd
// declared property setter: - (void)setCanBeShared:(BOOL)shared;	// 0x3399a561
// declared property setter: - (void)setColor:(id)color;	// 0x3399a1a9
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3399b38d
- (BOOL)setEtag:(id)etag forItemAtURL:(id)url;	// 0x3399bcd1
// declared property setter: - (void)setGuid:(id)guid;	// 0x339999c1
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;	// 0x339a1dc5
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x339a1d95
// declared property setter: - (void)setIsEditable:(BOOL)editable;	// 0x3399b21d
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x339a1d65
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x33999e09
// declared property setter: - (void)setIsNotification:(BOOL)notification;	// 0x33999e71
// declared property setter: - (void)setIsPoll:(BOOL)poll;	// 0x33999e79
// declared property setter: - (void)setIsPublished:(BOOL)published;	// 0x3399a5e5
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;	// 0x3399b2ad
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;	// 0x33999e69
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;	// 0x339a1d35
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;	// 0x339a1d05
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x33999d89
// declared property setter: - (void)setNeedsPublishUpdate:(BOOL)update;	// 0x339a1df5
// declared property setter: - (void)setNotes:(id)notes;	// 0x3399a035
// declared property setter: - (void)setOrder:(int)order;	// 0x3399ab5d
// declared property setter: - (void)setOwner:(id)owner;	// 0x3399a419
// declared property setter: - (void)setOwnerDisplayName:(id)name;	// 0x3399a75d
// declared property setter: - (void)setPrePublishURL:(id)url;	// 0x3399a721
// declared property setter: - (void)setPublishURL:(id)url;	// 0x3399a67d
// declared property setter: - (void)setPushKey:(id)key;	// 0x339a1cdd
- (BOOL)setScheduleTag:(id)tag forItemAtURL:(id)url;	// 0x3399bdcd
// declared property setter: - (void)setSharees:(id)sharees;	// 0x3399aca5
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x3399abe1
// declared property setter: - (void)setSyncToken:(id)token;	// 0x3399b481
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3399ab2d
// declared property setter: - (void)setTitle:(id)title;	// 0x33999eb5
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x3399bb89
- (void)setUniqueIdentifier:(id)identifier forRecordID:(CalRecordID *)recordID;	// 0x3399bb29
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;	// 0x339a1e25
// declared property getter: - (id)shareeActions;	// 0x339a0265
// declared property getter: - (id)sharees;	// 0x3399b0dd
// declared property getter: - (int)sharingStatus;	// 0x3399abb1
// declared property getter: - (id)syncActions;	// 0x3399fed5
- (void)syncDidFinishWithError:(id)sync;	// 0x339a1c89
// declared property getter: - (id)syncToken;	// 0x3399b405
// declared property getter: - (id)timeZone;	// 0x3399ab11
// declared property getter: - (id)title;	// 0x33999e7d
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3399c075
// declared property getter: - (id)uuidsToAddActions;	// 0x339a03fd
// declared property getter: - (BOOL)wasModifiedLocally;	// 0x339a1e0d
@end

