/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class ASToDoRecurrence, NSArray, NSNumber, NSString, NSDate, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement> {
	void *_calRecord;	// 64 = 0x40
	NSString *_body;	// 68 = 0x44
	NSNumber *_bodyTruncated;	// 72 = 0x48
	NSArray *_categories;	// 76 = 0x4c
	NSNumber *_complete;	// 80 = 0x50
	NSDate *_dateCompleted;	// 84 = 0x54
	NSDate *_dueDate;	// 88 = 0x58
	NSDate *_utcDueDate;	// 92 = 0x5c
	NSNumber *_importance;	// 96 = 0x60
	NSNumber *_reminderIsSet;	// 100 = 0x64
	NSDate *_reminderDateTime;	// 104 = 0x68
	NSNumber *_sensitivity;	// 108 = 0x6c
	NSDate *_startTime;	// 112 = 0x70
	NSDate *_utcStartTime;	// 116 = 0x74
	NSString *_subject;	// 120 = 0x78
	ASToDoRecurrence *_recurrence;	// 124 = 0x7c
}
@property(retain, nonatomic) NSString *body;	// G=0x36e23ff1; S=0x36e23dc9; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x36e24001; S=0x36e24015; @synthesize=_bodyTruncated
@property(assign) void *calTask;	// G=0x36e23d25; S=0x36e23b39; converted property
@property(retain) NSArray *categories;	// G=0x36e24025; S=0x36e24039; @synthesize=_categories
@property(retain) NSNumber *complete;	// G=0x36e24049; S=0x36e2405d; @synthesize=_complete
@property(retain) NSDate *dateCompleted;	// G=0x36e2406d; S=0x36e24081; @synthesize=_dateCompleted
@property(retain) NSDate *dueDate;	// G=0x36e24091; S=0x36e240a5; @synthesize=_dueDate
@property(readonly, assign) NSTimeZone *dueDateTimeZone;	// G=0x36e23ea9; 
@property(retain) NSNumber *importance;	// G=0x36e240d9; S=0x36e240ed; @synthesize=_importance
@property(retain) ASToDoRecurrence *recurrence;	// G=0x36e241d5; S=0x36e241e9; @synthesize=_recurrence
@property(retain) NSDate *reminderDateTime;	// G=0x36e24121; S=0x36e24135; @synthesize=_reminderDateTime
@property(retain) NSNumber *reminderIsSet;	// G=0x36e240fd; S=0x36e24111; @synthesize=_reminderIsSet
@property(retain) NSNumber *sensitivity;	// G=0x36e24145; S=0x36e24159; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x36e24169; S=0x36e2417d; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x36e241b1; S=0x36e241c5; @synthesize=_subject
@property(retain, setter=setUTCDueDate:) NSDate *utcDueDate;	// G=0x36e240b5; S=0x36e240c9; @synthesize=_utcDueDate
@property(retain, setter=setUTCStartTime:) NSDate *utcStartTime;	// G=0x36e2418d; S=0x36e241a1; @synthesize=_utcStartTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e21791
+ (id)asParseRules;	// 0x36e21935
+ (BOOL)frontingBasicTypes;	// 0x36e2188d
+ (BOOL)notifyOfUnknownTokens;	// 0x36e218e1
+ (BOOL)parsingLeafNode;	// 0x36e217e5
+ (BOOL)parsingWithSubItems;	// 0x36e21839
+ (id)toDoWithCalTask:(void *)calTask serverID:(id)anId account:(id)account;	// 0x36e223b1
- (id)initWithCalTask:(void *)calTask serverID:(id)anId account:(id)account;	// 0x36e22331
- (id)initWithCoder:(id)coder;	// 0x36e23ef5
- (id)_bestGuessTimeZoneWithLocalDate:(id)localDate utcDate:(id)date;	// 0x36e22601
- (void)_loadAttributesFromCalTask:(void *)calTask forAccount:(id)account;	// 0x36e21d21
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36e23671
// declared property getter: - (id)body;	// 0x36e23ff1
// declared property getter: - (id)bodyTruncated;	// 0x36e24001
// converted property getter: - (void *)calTask;	// 0x36e23d25
// declared property getter: - (id)categories;	// 0x36e24025
// declared property getter: - (id)complete;	// 0x36e24049
- (int)dataclass;	// 0x36e21d1d
// declared property getter: - (id)dateCompleted;	// 0x36e2406d
- (void)dealloc;	// 0x36e223f9
- (BOOL)deleteFromCalendar;	// 0x36e23651
- (BOOL)deleteFromContainer:(void *)container;	// 0x36e23e91
- (id)description;	// 0x36e22579
// declared property getter: - (id)dueDate;	// 0x36e24091
// declared property getter: - (id)dueDateTimeZone;	// 0x36e23ea9
- (void)encodeWithCoder:(id)coder;	// 0x36e23f75
// declared property getter: - (id)importance;	// 0x36e240d9
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x36e23b85
- (void)loadClientIDs;	// 0x36e23d69
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x36e23e61
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e235b9
- (void)postProcessApplicationData;	// 0x36e22e4d
// declared property getter: - (id)recurrence;	// 0x36e241d5
// declared property getter: - (id)reminderDateTime;	// 0x36e24121
// declared property getter: - (id)reminderIsSet;	// 0x36e240fd
- (BOOL)saveServerIDToCalendar;	// 0x36e23d35
- (BOOL)saveServerIDToExistingItem;	// 0x36e23e79
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36e22741
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36e23e1d
// declared property getter: - (id)sensitivity;	// 0x36e24145
// declared property setter: - (void)setBody:(id)body;	// 0x36e23dc9
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x36e24015
// converted property setter: - (void)setCalTask:(void *)task;	// 0x36e23b39
// declared property setter: - (void)setCategories:(id)categories;	// 0x36e24039
// declared property setter: - (void)setComplete:(id)complete;	// 0x36e2405d
// declared property setter: - (void)setDateCompleted:(id)completed;	// 0x36e24081
// declared property setter: - (void)setDueDate:(id)date;	// 0x36e240a5
// declared property setter: - (void)setImportance:(id)importance;	// 0x36e240ed
- (void)setLocalItem:(void *)item;	// 0x36e23e51
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x36e241e9
// declared property setter: - (void)setReminderDateTime:(id)time;	// 0x36e24135
// declared property setter: - (void)setReminderIsSet:(id)set;	// 0x36e24111
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x36e24159
// declared property setter: - (void)setStartTime:(id)time;	// 0x36e2417d
// declared property setter: - (void)setSubject:(id)subject;	// 0x36e241c5
// declared property setter: - (void)setUTCDueDate:(id)date;	// 0x36e240c9
// declared property setter: - (void)setUTCStartTime:(id)time;	// 0x36e241a1
// declared property getter: - (id)startTime;	// 0x36e24169
// declared property getter: - (id)subject;	// 0x36e241b1
// declared property getter: - (id)utcDueDate;	// 0x36e240b5
// declared property getter: - (id)utcStartTime;	// 0x36e2418d
@end
