/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *serviceType;	// G=0x3797dfa9; S=0x3797dfc5; 
@property(copy, nonatomic) NSString *url;	// G=0x3797e015; S=0x3797e031; 
@property(copy, nonatomic) NSString *userName;	// G=0x3797e081; S=0x3797e09d; 
+ (id)socialProfile;	// 0x3797df19
+ (id)socialProfileWithDictionary:(id)dictionary context:(id)context;	// 0x3797df5d
- (id)encodedClassName;	// 0x3797df0d
- (id)groupIdentifier;	// 0x3797defd
// declared property getter: - (id)serviceType;	// 0x3797dfa9
// declared property setter: - (void)setServiceType:(id)type;	// 0x3797dfc5
// declared property setter: - (void)setUrl:(id)url;	// 0x3797e031
// declared property setter: - (void)setUserName:(id)name;	// 0x3797e09d
// declared property getter: - (id)url;	// 0x3797e015
// declared property getter: - (id)userName;	// 0x3797e081
@end

