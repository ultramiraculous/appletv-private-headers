/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x35f723e5; S=0x35f723f9; @synthesize=_privileges
+ (id)copyParseRules;	// 0x35f71fb5
- (id)init;	// 0x35f71e79
- (void)addPrivilege:(id)privilege;	// 0x35f72139
- (void)dealloc;	// 0x35f71ea5
- (id)description;	// 0x35f71ef1
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35f721d1
// declared property getter: - (id)privileges;	// 0x35f723e5
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x35f723f9
@end
