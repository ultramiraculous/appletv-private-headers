/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SARelatedName : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *label;	// G=0x325322b9; S=0x325322d5; 
@property(copy, nonatomic) NSString *name;	// G=0x32532325; S=0x32532341; 
+ (id)relatedName;	// 0x32532229
+ (id)relatedNameWithDictionary:(id)dictionary context:(id)context;	// 0x3253226d
- (id)encodedClassName;	// 0x3253221d
- (id)groupIdentifier;	// 0x3253220d
// declared property getter: - (id)label;	// 0x325322b9
// declared property getter: - (id)name;	// 0x32532325
// declared property setter: - (void)setLabel:(id)label;	// 0x325322d5
// declared property setter: - (void)setName:(id)name;	// 0x32532341
@end

