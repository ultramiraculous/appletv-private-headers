/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
}
@property(retain) CoreDAVHrefItem *href;	// G=0x32c66215; S=0x32c66229; @synthesize=_href
- (id)copyParseRules;	// 0x32c66071
- (void)dealloc;	// 0x32c65f71
- (id)description;	// 0x32c65fbd
// declared property getter: - (id)href;	// 0x32c66215
// declared property setter: - (void)setHref:(id)href;	// 0x32c66229
- (void)write:(id)write;	// 0x32c6616d
@end

