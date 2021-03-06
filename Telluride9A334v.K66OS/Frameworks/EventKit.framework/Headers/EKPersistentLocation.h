/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString, NSNumber;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x3275bf6d; S=0x32760d1d; 
@property(retain) id alarmOwner;	// G=0x327b3e31; S=0x327b3e15; converted property
@property(retain) id calendarItemOwner;	// G=0x327b3df9; S=0x327b3ddd; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x3275befd; S=0x32760e09; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x3275bf19; S=0x32760e25; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x3275bfc1; S=0x32760d39; 
@property(copy, nonatomic) NSString *title;	// G=0x32752bc9; S=0x32760d01; 
+ (id)relations;	// 0x32760aa5
- (id)init;	// 0x3275bc99
// declared property getter: - (id)addressBookEntityID;	// 0x3275bf6d
// converted property getter: - (id)alarmOwner;	// 0x327b3e31
// converted property getter: - (id)calendarItemOwner;	// 0x327b3df9
- (id)copyWithZone:(NSZone *)zone;	// 0x327b3e4d
- (id)description;	// 0x327b3f45
- (int)entityType;	// 0x327b3dd9
// declared property getter: - (id)latitude;	// 0x3275befd
// declared property getter: - (id)longitude;	// 0x3275bf19
// declared property getter: - (id)radius;	// 0x3275bfc1
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x32760d1d
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x327b3e15
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x327b3ddd
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x32760e09
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x32760e25
// declared property setter: - (void)setRadius:(id)radius;	// 0x32760d39
// declared property setter: - (void)setTitle:(id)title;	// 0x32760d01
// declared property getter: - (id)title;	// 0x32752bc9
@end

