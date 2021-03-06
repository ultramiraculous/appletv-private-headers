/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SADistance : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *unit;	// G=0x32f6c025; S=0x32f6c041; 
@property(copy, nonatomic) NSString *units;	// G=0x32f6c091; S=0x32f6c0ad; 
@property(retain, nonatomic) NSNumber *value;	// G=0x32f6c0fd; S=0x32f6c119; 
+ (id)distance;	// 0x32f6bf95
+ (id)distanceWithDictionary:(id)dictionary context:(id)context;	// 0x32f6bfd9
- (id)encodedClassName;	// 0x32f6bf89
- (id)groupIdentifier;	// 0x32f6bf79
// declared property setter: - (void)setUnit:(id)unit;	// 0x32f6c041
// declared property setter: - (void)setUnits:(id)units;	// 0x32f6c0ad
// declared property setter: - (void)setValue:(id)value;	// 0x32f6c119
// declared property getter: - (id)unit;	// 0x32f6c025
// declared property getter: - (id)units;	// 0x32f6c091
// declared property getter: - (id)value;	// 0x32f6c0fd
@end

