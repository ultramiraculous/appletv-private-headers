/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASupportCondition.h"
#import "AceObject.h"

@class NSArray;

@interface SAOrCondition : AceObject <SASupportCondition> {
}
@property(copy, nonatomic) NSArray *conditions;	// G=0x3050070d; S=0x30500775; 
+ (id)orCondition;	// 0x3050067d
+ (id)orConditionWithDictionary:(id)dictionary context:(id)context;	// 0x305006c1
// declared property getter: - (id)conditions;	// 0x3050070d
- (id)encodedClassName;	// 0x30500671
- (id)groupIdentifier;	// 0x30500661
// declared property setter: - (void)setConditions:(id)conditions;	// 0x30500775
@end

