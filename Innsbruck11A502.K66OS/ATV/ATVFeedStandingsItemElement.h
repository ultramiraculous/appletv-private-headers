/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement, ATVFeedTableElement;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsItemElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	ATVFeedImageElement *_backgroundImage;	// 8 = 0x8
	ATVFeedTableElement *_table;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x136219; S=0x136229; @synthesize=_backgroundImage
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x136251; S=0x136261; @synthesize=_table
@property(retain, nonatomic) NSString *title;	// G=0x1361e1; S=0x1361f1; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13603d
- (void).cxx_destruct;	// 0x136289
// declared property getter: - (id)backgroundImage;	// 0x136219
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x136229
// declared property setter: - (void)setTable:(id)table;	// 0x136261
// declared property setter: - (void)setTitle:(id)title;	// 0x1361f1
// declared property getter: - (id)table;	// 0x136251
// declared property getter: - (id)title;	// 0x1361e1
@end

