/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x304f126d; S=0x304f12c1; 
+ (id)domainObjectCommit;	// 0x304f11dd
+ (id)domainObjectCommitWithDictionary:(id)dictionary context:(id)context;	// 0x304f1221
- (id)encodedClassName;	// 0x304f11d1
- (id)groupIdentifier;	// 0x304f11c1
// declared property getter: - (id)identifier;	// 0x304f126d
- (BOOL)requiresResponse;	// 0x304f12fd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x304f12c1
@end

