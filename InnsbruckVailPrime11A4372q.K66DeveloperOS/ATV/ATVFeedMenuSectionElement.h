/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_menuItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x128005; S=0x128015; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x12803d; S=0x12804d; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x127d69
- (void).cxx_destruct;	// 0x128075
// declared property getter: - (id)header;	// 0x128005
// declared property getter: - (id)menuItems;	// 0x12803d
// declared property setter: - (void)setHeader:(id)header;	// 0x128015
// declared property setter: - (void)setMenuItems:(id)items;	// 0x12804d
@end

