/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
@private
	ATVFeedHeaderElement *_header;	// 28 = 0x1c
	NSArray *_menuItems;	// 32 = 0x20
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x33304071; S=0x33304081; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x333040a5; S=0x333040b5; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33303e3d
- (void)dealloc;	// 0x33304011
// declared property getter: - (id)header;	// 0x33304071
// declared property getter: - (id)menuItems;	// 0x333040a5
// declared property setter: - (void)setHeader:(id)header;	// 0x33304081
// declared property setter: - (void)setMenuItems:(id)items;	// 0x333040b5
@end

