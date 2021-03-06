/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAReminderListObject : SADomainObject {
}
@property(copy, nonatomic) NSString *name;	// G=0x326c57ed; S=0x326c5809; 
+ (id)listObject;	// 0x326c575d
+ (id)listObjectWithDictionary:(id)dictionary context:(id)context;	// 0x326c57a1
- (id)encodedClassName;	// 0x326c5751
- (id)groupIdentifier;	// 0x326c5741
// declared property getter: - (id)name;	// 0x326c57ed
// declared property setter: - (void)setName:(id)name;	// 0x326c5809
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326c5859
@end

