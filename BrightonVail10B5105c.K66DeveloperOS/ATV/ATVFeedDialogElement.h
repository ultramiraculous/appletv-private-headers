/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedDialogElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *description;	// G=0x1577b1; S=0x1577c5; @synthesize=_description
@property(copy, nonatomic) NSString *title;	// G=0x15778d; S=0x1577a1; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15766d
- (void)dealloc;	// 0x157729
// declared property getter: - (id)description;	// 0x1577b1
// declared property setter: - (void)setDescription:(id)description;	// 0x1577c5
// declared property setter: - (void)setTitle:(id)title;	// 0x1577a1
// declared property getter: - (id)title;	// 0x15778d
@end
