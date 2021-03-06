/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *emailAddress;	// G=0x3252f261; S=0x3252f27d; 
@property(copy, nonatomic) NSNumber *favoriteFacetime;	// G=0x3252f2cd; S=0x3252f2e9; 
@property(copy, nonatomic) NSString *label;	// G=0x3252f339; S=0x3252f355; 
+ (id)email;	// 0x3252f1d1
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x3252f215
// declared property getter: - (id)emailAddress;	// 0x3252f261
- (id)encodedClassName;	// 0x3252f1c5
// declared property getter: - (id)favoriteFacetime;	// 0x3252f2cd
- (id)groupIdentifier;	// 0x3252f1b5
// declared property getter: - (id)label;	// 0x3252f339
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3252f27d
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x3252f2e9
// declared property setter: - (void)setLabel:(id)label;	// 0x3252f355
@end

