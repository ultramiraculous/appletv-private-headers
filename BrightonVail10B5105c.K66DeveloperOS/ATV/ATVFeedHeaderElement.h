/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	NSString *_horizontalAlignment;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *horizontalAlignment;	// G=0x15dfb9; S=0x15dfcd; @synthesize=_horizontalAlignment
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15df99; S=0x15dfa9; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x15df75; S=0x15df89; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x15df51; S=0x15df65; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15dd75
- (void)dealloc;	// 0x15dec5
// declared property getter: - (id)horizontalAlignment;	// 0x15dfb9
// declared property getter: - (id)image;	// 0x15df99
// declared property setter: - (void)setHorizontalAlignment:(id)alignment;	// 0x15dfcd
// declared property setter: - (void)setImage:(id)image;	// 0x15dfa9
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x15df89
// declared property setter: - (void)setTitle:(id)title;	// 0x15df65
// declared property getter: - (id)subtitle;	// 0x15df75
// declared property getter: - (id)title;	// 0x15df51
@end

