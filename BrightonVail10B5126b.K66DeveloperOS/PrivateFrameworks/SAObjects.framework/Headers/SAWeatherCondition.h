/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *conditionCode;	// G=0x353d8e2d; S=0x353d8e49; 
@property(assign, nonatomic) int conditionCodeIndex;	// G=0x353d8e99; S=0x353d8f09; 
+ (id)condition;	// 0x353d8d9d
+ (id)conditionWithDictionary:(id)dictionary context:(id)context;	// 0x353d8de1
// declared property getter: - (id)conditionCode;	// 0x353d8e2d
// declared property getter: - (int)conditionCodeIndex;	// 0x353d8e99
- (id)encodedClassName;	// 0x353d8d91
- (id)groupIdentifier;	// 0x353d8d81
// declared property setter: - (void)setConditionCode:(id)code;	// 0x353d8e49
// declared property setter: - (void)setConditionCodeIndex:(int)index;	// 0x353d8f09
@end

