/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;
@protocol SASupportCondition;

@interface SAConstraintSupport : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) id<SASupportCondition> condition;	// G=0x37977c4d; S=0x37977ca1; 
@property(copy, nonatomic) NSString *property;	// G=0x37977cdd; S=0x37977cf9; 
+ (id)constraintSupport;	// 0x37977bbd
+ (id)constraintSupportWithDictionary:(id)dictionary context:(id)context;	// 0x37977c01
// declared property getter: - (id)condition;	// 0x37977c4d
- (id)encodedClassName;	// 0x37977bb1
- (id)groupIdentifier;	// 0x37977ba1
// declared property getter: - (id)property;	// 0x37977cdd
// declared property setter: - (void)setCondition:(id)condition;	// 0x37977ca1
// declared property setter: - (void)setProperty:(id)property;	// 0x37977cf9
@end

