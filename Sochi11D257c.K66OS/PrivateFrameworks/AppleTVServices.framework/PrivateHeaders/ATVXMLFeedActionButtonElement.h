/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVXMLFeedElement.h"

@class ATVXMLFeedImageElement, NSString;

@interface ATVXMLFeedActionButtonElement : ATVXMLFeedElement {
	NSString *_title;	// 20 = 0x14
	NSString *_subtitle;	// 24 = 0x18
	ATVXMLFeedImageElement *_image;	// 28 = 0x1c
	ATVXMLFeedImageElement *_focusedImage;	// 32 = 0x20
	NSString *_badge;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *badge;	// G=0x30433acd; S=0x30433ae1; @synthesize=_badge
@property(retain, nonatomic) ATVXMLFeedImageElement *focusedImage;	// G=0x30433a95; S=0x30433aa5; @synthesize=_focusedImage
@property(retain, nonatomic) ATVXMLFeedImageElement *image;	// G=0x30433a5d; S=0x30433a6d; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x30433a39; S=0x30433a4d; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x30433a15; S=0x30433a29; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement parentFeedElement:(id)element;	// 0x3043373d
- (void).cxx_destruct;	// 0x30433af1
// declared property getter: - (id)badge;	// 0x30433acd
- (id)description;	// 0x30433965
// declared property getter: - (id)focusedImage;	// 0x30433a95
// declared property getter: - (id)image;	// 0x30433a5d
// declared property setter: - (void)setBadge:(id)badge;	// 0x30433ae1
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x30433aa5
// declared property setter: - (void)setImage:(id)image;	// 0x30433a6d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x30433a4d
// declared property setter: - (void)setTitle:(id)title;	// 0x30433a29
// declared property getter: - (id)subtitle;	// 0x30433a39
// declared property getter: - (id)title;	// 0x30433a15
@end

