/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	NSArray *_standingsItems;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x135fad; S=0x135fbd; @synthesize=_header
@property(retain, nonatomic) NSArray *standingsItems;	// G=0x135fcd; S=0x135fdd; @synthesize=_standingsItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x135d59
- (void)dealloc;	// 0x135f49
// declared property getter: - (id)header;	// 0x135fad
// declared property setter: - (void)setHeader:(id)header;	// 0x135fbd
// declared property setter: - (void)setStandingsItems:(id)items;	// 0x135fdd
// declared property getter: - (id)standingsItems;	// 0x135fcd
@end

