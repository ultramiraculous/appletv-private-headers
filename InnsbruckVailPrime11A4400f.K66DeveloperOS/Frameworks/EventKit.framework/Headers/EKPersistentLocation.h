/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentObject.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x2da9a159; S=0x2da9e62d; 
@property(retain) id alarmOwner;	// G=0x2db07ced; S=0x2db07cd1; converted property
@property(retain) id calendarItemOwner;	// G=0x2db07cb5; S=0x2db07c99; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x2da9a015; S=0x2da9e6b5; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x2da9a105; S=0x2da9e6d1; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x2da9a1c5; S=0x2da9e649; 
@property(copy, nonatomic) NSString *title;	// G=0x2da90fd1; S=0x2da9e611; 
+ (id)defaultPropertiesToLoad;	// 0x2da8d935
+ (id)relations;	// 0x2da9a031
- (id)init;	// 0x2da99dad
// declared property getter: - (id)addressBookEntityID;	// 0x2da9a159
// converted property getter: - (id)alarmOwner;	// 0x2db07ced
// converted property getter: - (id)calendarItemOwner;	// 0x2db07cb5
- (id)copyWithZone:(NSZone *)zone;	// 0x2db07d09
- (id)description;	// 0x2db07e01
- (int)entityType;	// 0x2db07c95
// declared property getter: - (id)latitude;	// 0x2da9a015
// declared property getter: - (id)longitude;	// 0x2da9a105
// declared property getter: - (id)radius;	// 0x2da9a1c5
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x2da9e62d
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x2db07cd1
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x2db07c99
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x2da9e6b5
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x2da9e6d1
// declared property setter: - (void)setRadius:(id)radius;	// 0x2da9e649
// declared property setter: - (void)setTitle:(id)title;	// 0x2da9e611
// declared property getter: - (id)title;	// 0x2da90fd1
@end
