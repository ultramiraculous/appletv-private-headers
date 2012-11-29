/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSDate;

@interface SACalendar : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *date;	// G=0x303d0fc5; S=0x303d0fe1; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x303d1031; S=0x303d104d; 
+ (id)calendar;	// 0x303d0f35
+ (id)calendarWithDictionary:(id)dictionary context:(id)context;	// 0x303d0f79
// declared property getter: - (id)date;	// 0x303d0fc5
- (id)encodedClassName;	// 0x303d0f29
- (id)groupIdentifier;	// 0x303d0f19
// declared property setter: - (void)setDate:(id)date;	// 0x303d0fe1
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x303d104d
// declared property getter: - (id)timeZoneId;	// 0x303d1031
@end
