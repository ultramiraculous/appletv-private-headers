/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedHeadToHeadBannerElement : ATVFeedElement {
	ATVFeedImageElement *_backgroundImage;	// 4 = 0x4
	ATVFeedImageElement *_leftImage;	// 8 = 0x8
	ATVFeedImageElement *_rightImage;	// 12 = 0xc
	NSString *_imageSeparatorText;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x12d28d; S=0x12d29d; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *imageSeparatorText;	// G=0x12d335; S=0x12d345; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x12d2c5; S=0x12d2d5; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x12d2fd; S=0x12d30d; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12d069
- (void).cxx_destruct;	// 0x12d36d
// declared property getter: - (id)backgroundImage;	// 0x12d28d
// declared property getter: - (id)imageSeparatorText;	// 0x12d335
// declared property getter: - (id)leftImage;	// 0x12d2c5
// declared property getter: - (id)rightImage;	// 0x12d2fd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x12d29d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x12d345
// declared property setter: - (void)setLeftImage:(id)image;	// 0x12d2d5
// declared property setter: - (void)setRightImage:(id)image;	// 0x12d30d
@end

