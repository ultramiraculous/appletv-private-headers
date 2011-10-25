/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate;

@interface ICSTimeZoneBlock : ICSComponent {
}
@property(retain) ICSDate *dtstart;	// G=0x3464f30d; S=0x3464f345; 
@property(retain) NSArray *rdate;	// G=0x3464f385; S=0x3464f365; 
@property(retain) NSArray *rrule;	// G=0x3464f4c9; S=0x3464f3a5; 
@property(assign) NSArray *tzname;	// G=0x3464f5b5; S=0x3464f6a1; 
@property(assign) int tzoffsetfrom;	// G=0x3464f7c1; S=0x3464f819; 
@property(assign) int tzoffsetto;	// G=0x3464f869; S=0x3464f8c1; 
- (void)addRecurrenceDate:(id)date;	// 0x3464f911
- (int)compare:(id)compare;	// 0x3462368d
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x346508fd
// declared property getter: - (id)dtstart;	// 0x3464f30d
// declared property getter: - (id)rdate;	// 0x3464f385
// declared property getter: - (id)rrule;	// 0x3464f4c9
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x3464f345
// declared property setter: - (void)setRdate:(id)rdate;	// 0x3464f365
// declared property setter: - (void)setRrule:(id)rrule;	// 0x3464f3a5
// declared property setter: - (void)setTzname:(id)tzname;	// 0x3464f6a1
// declared property setter: - (void)setTzoffsetfrom:(int)tzoffsetfrom;	// 0x3464f819
// declared property setter: - (void)setTzoffsetto:(int)tzoffsetto;	// 0x3464f8c1
// declared property getter: - (id)tzname;	// 0x3464f5b5
// declared property getter: - (int)tzoffsetfrom;	// 0x3464f7c1
// declared property getter: - (int)tzoffsetto;	// 0x3464f869
- (BOOL)validate:(id *)validate;	// 0x3464f0cd
@end

