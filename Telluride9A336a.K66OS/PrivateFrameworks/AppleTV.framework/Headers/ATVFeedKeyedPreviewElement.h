/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedKeyedPreviewElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_rightLabel;	// 32 = 0x20
	NSString *_summary;	// 36 = 0x24
	NSString *_footnote;	// 40 = 0x28
	NSString *_rating;	// 44 = 0x2c
	ATVFeedImageElement *_image;	// 48 = 0x30
	NSArray *_metadataKeys;	// 52 = 0x34
	NSArray *_metadataValues;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *footnote;	// G=0x33bab945; S=0x33bab955; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x33bab9ad; S=0x33bab9bd; @synthesize=_image
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x33bab9e1; S=0x33bab9f1; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x33baba15; S=0x33baba25; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x33bab979; S=0x33bab989; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x33bab8dd; S=0x33bab8ed; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x33bab911; S=0x33bab921; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x33bab8a9; S=0x33bab8b9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33bab431
- (void)dealloc;	// 0x33bab7d1
// declared property getter: - (id)footnote;	// 0x33bab945
// declared property getter: - (id)image;	// 0x33bab9ad
// declared property getter: - (id)metadataKeys;	// 0x33bab9e1
// declared property getter: - (id)metadataValues;	// 0x33baba15
// declared property getter: - (id)rating;	// 0x33bab979
// declared property getter: - (id)rightLabel;	// 0x33bab8dd
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x33bab955
// declared property setter: - (void)setImage:(id)image;	// 0x33bab9bd
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x33bab9f1
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x33baba25
// declared property setter: - (void)setRating:(id)rating;	// 0x33bab989
// declared property setter: - (void)setRightLabel:(id)label;	// 0x33bab8ed
// declared property setter: - (void)setSummary:(id)summary;	// 0x33bab921
// declared property setter: - (void)setTitle:(id)title;	// 0x33bab8b9
// declared property getter: - (id)summary;	// 0x33bab911
// declared property getter: - (id)title;	// 0x33bab8a9
@end

