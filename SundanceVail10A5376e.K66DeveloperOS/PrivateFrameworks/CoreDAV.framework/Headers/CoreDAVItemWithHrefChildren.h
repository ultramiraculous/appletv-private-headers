/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
	NSMutableSet *_hrefs;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 32 = 0x20
}
@property(retain) NSMutableSet *hrefs;	// G=0x33a5fc0d; S=0x33a5fc21; @synthesize=_hrefs
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x33a5fc31; S=0x33a5fc45; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x33a5f529
- (void)addHref:(id)href;	// 0x33a5f741
- (void)dealloc;	// 0x33a5f3d9
- (id)description;	// 0x33a5f43d
// declared property getter: - (id)hrefs;	// 0x33a5fc0d
- (id)hrefsAsFullURLs;	// 0x33a5f7d9
- (id)hrefsAsOriginalURLs;	// 0x33a5f94d
- (id)hrefsAsStrings;	// 0x33a5faad
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x33a5fc21
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x33a5fc45
// declared property getter: - (id)unauthenticated;	// 0x33a5fc31
@end
