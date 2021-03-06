/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_menuItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x1604ad; S=0x1604bd; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x1604cd; S=0x1604dd; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x160259
- (void)dealloc;	// 0x160449
// declared property getter: - (id)header;	// 0x1604ad
// declared property getter: - (id)menuItems;	// 0x1604cd
// declared property setter: - (void)setHeader:(id)header;	// 0x1604bd
// declared property setter: - (void)setMenuItems:(id)items;	// 0x1604dd
@end

