/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *aceVersion;	// G=0x326f1185; S=0x326f11a1; 
@property(copy, nonatomic) NSString *classId;	// G=0x326f11f1; S=0x326f120d; 
@property(copy, nonatomic) NSString *groupId;	// G=0x326f125d; S=0x326f1279; 
@property(copy, nonatomic) NSArray *supportedProperties;	// G=0x326f12c9; S=0x326f12e5; 
+ (id)objectSupport;	// 0x326f10f5
+ (id)objectSupportWithDictionary:(id)dictionary context:(id)context;	// 0x326f1139
// declared property getter: - (id)aceVersion;	// 0x326f1185
// declared property getter: - (id)classId;	// 0x326f11f1
- (id)encodedClassName;	// 0x326f10e9
// declared property getter: - (id)groupId;	// 0x326f125d
- (id)groupIdentifier;	// 0x326f10d9
// declared property setter: - (void)setAceVersion:(id)version;	// 0x326f11a1
// declared property setter: - (void)setClassId:(id)anId;	// 0x326f120d
// declared property setter: - (void)setGroupId:(id)anId;	// 0x326f1279
// declared property setter: - (void)setSupportedProperties:(id)properties;	// 0x326f12e5
// declared property getter: - (id)supportedProperties;	// 0x326f12c9
@end

