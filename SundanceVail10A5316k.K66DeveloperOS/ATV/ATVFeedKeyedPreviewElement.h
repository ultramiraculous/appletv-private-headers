/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedKeyedPreviewElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_rightLabel;	// 8 = 0x8
	NSString *_summary;	// 12 = 0xc
	NSString *_footnote;	// 16 = 0x10
	NSString *_rating;	// 20 = 0x14
	ATVFeedImageElement *_image;	// 24 = 0x18
	NSArray *_metadataKeys;	// 28 = 0x1c
	NSArray *_metadataValues;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *footnote;	// G=0x138705; S=0x138719; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13874d; S=0x13875d; @synthesize=_image
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x13876d; S=0x13877d; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x13878d; S=0x13879d; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x138729; S=0x13873d; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x1386bd; S=0x1386d1; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x1386e1; S=0x1386f5; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x138699; S=0x1386ad; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x138231
- (void)dealloc;	// 0x1385bd
// declared property getter: - (id)footnote;	// 0x138705
// declared property getter: - (id)image;	// 0x13874d
// declared property getter: - (id)metadataKeys;	// 0x13876d
// declared property getter: - (id)metadataValues;	// 0x13878d
// declared property getter: - (id)rating;	// 0x138729
// declared property getter: - (id)rightLabel;	// 0x1386bd
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x138719
// declared property setter: - (void)setImage:(id)image;	// 0x13875d
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x13877d
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x13879d
// declared property setter: - (void)setRating:(id)rating;	// 0x13873d
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1386d1
// declared property setter: - (void)setSummary:(id)summary;	// 0x1386f5
// declared property setter: - (void)setTitle:(id)title;	// 0x1386ad
// declared property getter: - (id)summary;	// 0x1386e1
// declared property getter: - (id)title;	// 0x138699
@end

