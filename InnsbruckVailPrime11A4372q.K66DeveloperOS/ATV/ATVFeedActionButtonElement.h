/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedActionButtonElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	ATVFeedImageElement *_focusedImage;	// 16 = 0x10
	NSString *_badge;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *badge;	// G=0x129489; S=0x129499; @synthesize=_badge
@property(retain, nonatomic) ATVFeedImageElement *focusedImage;	// G=0x129451; S=0x129461; @synthesize=_focusedImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x129419; S=0x129429; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x1293f5; S=0x129409; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x1293d1; S=0x1293e5; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x129185
- (void).cxx_destruct;	// 0x1294c1
// declared property getter: - (id)badge;	// 0x129489
// declared property getter: - (id)focusedImage;	// 0x129451
// declared property getter: - (id)image;	// 0x129419
// declared property setter: - (void)setBadge:(id)badge;	// 0x129499
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x129461
// declared property setter: - (void)setImage:(id)image;	// 0x129429
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x129409
// declared property setter: - (void)setTitle:(id)title;	// 0x1293e5
// declared property getter: - (id)subtitle;	// 0x1293f5
// declared property getter: - (id)title;	// 0x1293d1
@end
