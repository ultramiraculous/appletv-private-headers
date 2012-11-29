/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedPhotoBatchElement : ATVFeedElement {
	NSString *_dimmedTitle;	// 4 = 0x4
	NSArray *_items;	// 8 = 0x8
	NSString *_boldTitle;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *boldTitle;	// G=0x3ca785; S=0x3ca795; @synthesize=_boldTitle
@property(retain, nonatomic) NSString *dimmedTitle;	// G=0x3ca715; S=0x3ca725; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSArray *items;	// G=0x3ca74d; S=0x3ca75d; @synthesize=_items
@property(retain, nonatomic) NSString *title;	// G=0x3ca7bd; S=0x3ca7cd; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3ca469
- (void).cxx_destruct;	// 0x3ca7f5
// declared property getter: - (id)boldTitle;	// 0x3ca785
// declared property getter: - (id)dimmedTitle;	// 0x3ca715
// declared property getter: - (id)items;	// 0x3ca74d
// declared property setter: - (void)setBoldTitle:(id)title;	// 0x3ca795
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0x3ca725
// declared property setter: - (void)setItems:(id)items;	// 0x3ca75d
// declared property setter: - (void)setTitle:(id)title;	// 0x3ca7cd
// declared property getter: - (id)title;	// 0x3ca7bd
@end
