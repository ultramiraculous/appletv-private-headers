/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x3253669d; S=0x325366f1; 
+ (id)acknowledgeAlert;	// 0x3253660d
+ (id)acknowledgeAlertWithDictionary:(id)dictionary context:(id)context;	// 0x32536651
- (id)encodedClassName;	// 0x32536601
- (id)groupIdentifier;	// 0x325365f1
// declared property getter: - (id)object;	// 0x3253669d
- (BOOL)requiresResponse;	// 0x3253672d
// declared property setter: - (void)setObject:(id)object;	// 0x325366f1
@end

