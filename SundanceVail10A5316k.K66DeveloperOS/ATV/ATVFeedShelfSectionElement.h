/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfSectionElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSArray *_shelfItems;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *shelfItems;	// G=0x136f55; S=0x136f65; @synthesize=_shelfItems
@property(copy, nonatomic) NSString *title;	// G=0x136f31; S=0x136f45; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x136d11
- (void)dealloc;	// 0x136ecd
// declared property setter: - (void)setShelfItems:(id)items;	// 0x136f65
// declared property setter: - (void)setTitle:(id)title;	// 0x136f45
// declared property getter: - (id)shelfItems;	// 0x136f55
// declared property getter: - (id)title;	// 0x136f31
@end

