/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, NSNumber, SAUIAppPunchOut, NSURL;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *bookingId;	// G=0x3050afa9; S=0x3050b025; 
@property(retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;	// G=0x3050b085; S=0x3050b0d9; 
@property(copy, nonatomic) NSNumber *partySize;	// G=0x3050b115; S=0x3050b131; 
@property(retain, nonatomic) SACalendar *timeSlot;	// G=0x3050b181; S=0x3050b1d5; 
+ (id)opening;	// 0x3050af19
+ (id)openingWithDictionary:(id)dictionary context:(id)context;	// 0x3050af5d
// declared property getter: - (id)bookingId;	// 0x3050afa9
- (id)encodedClassName;	// 0x3050af0d
- (id)groupIdentifier;	// 0x3050aefd
// declared property getter: - (id)makeReservationPunchOut;	// 0x3050b085
// declared property getter: - (id)partySize;	// 0x3050b115
// declared property setter: - (void)setBookingId:(id)anId;	// 0x3050b025
// declared property setter: - (void)setMakeReservationPunchOut:(id)anOut;	// 0x3050b0d9
// declared property setter: - (void)setPartySize:(id)size;	// 0x3050b131
// declared property setter: - (void)setTimeSlot:(id)slot;	// 0x3050b1d5
// declared property getter: - (id)timeSlot;	// 0x3050b181
@end

