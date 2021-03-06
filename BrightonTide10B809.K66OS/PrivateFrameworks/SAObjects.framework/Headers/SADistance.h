/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *unit;	// G=0x353fd649; S=0x353fd665; 
@property(copy, nonatomic) NSString *units;	// G=0x353fd6b5; S=0x353fd6d1; 
@property(retain, nonatomic) NSNumber *value;	// G=0x353fd721; S=0x353fd73d; 
+ (id)distance;	// 0x353fd5b9
+ (id)distanceWithDictionary:(id)dictionary context:(id)context;	// 0x353fd5fd
- (id)encodedClassName;	// 0x353fd5ad
- (id)groupIdentifier;	// 0x353fd59d
// declared property setter: - (void)setUnit:(id)unit;	// 0x353fd665
// declared property setter: - (void)setUnits:(id)units;	// 0x353fd6d1
// declared property setter: - (void)setValue:(id)value;	// 0x353fd73d
// declared property getter: - (id)unit;	// 0x353fd649
// declared property getter: - (id)units;	// 0x353fd6b5
// declared property getter: - (id)value;	// 0x353fd721
@end

