/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHeadToHeadBannerElement : ATVFeedElement {
	ATVFeedImageElement *_backgroundImage;	// 4 = 0x4
	ATVFeedImageElement *_leftImage;	// 8 = 0x8
	ATVFeedImageElement *_rightImage;	// 12 = 0xc
	NSString *_imageSeparatorText;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x135f01; S=0x135f11; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *imageSeparatorText;	// G=0x135fa9; S=0x135fb9; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x135f39; S=0x135f49; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x135f71; S=0x135f81; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x135cdd
- (void).cxx_destruct;	// 0x135fe1
// declared property getter: - (id)backgroundImage;	// 0x135f01
// declared property getter: - (id)imageSeparatorText;	// 0x135fa9
// declared property getter: - (id)leftImage;	// 0x135f39
// declared property getter: - (id)rightImage;	// 0x135f71
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x135f11
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x135fb9
// declared property setter: - (void)setLeftImage:(id)image;	// 0x135f49
// declared property setter: - (void)setRightImage:(id)image;	// 0x135f81
@end

