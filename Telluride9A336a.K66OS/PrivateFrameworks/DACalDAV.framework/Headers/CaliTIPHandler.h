/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x36084925
+ (id)debugStringForEvent:(id)event;	// 0x360836bd
+ (BOOL)diffsAreImportant:(id)important;	// 0x36083595
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x360839ad
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x36083755
+ (void)initialize;	// 0x360833b9
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x36083b1d
+ (BOOL)logiTIPDetail;	// 0x36083425
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x36083b49
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x36083c2d
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x36083d1d
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x360834b5
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x36083435
@end
