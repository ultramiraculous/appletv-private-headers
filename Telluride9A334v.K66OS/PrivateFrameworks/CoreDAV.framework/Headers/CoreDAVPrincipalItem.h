/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_all;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_authenticated;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_unauthenticated;	// 36 = 0x24
	CoreDAVItem *_property;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_selfItem;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *all;	// G=0x347b7aa1; S=0x347b7ab5; @synthesize=_all
@property(retain) CoreDAVItemWithNoChildren *authenticated;	// G=0x347b7ad9; S=0x347b7aed; @synthesize=_authenticated
@property(retain) CoreDAVHrefItem *href;	// G=0x347b7a69; S=0x347b7a7d; @synthesize=_href
@property(retain) CoreDAVItem *property;	// G=0x347b7b49; S=0x347b7b5d; @synthesize=_property
@property(retain) CoreDAVItemWithNoChildren *selfItem;	// G=0x347b7b81; S=0x347b7b95; @synthesize=_selfItem
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x347b7b11; S=0x347b7b25; @synthesize=_unauthenticated
- (id)init;	// 0x347b6e59
- (id)initTypeIsAll;	// 0x347b6e85
- (id)initTypeIsAuthenticated;	// 0x347b6fb9
- (id)initTypeIsHREFWithURL:(id)url;	// 0x347b6f11
- (id)initTypeIsProperty:(id)property;	// 0x347b6f85
- (id)initTypeIsSelf;	// 0x347b70d1
- (id)initTypeIsUnauthenticated;	// 0x347b7045
// declared property getter: - (id)all;	// 0x347b7aa1
// declared property getter: - (id)authenticated;	// 0x347b7ad9
- (id)copyParseRules;	// 0x347b74fd
- (void)dealloc;	// 0x347b715d
- (id)description;	// 0x347b720d
- (id)hashString;	// 0x347b7951
// declared property getter: - (id)href;	// 0x347b7a69
// declared property getter: - (id)property;	// 0x347b7b49
// declared property getter: - (id)selfItem;	// 0x347b7b81
// declared property setter: - (void)setAll:(id)all;	// 0x347b7ab5
// declared property setter: - (void)setAuthenticated:(id)authenticated;	// 0x347b7aed
// declared property setter: - (void)setHref:(id)href;	// 0x347b7a7d
// declared property setter: - (void)setProperty:(id)property;	// 0x347b7b5d
// declared property setter: - (void)setSelfItem:(id)item;	// 0x347b7b95
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x347b7b25
// declared property getter: - (id)unauthenticated;	// 0x347b7b11
- (void)write:(id)write;	// 0x347b737d
@end
