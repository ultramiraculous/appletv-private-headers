/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_unauthenticated;	// 28 = 0x1c
}
@property(retain) CoreDAVHrefItem *href;	// G=0x347bb051; S=0x347bb065; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x347bb089; S=0x347bb09d; @synthesize=_unauthenticated
- (id)init;	// 0x347bad3d
- (id)copyParseRules;	// 0x347baeb1
- (void)dealloc;	// 0x347bad69
- (id)description;	// 0x347badc9
// declared property getter: - (id)href;	// 0x347bb051
// declared property setter: - (void)setHref:(id)href;	// 0x347bb065
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x347bb09d
// declared property getter: - (id)unauthenticated;	// 0x347bb089
@end
