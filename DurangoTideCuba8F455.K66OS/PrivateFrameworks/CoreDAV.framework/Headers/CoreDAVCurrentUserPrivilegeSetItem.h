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
@property(retain) NSMutableSet *privileges;	// G=0x33190741; S=0x33190759; @synthesize=_privileges
- (id)init;	// 0x331903d1
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x331904f9
- (void)addPrivilege:(id)privilege;	// 0x331902b9
- (id)copyParseRules;	// 0x331902e1
- (void)dealloc;	// 0x331904bd
- (id)description;	// 0x331903fd
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3319055d
// declared property getter: - (id)privileges;	// 0x33190741
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x33190759
@end
