/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAEmail : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *emailAddress;	// G=0x36622b91; S=0x36622bad; 
@property(copy, nonatomic) NSNumber *favoriteFacetime;	// G=0x36622bfd; S=0x36622c19; 
@property(copy, nonatomic) NSString *label;	// G=0x36622c69; S=0x36622c85; 
+ (id)email;	// 0x36622b01
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x36622b45
// declared property getter: - (id)emailAddress;	// 0x36622b91
- (id)encodedClassName;	// 0x36622af5
// declared property getter: - (id)favoriteFacetime;	// 0x36622bfd
- (id)groupIdentifier;	// 0x36622ae5
// declared property getter: - (id)label;	// 0x36622c69
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x36622bad
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x36622c19
// declared property setter: - (void)setLabel:(id)label;	// 0x36622c85
@end
