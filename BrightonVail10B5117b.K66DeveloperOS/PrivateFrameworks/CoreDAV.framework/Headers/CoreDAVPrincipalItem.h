/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_all;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_authenticated;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_unauthenticated;	// 40 = 0x28
	CoreDAVItem *_property;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_selfItem;	// 48 = 0x30
}
@property(retain) CoreDAVItemWithNoChildren *all;	// G=0x338f713d; S=0x338f7151; @synthesize=_all
@property(retain) CoreDAVItemWithNoChildren *authenticated;	// G=0x338f7161; S=0x338f7175; @synthesize=_authenticated
@property(retain) CoreDAVHrefItem *href;	// G=0x338f7119; S=0x338f712d; @synthesize=_href
@property(retain) CoreDAVItem *property;	// G=0x338f71a9; S=0x338f71bd; @synthesize=_property
@property(retain) CoreDAVItemWithNoChildren *selfItem;	// G=0x338f71cd; S=0x338f71e1; @synthesize=_selfItem
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x338f7185; S=0x338f7199; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x338f6bc5
- (id)init;	// 0x338f6571
- (id)initTypeIsAll;	// 0x338f659d
- (id)initTypeIsAuthenticated;	// 0x338f66d1
- (id)initTypeIsHREFWithURL:(id)url;	// 0x338f6629
- (id)initTypeIsProperty:(id)property;	// 0x338f669d
- (id)initTypeIsSelf;	// 0x338f67e9
- (id)initTypeIsUnauthenticated;	// 0x338f675d
// declared property getter: - (id)all;	// 0x338f713d
// declared property getter: - (id)authenticated;	// 0x338f7161
- (void)dealloc;	// 0x338f6875
- (id)description;	// 0x338f6929
- (id)hashString;	// 0x338f7001
// declared property getter: - (id)href;	// 0x338f7119
// declared property getter: - (id)property;	// 0x338f71a9
// declared property getter: - (id)selfItem;	// 0x338f71cd
// declared property setter: - (void)setAll:(id)all;	// 0x338f7151
// declared property setter: - (void)setAuthenticated:(id)authenticated;	// 0x338f7175
// declared property setter: - (void)setHref:(id)href;	// 0x338f712d
// declared property setter: - (void)setProperty:(id)property;	// 0x338f71bd
// declared property setter: - (void)setSelfItem:(id)item;	// 0x338f71e1
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x338f7199
// declared property getter: - (id)unauthenticated;	// 0x338f7185
- (void)write:(id)write;	// 0x338f6a9d
@end
