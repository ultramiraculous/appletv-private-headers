/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class SALocalSearchAceNavigationEta, NSNumber, NSString, SALocalSearchRoute;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) NSNumber *etaInMinutes;	// G=0x353f65f1; S=0x353f660d; 
@property(retain, nonatomic) NSNumber *navigating;	// G=0x353f6629; S=0x353f6645; 
@property(retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;	// G=0x353f6661; S=0x353f66b5; 
@property(retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;	// G=0x353f66f1; S=0x353f6745; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SALocalSearchRoute *route;	// G=0x353f6781; S=0x353f67d5; 
+ (id)getNavigationStatusCompleted;	// 0x353f6561
+ (id)getNavigationStatusCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353f65a5
- (id)encodedClassName;	// 0x353f6555
// declared property getter: - (id)etaInMinutes;	// 0x353f65f1
- (id)groupIdentifier;	// 0x353f6545
// declared property getter: - (id)navigating;	// 0x353f6629
// declared property getter: - (id)nextManeuverEta;	// 0x353f6661
// declared property getter: - (id)overallEta;	// 0x353f66f1
// declared property getter: - (id)route;	// 0x353f6781
// declared property setter: - (void)setEtaInMinutes:(id)minutes;	// 0x353f660d
// declared property setter: - (void)setNavigating:(id)navigating;	// 0x353f6645
// declared property setter: - (void)setNextManeuverEta:(id)eta;	// 0x353f66b5
// declared property setter: - (void)setOverallEta:(id)eta;	// 0x353f6745
// declared property setter: - (void)setRoute:(id)route;	// 0x353f67d5
@end

