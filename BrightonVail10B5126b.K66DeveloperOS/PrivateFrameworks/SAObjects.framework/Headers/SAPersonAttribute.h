/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAPerson, NSString;

@interface SAPersonAttribute : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *data;	// G=0x353e13a1; S=0x353e13bd; 
@property(copy, nonatomic) NSString *displayText;	// G=0x353e140d; S=0x353e1429; 
@property(retain, nonatomic) SAPerson *object;	// G=0x353e1479; S=0x353e14cd; 
+ (id)personAttribute;	// 0x353e1311
+ (id)personAttributeWithDictionary:(id)dictionary context:(id)context;	// 0x353e1355
// declared property getter: - (id)data;	// 0x353e13a1
// declared property getter: - (id)displayText;	// 0x353e140d
- (id)encodedClassName;	// 0x353e1305
- (id)groupIdentifier;	// 0x353e12f5
// declared property getter: - (id)object;	// 0x353e1479
// declared property setter: - (void)setData:(id)data;	// 0x353e13bd
// declared property setter: - (void)setDisplayText:(id)text;	// 0x353e1429
// declared property setter: - (void)setObject:(id)object;	// 0x353e14cd
@end

