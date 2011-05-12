/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"

@class NSDate;

@interface DACalendarRecurrence : DACalendarObject {
}
@property(assign, nonatomic) unsigned count;	// G=0x31ec4611; S=0x31ec4629; 
@property(retain, nonatomic) NSDate *endDate;	// G=0x31ec4645; S=0x31ec467d; 
@property(assign, nonatomic) int frequency;	// G=0x31ec4575; S=0x31ec458d; 
@property(assign, nonatomic) unsigned interval;	// G=0x31ec45a9; S=0x31ec45c1; 
@property(readonly, assign, nonatomic) int uid;	// G=0x31ec455d; 
@property(assign, nonatomic) int weekStart;	// G=0x31ec45dd; S=0x31ec45f5; 
// declared property getter: - (unsigned)count;	// 0x31ec4611
// declared property getter: - (id)endDate;	// 0x31ec4645
// declared property getter: - (int)frequency;	// 0x31ec4575
// declared property getter: - (unsigned)interval;	// 0x31ec45a9
// declared property setter: - (void)setCount:(unsigned)count;	// 0x31ec4629
// declared property setter: - (void)setEndDate:(id)date;	// 0x31ec467d
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x31ec458d
// declared property setter: - (void)setInterval:(unsigned)interval;	// 0x31ec45c1
// declared property setter: - (void)setWeekStart:(int)start;	// 0x31ec45f5
// declared property getter: - (int)uid;	// 0x31ec455d
// declared property getter: - (int)weekStart;	// 0x31ec45dd
@end
