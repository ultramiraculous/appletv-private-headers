/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSString;

@interface ICSTimeZone : ICSComponent {
	id _systemTimeZone;	// 12 = 0xc
}
@property(retain) NSString *tzid;	// G=0x317af549; S=0x317af591; 
+ (id)blocksAfterDate:(id)date untilDate:(id)date2 forTimeZone:(id)timeZone;	// 0x317af6e9
+ (id)name;	// 0x317af4e9
+ (id)timeZoneWithSystemTimeZoneName:(id)systemTimeZoneName;	// 0x317b120d
- (id)initWithSystemTimeZone:(id)systemTimeZone;	// 0x317b0a55
- (id)initWithSystemTimeZone:(id)systemTimeZone fromDate:(id)date options:(int)options;	// 0x317af4f5
- (id)initWithTimeZone:(id)timeZone fromDate:(id)date options:(int)options;	// 0x317b0c51
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x317dc3a9
- (void)dealloc;	// 0x317af641
- (id)getNSTimeZone:(id)zone;	// 0x317dc1f1
- (id)getNSTimeZoneFromDate:(id)date toDate:(id)date2;	// 0x317dbe15
- (BOOL)isEqualToNSTimeZone:(id)nstimeZone forDate:(id)date;	// 0x317dbbd1
// declared property setter: - (void)setTzid:(id)tzid;	// 0x317af591
- (id)systemTimeZoneForDate:(id)date;	// 0x317af5b1
// declared property getter: - (id)tzid;	// 0x317af549
@end

