/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
}
@property(retain) CoreDAVHrefItem *href;	// G=0x304ad0ed; S=0x304ad101; @synthesize=_href
+ (id)copyParseRules;	// 0x304aceb5
- (void)dealloc;	// 0x304acdb5
- (id)description;	// 0x304ace01
// declared property getter: - (id)href;	// 0x304ad0ed
// declared property setter: - (void)setHref:(id)href;	// 0x304ad101
- (void)write:(id)write;	// 0x304ad045
@end

