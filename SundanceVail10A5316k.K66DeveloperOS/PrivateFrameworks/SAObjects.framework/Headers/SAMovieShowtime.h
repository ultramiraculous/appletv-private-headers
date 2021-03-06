/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, SAUIAppPunchOut, SACalendar;

@interface SAMovieShowtime : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;	// G=0x32f6d1d5; S=0x32f6d229; 
@property(copy, nonatomic) NSNumber *childTicketQuantity;	// G=0x32f6d265; S=0x32f6d281; 
@property(assign, nonatomic) BOOL is3d;	// G=0x32f6d2d1; S=0x32f6d349; 
@property(assign, nonatomic) BOOL isImax;	// G=0x32f6d38d; S=0x32f6d405; 
@property(copy, nonatomic) NSNumber *regularTicketQuantity;	// G=0x32f6d449; S=0x32f6d465; 
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;	// G=0x32f6d4b5; S=0x32f6d4d1; 
@property(retain, nonatomic) SACalendar *showtime;	// G=0x32f6d521; S=0x32f6d575; 
+ (id)showtime;	// 0x32f6d145
+ (id)showtimeWithDictionary:(id)dictionary context:(id)context;	// 0x32f6d189
// declared property getter: - (id)buyTicketsPunchout;	// 0x32f6d1d5
// declared property getter: - (id)childTicketQuantity;	// 0x32f6d265
- (id)encodedClassName;	// 0x32f6d139
- (id)groupIdentifier;	// 0x32f6d129
// declared property getter: - (BOOL)is3d;	// 0x32f6d2d1
// declared property getter: - (BOOL)isImax;	// 0x32f6d38d
// declared property getter: - (id)regularTicketQuantity;	// 0x32f6d449
// declared property getter: - (id)seniorTicketQuantity;	// 0x32f6d4b5
// declared property setter: - (void)setBuyTicketsPunchout:(id)punchout;	// 0x32f6d229
// declared property setter: - (void)setChildTicketQuantity:(id)quantity;	// 0x32f6d281
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x32f6d349
// declared property setter: - (void)setIsImax:(BOOL)imax;	// 0x32f6d405
// declared property setter: - (void)setRegularTicketQuantity:(id)quantity;	// 0x32f6d465
// declared property setter: - (void)setSeniorTicketQuantity:(id)quantity;	// 0x32f6d4d1
// declared property setter: - (void)setShowtime:(id)showtime;	// 0x32f6d575
// declared property getter: - (id)showtime;	// 0x32f6d521
@end

