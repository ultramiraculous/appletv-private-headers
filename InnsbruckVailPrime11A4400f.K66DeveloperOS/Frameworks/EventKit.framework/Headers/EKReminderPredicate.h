/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPredicate.h"

@class NSDate, NSString;

@interface EKReminderPredicate : EKPredicate {
	BOOL _limitToCompletedOrIncomplete;	// 12 = 0xc
	BOOL _completed;	// 13 = 0xd
	BOOL _useCompletionDateAsAlternate;	// 14 = 0xe
	BOOL _useDueDateAsCompletionDate;	// 15 = 0xf
	NSString *_title;	// 16 = 0x10
	NSString *_listTitle;	// 20 = 0x14
	NSDate *_dueAfter;	// 24 = 0x18
	NSDate *_dueBefore;	// 28 = 0x1c
	NSString *_searchTerm;	// 32 = 0x20
	int _sortOrder;	// 36 = 0x24
	unsigned _maxResults;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL completed;	// G=0x2da935b9; S=0x2da92da5; @synthesize=_completed
@property(retain, nonatomic) NSDate *dueAfter;	// G=0x2da935c9; S=0x2da92db5; @synthesize=_dueAfter
@property(retain, nonatomic) NSDate *dueBefore;	// G=0x2da935d9; S=0x2da92dc5; @synthesize=_dueBefore
@property(assign, nonatomic) BOOL limitToCompletedOrIncomplete;	// G=0x2da935a9; S=0x2da92d95; @synthesize=_limitToCompletedOrIncomplete
@property(retain, nonatomic) NSString *listTitle;	// G=0x2da93599; S=0x2db00c85; @synthesize=_listTitle
@property(assign, nonatomic) unsigned maxResults;	// G=0x2da93629; S=0x2db00cb5; @synthesize=_maxResults
@property(retain, nonatomic) NSString *searchTerm;	// G=0x2da93609; S=0x2db00ca5; @synthesize=_searchTerm
@property(assign, nonatomic) int sortOrder;	// G=0x2da93619; S=0x2da92dd5; @synthesize=_sortOrder
@property(retain, nonatomic) NSString *title;	// G=0x2da93589; S=0x2db00c75; @synthesize=_title
@property(assign, nonatomic) BOOL useCompletionDateAsAlternate;	// G=0x2da935f9; S=0x2da92d85; @synthesize=_useCompletionDateAsAlternate
@property(assign, nonatomic) BOOL useDueDateAsCompletionDate;	// G=0x2da935e9; S=0x2db00c95; @synthesize=_useDueDateAsCompletionDate
+ (id)predicateWithCalendars:(id)calendars;	// 0x2da92d09
- (id)initWithCalendars:(id)calendars;	// 0x2da92d45
- (id)initWithCoder:(id)coder;	// 0x2db00a69
// declared property getter: - (BOOL)completed;	// 0x2da935b9
- (id)copyWithZone:(NSZone *)zone;	// 0x2db00559
- (void)dealloc;	// 0x2da94211
// declared property getter: - (id)dueAfter;	// 0x2da935c9
// declared property getter: - (id)dueBefore;	// 0x2da935d9
- (void)encodeWithCoder:(id)coder;	// 0x2da93389
- (BOOL)isEqual:(id)equal;	// 0x2db00751
// declared property getter: - (BOOL)limitToCompletedOrIncomplete;	// 0x2da935a9
// declared property getter: - (id)listTitle;	// 0x2da93599
// declared property getter: - (unsigned)maxResults;	// 0x2da93629
// declared property getter: - (id)searchTerm;	// 0x2da93609
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x2da92da5
// declared property setter: - (void)setDueAfter:(id)after;	// 0x2da92db5
// declared property setter: - (void)setDueBefore:(id)before;	// 0x2da92dc5
// declared property setter: - (void)setLimitToCompletedOrIncomplete:(BOOL)completedOrIncomplete;	// 0x2da92d95
// declared property setter: - (void)setListTitle:(id)title;	// 0x2db00c85
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x2db00cb5
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x2db00ca5
// declared property setter: - (void)setSortOrder:(int)order;	// 0x2da92dd5
// declared property setter: - (void)setTitle:(id)title;	// 0x2db00c75
// declared property setter: - (void)setUseCompletionDateAsAlternate:(BOOL)alternate;	// 0x2da92d85
// declared property setter: - (void)setUseDueDateAsCompletionDate:(BOOL)date;	// 0x2db00c95
// declared property getter: - (int)sortOrder;	// 0x2da93619
// declared property getter: - (id)title;	// 0x2da93589
// declared property getter: - (BOOL)useCompletionDateAsAlternate;	// 0x2da935f9
// declared property getter: - (BOOL)useDueDateAsCompletionDate;	// 0x2da935e9
@end

