/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedInitialSelectionElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuElement : ATVFeedElement {
	ATVFeedInitialSelectionElement *_initialSelection;	// 4 = 0x4
	NSArray *_sections;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedInitialSelectionElement *initialSelection;	// G=0x162791; S=0x1627a1; @synthesize=_initialSelection
@property(retain, nonatomic) NSArray *sections;	// G=0x1627b1; S=0x1627c1; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x16255d
- (void)dealloc;	// 0x16272d
// declared property getter: - (id)initialSelection;	// 0x162791
// declared property getter: - (id)sections;	// 0x1627b1
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0x1627a1
// declared property setter: - (void)setSections:(id)sections;	// 0x1627c1
@end

