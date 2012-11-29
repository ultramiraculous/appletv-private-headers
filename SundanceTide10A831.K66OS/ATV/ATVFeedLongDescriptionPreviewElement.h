/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedStarRatingElement, NSString, NSArray, ATVFeedImageElement, ATVFeedMediaBadgesElement;

__attribute__((visibility("hidden")))
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_summary;	// 8 = 0x8
	NSString *_footnote;	// 12 = 0xc
	NSString *_rating;	// 16 = 0x10
	ATVFeedImageElement *_image;	// 20 = 0x14
	NSArray *_metadataLabels;	// 24 = 0x18
	ATVFeedMediaBadgesElement *_mediaBadges;	// 28 = 0x1c
	ATVFeedStarRatingElement *_starRating;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *footnote;	// G=0x15ae9d; S=0x15aeb1; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15aee5; S=0x15aef5; @synthesize=_image
@property(retain, nonatomic) ATVFeedMediaBadgesElement *mediaBadges;	// G=0x15af25; S=0x15af35; @synthesize=_mediaBadges
@property(retain, nonatomic) NSArray *metadataLabels;	// G=0x15af05; S=0x15af15; @synthesize=_metadataLabels
@property(copy, nonatomic) NSString *rating;	// G=0x15aec1; S=0x15aed5; @synthesize=_rating
@property(retain, nonatomic) ATVFeedStarRatingElement *starRating;	// G=0x15af45; S=0x15af55; @synthesize=_starRating
@property(copy, nonatomic) NSString *summary;	// G=0x15ae79; S=0x15ae8d; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x15ae55; S=0x15ae69; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15aa41
- (void)dealloc;	// 0x15ad79
// declared property getter: - (id)footnote;	// 0x15ae9d
// declared property getter: - (id)image;	// 0x15aee5
// declared property getter: - (id)mediaBadges;	// 0x15af25
// declared property getter: - (id)metadataLabels;	// 0x15af05
// declared property getter: - (id)rating;	// 0x15aec1
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x15aeb1
// declared property setter: - (void)setImage:(id)image;	// 0x15aef5
// declared property setter: - (void)setMediaBadges:(id)badges;	// 0x15af35
// declared property setter: - (void)setMetadataLabels:(id)labels;	// 0x15af15
// declared property setter: - (void)setRating:(id)rating;	// 0x15aed5
// declared property setter: - (void)setStarRating:(id)rating;	// 0x15af55
// declared property setter: - (void)setSummary:(id)summary;	// 0x15ae8d
// declared property setter: - (void)setTitle:(id)title;	// 0x15ae69
// declared property getter: - (id)starRating;	// 0x15af45
// declared property getter: - (id)summary;	// 0x15ae79
// declared property getter: - (id)title;	// 0x15ae55
@end
