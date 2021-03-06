/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerElement : ATVFeedRootElement {
@private
	BOOL _fixedHeader;	// 44 = 0x2c
	ATVFeedHeaderElement *_header;	// 48 = 0x30
	NSArray *_scrollerItems;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL fixedHeader;	// G=0x3317da7d; S=0x3317da8d; @synthesize=_fixedHeader
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x3317da9d; S=0x3317daad; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x3317dad1; S=0x3317dae1; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3317d805
- (void)dealloc;	// 0x3317da1d
// declared property getter: - (BOOL)fixedHeader;	// 0x3317da7d
// declared property getter: - (id)header;	// 0x3317da9d
// declared property getter: - (id)scrollerItems;	// 0x3317dad1
// declared property setter: - (void)setFixedHeader:(BOOL)header;	// 0x3317da8d
// declared property setter: - (void)setHeader:(id)header;	// 0x3317daad
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x3317dae1
@end

