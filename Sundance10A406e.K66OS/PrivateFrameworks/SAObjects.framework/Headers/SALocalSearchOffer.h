/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *identifier;	// G=0x3254f5d9; S=0x3254f5f5; 
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;	// G=0x3254f645; S=0x3254f699; 
@property(copy, nonatomic) NSString *title;	// G=0x3254f6d5; S=0x3254f6f1; 
+ (id)offer;	// 0x3254f549
+ (id)offerWithDictionary:(id)dictionary context:(id)context;	// 0x3254f58d
- (id)encodedClassName;	// 0x3254f53d
- (id)groupIdentifier;	// 0x3254f52d
// declared property getter: - (id)identifier;	// 0x3254f5d9
// declared property getter: - (id)offerPunchOut;	// 0x3254f645
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3254f5f5
// declared property setter: - (void)setOfferPunchOut:(id)anOut;	// 0x3254f699
// declared property setter: - (void)setTitle:(id)title;	// 0x3254f6f1
// declared property getter: - (id)title;	// 0x3254f6d5
@end

