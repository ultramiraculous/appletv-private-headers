/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerElement : ATVFeedRootElement {
@private
	BOOL _fixedHeader;	// 44 = 0x2c
	ATVFeedHeaderElement *_header;	// 48 = 0x30
	NSArray *_scrollerItems;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL fixedHeader;	// G=0x33b91f91; S=0x33b91fa1; @synthesize=_fixedHeader
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x33b91fb1; S=0x33b91fc1; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x33b91fe5; S=0x33b91ff5; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33b91d19
- (void)dealloc;	// 0x33b91f31
// declared property getter: - (BOOL)fixedHeader;	// 0x33b91f91
// declared property getter: - (id)header;	// 0x33b91fb1
// declared property getter: - (id)scrollerItems;	// 0x33b91fe5
// declared property setter: - (void)setFixedHeader:(BOOL)header;	// 0x33b91fa1
// declared property setter: - (void)setHeader:(id)header;	// 0x33b91fc1
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x33b91ff5
@end

