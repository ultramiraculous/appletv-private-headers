/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(copy, nonatomic) NSArray *identifiers;	// G=0x353df17d; S=0x353df1f9; 
+ (id)domainObjectRetrieve;	// 0x353df0ed
+ (id)domainObjectRetrieveWithDictionary:(id)dictionary context:(id)context;	// 0x353df131
- (id)encodedClassName;	// 0x353df0e1
- (id)groupIdentifier;	// 0x353df0d1
// declared property getter: - (id)identifiers;	// 0x353df17d
- (BOOL)requiresResponse;	// 0x353df261
// declared property setter: - (void)setIdentifiers:(id)identifiers;	// 0x353df1f9
@end

