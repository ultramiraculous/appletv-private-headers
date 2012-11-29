/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *description;	// G=0x303d0639; S=0x303d0655; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x303d06a5; S=0x303d0721; 
@property(copy, nonatomic) NSNumber *selected;	// G=0x303d0789; S=0x303d07a5; 
+ (id)metadataGroup;	// 0x303d05a9
+ (id)metadataGroupWithDictionary:(id)dictionary context:(id)context;	// 0x303d05ed
// declared property getter: - (id)description;	// 0x303d0639
- (id)encodedClassName;	// 0x303d059d
- (id)groupIdentifier;	// 0x303d058d
// declared property getter: - (id)metadata;	// 0x303d06a5
// declared property getter: - (id)selected;	// 0x303d0789
// declared property setter: - (void)setDescription:(id)description;	// 0x303d0655
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x303d0721
// declared property setter: - (void)setSelected:(id)selected;	// 0x303d07a5
@end
