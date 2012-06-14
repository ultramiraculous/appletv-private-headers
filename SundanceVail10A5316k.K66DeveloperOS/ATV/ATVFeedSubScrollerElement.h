/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedSubScrollerElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_scrollerItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x13655d; S=0x13656d; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x13657d; S=0x13658d; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x136309
- (void)dealloc;	// 0x1364f9
// declared property getter: - (id)header;	// 0x13655d
// declared property getter: - (id)scrollerItems;	// 0x13657d
// declared property setter: - (void)setHeader:(id)header;	// 0x13656d
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x13658d
@end

