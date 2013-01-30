/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	NSArray *_standingsItems;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x161f6d; S=0x161f7d; @synthesize=_header
@property(retain, nonatomic) NSArray *standingsItems;	// G=0x161f8d; S=0x161f9d; @synthesize=_standingsItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x161d19
- (void)dealloc;	// 0x161f09
// declared property getter: - (id)header;	// 0x161f6d
// declared property setter: - (void)setHeader:(id)header;	// 0x161f7d
// declared property setter: - (void)setStandingsItems:(id)items;	// 0x161f9d
// declared property getter: - (id)standingsItems;	// 0x161f8d
@end
