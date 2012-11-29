/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *date;	// G=0x32544505; S=0x32544521; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32544571; S=0x3254458d; 
+ (id)calendar;	// 0x32544475
+ (id)calendarWithDictionary:(id)dictionary context:(id)context;	// 0x325444b9
// declared property getter: - (id)date;	// 0x32544505
- (id)encodedClassName;	// 0x32544469
- (id)groupIdentifier;	// 0x32544459
// declared property setter: - (void)setDate:(id)date;	// 0x32544521
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3254458d
// declared property getter: - (id)timeZoneId;	// 0x32544571
@end
