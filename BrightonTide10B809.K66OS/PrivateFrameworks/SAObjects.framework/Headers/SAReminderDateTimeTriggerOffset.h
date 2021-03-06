/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *offsetTimeUnit;	// G=0x353e727d; S=0x353e7299; 
@property(copy, nonatomic) NSNumber *offsetValue;	// G=0x353e72e9; S=0x353e7305; 
+ (id)dateTimeTriggerOffset;	// 0x353e71ed
+ (id)dateTimeTriggerOffsetWithDictionary:(id)dictionary context:(id)context;	// 0x353e7231
- (id)encodedClassName;	// 0x353e71e1
- (id)groupIdentifier;	// 0x353e71d1
// declared property getter: - (id)offsetTimeUnit;	// 0x353e727d
// declared property getter: - (id)offsetValue;	// 0x353e72e9
// declared property setter: - (void)setOffsetTimeUnit:(id)unit;	// 0x353e7299
// declared property setter: - (void)setOffsetValue:(id)value;	// 0x353e7305
@end

