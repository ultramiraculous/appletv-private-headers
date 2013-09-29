/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedHeaderElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderWithCountAndButtonsElement : ATVFeedHeaderElement {
	unsigned _count;	// 4 = 0x4
	NSArray *_buttons;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *buttons;	// G=0x1388d5; S=0x1388e5; @synthesize=_buttons
@property(assign, nonatomic) unsigned count;	// G=0x1388b5; S=0x1388c5; @synthesize=_count
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1386a9
- (void).cxx_destruct;	// 0x13890d
// declared property getter: - (id)buttons;	// 0x1388d5
// declared property getter: - (unsigned)count;	// 0x1388b5
// declared property setter: - (void)setButtons:(id)buttons;	// 0x1388e5
// declared property setter: - (void)setCount:(unsigned)count;	// 0x1388c5
@end
