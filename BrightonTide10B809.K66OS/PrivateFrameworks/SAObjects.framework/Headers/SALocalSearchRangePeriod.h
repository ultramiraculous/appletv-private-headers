/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocalSearchPeriod.h"
#import "AceObject.h"


@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod> {
}
@property(assign, nonatomic) int endSecondsSinceMidnight;	// G=0x35400701; S=0x35400771; 
@property(assign, nonatomic) int startSecondsSinceMidnight;	// G=0x354007b5; S=0x35400825; 
+ (id)rangePeriod;	// 0x35400671
+ (id)rangePeriodWithDictionary:(id)dictionary context:(id)context;	// 0x354006b5
- (id)encodedClassName;	// 0x35400665
// declared property getter: - (int)endSecondsSinceMidnight;	// 0x35400701
- (id)groupIdentifier;	// 0x35400655
// declared property setter: - (void)setEndSecondsSinceMidnight:(int)midnight;	// 0x35400771
// declared property setter: - (void)setStartSecondsSinceMidnight:(int)midnight;	// 0x35400825
// declared property getter: - (int)startSecondsSinceMidnight;	// 0x354007b5
@end

