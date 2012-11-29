/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 28 = 0x1c
}
@property(retain) NSMutableSet *privileges;	// G=0x3341ef3d; S=0x3341ef51; @synthesize=_privileges
+ (id)copyParseRules;	// 0x3341eb0d
- (id)init;	// 0x3341e9d1
- (void)addPrivilege:(id)privilege;	// 0x3341ec91
- (void)dealloc;	// 0x3341e9fd
- (id)description;	// 0x3341ea49
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3341ed29
// declared property getter: - (id)privileges;	// 0x3341ef3d
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x3341ef51
@end
