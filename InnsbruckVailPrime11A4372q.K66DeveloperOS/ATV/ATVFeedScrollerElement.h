/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerElement : ATVFeedRootElement {
	NSString *_backgroundMediaURLString;	// 4 = 0x4
	BOOL _fixedHeader;	// 8 = 0x8
	ATVFeedHeaderElement *_header;	// 12 = 0xc
	NSArray *_scrollerItems;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *backgroundMediaURLString;	// G=0x11e921; 
@property(assign, nonatomic) BOOL fixedHeader;	// G=0x11e935; S=0x11e945; @synthesize=_fixedHeader
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x11e955; S=0x11e965; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x11e98d; S=0x11e99d; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11e5dd
- (void).cxx_destruct;	// 0x11e9c5
// declared property getter: - (id)backgroundMediaURLString;	// 0x11e921
// declared property getter: - (BOOL)fixedHeader;	// 0x11e935
// declared property getter: - (id)header;	// 0x11e955
// declared property getter: - (id)scrollerItems;	// 0x11e98d
// declared property setter: - (void)setFixedHeader:(BOOL)header;	// 0x11e945
// declared property setter: - (void)setHeader:(id)header;	// 0x11e965
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x11e99d
@end
