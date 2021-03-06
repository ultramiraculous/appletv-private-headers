/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *addFields;	// G=0x304f1de9; S=0x304f1e3d; 
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x304f1e79; S=0x304f1ecd; 
@property(retain, nonatomic) SADomainObject *removeFields;	// G=0x304f1f09; S=0x304f1f5d; 
@property(retain, nonatomic) SADomainObject *setFields;	// G=0x304f1f99; S=0x304f1fed; 
+ (id)domainObjectUpdate;	// 0x304f1d59
+ (id)domainObjectUpdateWithDictionary:(id)dictionary context:(id)context;	// 0x304f1d9d
// declared property getter: - (id)addFields;	// 0x304f1de9
- (id)encodedClassName;	// 0x304f1d4d
- (id)groupIdentifier;	// 0x304f1d3d
// declared property getter: - (id)identifier;	// 0x304f1e79
// declared property getter: - (id)removeFields;	// 0x304f1f09
- (BOOL)requiresResponse;	// 0x304f2029
// declared property setter: - (void)setAddFields:(id)fields;	// 0x304f1e3d
// declared property getter: - (id)setFields;	// 0x304f1f99
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x304f1ecd
// declared property setter: - (void)setRemoveFields:(id)fields;	// 0x304f1f5d
// declared property setter: - (void)setSetFields:(id)fields;	// 0x304f1fed
@end

