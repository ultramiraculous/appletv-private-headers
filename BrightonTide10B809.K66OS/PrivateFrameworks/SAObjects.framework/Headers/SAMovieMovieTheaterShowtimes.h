/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *movieShowtimes;	// G=0x353fa1dd; S=0x353fa259; 
@property(copy, nonatomic) NSArray *showtimes;	// G=0x353fa2c1; S=0x353fa2dd; 
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;	// G=0x353fa32d; S=0x353fa381; 
+ (id)movieTheaterShowtimes;	// 0x353fa14d
+ (id)movieTheaterShowtimesWithDictionary:(id)dictionary context:(id)context;	// 0x353fa191
- (id)encodedClassName;	// 0x353fa141
- (id)groupIdentifier;	// 0x353fa131
// declared property getter: - (id)movieShowtimes;	// 0x353fa1dd
// declared property setter: - (void)setMovieShowtimes:(id)showtimes;	// 0x353fa259
// declared property setter: - (void)setShowtimes:(id)showtimes;	// 0x353fa2dd
// declared property setter: - (void)setTheater:(id)theater;	// 0x353fa381
// declared property getter: - (id)showtimes;	// 0x353fa2c1
// declared property getter: - (id)theater;	// 0x353fa32d
@end

