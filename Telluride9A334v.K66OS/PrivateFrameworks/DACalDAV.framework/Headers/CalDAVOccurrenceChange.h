/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {
	BOOL _isMaster;	// 4 = 0x4
	ICSDate *_recurrenceID;	// 8 = 0x8
	NSMutableDictionary *_changes;	// 12 = 0xc
}
@property(readonly, assign) BOOL attachmentsChanged;	// G=0x35b60685; 
@property(readonly, assign) BOOL attendeesChanged;	// G=0x35b60619; 
@property(readonly, assign) BOOL dateTimeChanged;	// G=0x35b604b9; 
@property(readonly, assign) BOOL descriptionChanged;	// G=0x35b6063d; 
@property(readonly, assign) BOOL endTimeChanged;	// G=0x35b60521; 
@property(assign) BOOL isMaster;	// G=0x35b60725; S=0x35b60735; @synthesize=_isMaster
@property(readonly, assign) BOOL locationChanged;	// G=0x35b605ad; 
@property(readonly, assign) BOOL participationChanged;	// G=0x35b606cd; 
@property(readonly, assign) BOOL privateCommentChanged;	// G=0x35b60701; 
@property(readonly, assign) BOOL recurrenceChanged;	// G=0x35b606a9; 
@property(retain) ICSDate *recurrenceID;	// G=0x35b60745; S=0x35b60759; @synthesize=_recurrenceID
@property(readonly, assign) BOOL startTimeChanged;	// G=0x35b604fd; 
@property(readonly, assign) BOOL statusChanged;	// G=0x35b60661; 
@property(readonly, assign) BOOL summaryChanged;	// G=0x35b605f5; 
@property(readonly, assign) BOOL timeZoneChanged;	// G=0x35b60545; 
@property(readonly, assign) BOOL urlChanged;	// G=0x35b605d1; 
+ (id)changeWithItem:(id)item;	// 0x35b5ff9d
+ (id)changeWithOccurrenceID:(id)occurrenceID;	// 0x35b5ff55
- (id)init;	// 0x35b5fdbd
- (id)initWithOccurrenceID:(id)occurrenceID;	// 0x35b5fe3d
- (void)addChangedParameter:(id)parameter ofProperty:(id)property;	// 0x35b602f5
- (void)addChangedProperty:(id)property;	// 0x35b6025d
- (id)allChanges;	// 0x35b6024d
// declared property getter: - (BOOL)attachmentsChanged;	// 0x35b60685
// declared property getter: - (BOOL)attendeesChanged;	// 0x35b60619
// declared property getter: - (BOOL)dateTimeChanged;	// 0x35b604b9
- (void)dealloc;	// 0x35b5fef5
// declared property getter: - (BOOL)descriptionChanged;	// 0x35b6063d
- (BOOL)didParameterChange:(id)change onProperty:(id)property;	// 0x35b6040d
- (BOOL)didPropertyChange:(id)change;	// 0x35b603dd
// declared property getter: - (BOOL)endTimeChanged;	// 0x35b60521
// declared property getter: - (BOOL)isMaster;	// 0x35b60725
// declared property getter: - (BOOL)locationChanged;	// 0x35b605ad
// declared property getter: - (BOOL)participationChanged;	// 0x35b606cd
// declared property getter: - (BOOL)privateCommentChanged;	// 0x35b60701
// declared property getter: - (BOOL)recurrenceChanged;	// 0x35b606a9
// declared property getter: - (id)recurrenceID;	// 0x35b60745
// declared property setter: - (void)setIsMaster:(BOOL)master;	// 0x35b60735
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x35b60759
// declared property getter: - (BOOL)startTimeChanged;	// 0x35b604fd
// declared property getter: - (BOOL)statusChanged;	// 0x35b60661
// declared property getter: - (BOOL)summaryChanged;	// 0x35b605f5
// declared property getter: - (BOOL)timeZoneChanged;	// 0x35b60545
// declared property getter: - (BOOL)urlChanged;	// 0x35b605d1
@end

