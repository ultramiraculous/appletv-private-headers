/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSURL, SADomainObject;

@interface SADomainObjectCreate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x303bb0cd; S=0x303bb121; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303baff1; S=0x303bb06d; 
+ (id)domainObjectCreate;	// 0x303baf61
+ (id)domainObjectCreateWithDictionary:(id)dictionary context:(id)context;	// 0x303bafa5
- (id)encodedClassName;	// 0x303baf55
- (id)groupIdentifier;	// 0x303baf45
// declared property getter: - (id)object;	// 0x303bb0cd
- (BOOL)requiresResponse;	// 0x303bb15d
// declared property setter: - (void)setObject:(id)object;	// 0x303bb121
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303bb06d
// declared property getter: - (id)targetAppId;	// 0x303baff1
@end
