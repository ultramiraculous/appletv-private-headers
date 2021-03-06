/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedSubScrollerElement : ATVFeedElement {
@private
	ATVFeedHeaderElement *_header;	// 28 = 0x1c
	NSArray *_scrollerItems;	// 32 = 0x20
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x367c5a9d; S=0x367c5aad; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x367c5ad1; S=0x367c5ae1; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367c5869
- (void)dealloc;	// 0x367c5a3d
// declared property getter: - (id)header;	// 0x367c5a9d
// declared property getter: - (id)scrollerItems;	// 0x367c5ad1
// declared property setter: - (void)setHeader:(id)header;	// 0x367c5aad
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x367c5ae1
@end

