/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocalSearchPeriod.h"
#import "AceObject.h"

@class NSString;

@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod> {
}
@property(copy, nonatomic) NSString *value;	// G=0x30510dc9; S=0x30510de5; 
+ (id)namedPeriod;	// 0x30510d39
+ (id)namedPeriodWithDictionary:(id)dictionary context:(id)context;	// 0x30510d7d
- (id)encodedClassName;	// 0x30510d2d
- (id)groupIdentifier;	// 0x30510d1d
// declared property setter: - (void)setValue:(id)value;	// 0x30510de5
// declared property getter: - (id)value;	// 0x30510dc9
@end
