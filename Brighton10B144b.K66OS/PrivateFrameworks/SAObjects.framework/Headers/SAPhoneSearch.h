/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate, NSNumber;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x353bf031; S=0x353bf04d; 
@property(copy, nonatomic) NSString *incomingPhoneNumber;	// G=0x353bf09d; S=0x353bf0b9; 
@property(copy, nonatomic) NSNumber *limit;	// G=0x353bf109; S=0x353bf125; 
@property(assign, nonatomic) BOOL missed;	// G=0x353bf175; S=0x353bf1ed; 
@property(copy, nonatomic) NSString *outgoingPhoneNumber;	// G=0x353bf231; S=0x353bf24d; 
@property(copy, nonatomic) NSDate *start;	// G=0x353bf29d; S=0x353bf2b9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353bef55; S=0x353befd1; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353bf309; S=0x353bf325; 
+ (id)search;	// 0x353beec5
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353bef09
- (id)encodedClassName;	// 0x353beeb9
// declared property getter: - (id)end;	// 0x353bf031
- (id)groupIdentifier;	// 0x353beea9
// declared property getter: - (id)incomingPhoneNumber;	// 0x353bf09d
// declared property getter: - (id)limit;	// 0x353bf109
// declared property getter: - (BOOL)missed;	// 0x353bf175
// declared property getter: - (id)outgoingPhoneNumber;	// 0x353bf231
- (BOOL)requiresResponse;	// 0x353bf375
// declared property setter: - (void)setEnd:(id)end;	// 0x353bf04d
// declared property setter: - (void)setIncomingPhoneNumber:(id)number;	// 0x353bf0b9
// declared property setter: - (void)setLimit:(id)limit;	// 0x353bf125
// declared property setter: - (void)setMissed:(BOOL)missed;	// 0x353bf1ed
// declared property setter: - (void)setOutgoingPhoneNumber:(id)number;	// 0x353bf24d
// declared property setter: - (void)setStart:(id)start;	// 0x353bf2b9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353befd1
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353bf325
// declared property getter: - (id)start;	// 0x353bf29d
// declared property getter: - (id)targetAppId;	// 0x353bef55
// declared property getter: - (id)timeZoneId;	// 0x353bf309
@end
