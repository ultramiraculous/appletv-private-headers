/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedMenuElement, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	ATVFeedElement *_preview;	// 8 = 0x8
	ATVFeedMenuElement *_menu;	// 12 = 0xc
	NSString *_listDescription;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x1234e1; S=0x1234f1; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x123589; S=0x123599; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x123551; S=0x123561; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x123519; S=0x123529; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12323d
- (void).cxx_destruct;	// 0x1235c1
// declared property getter: - (id)header;	// 0x1234e1
// declared property getter: - (id)listDescription;	// 0x123589
// declared property getter: - (id)menu;	// 0x123551
// declared property getter: - (id)preview;	// 0x123519
// declared property setter: - (void)setHeader:(id)header;	// 0x1234f1
// declared property setter: - (void)setListDescription:(id)description;	// 0x123599
// declared property setter: - (void)setMenu:(id)menu;	// 0x123561
// declared property setter: - (void)setPreview:(id)preview;	// 0x123529
@end
