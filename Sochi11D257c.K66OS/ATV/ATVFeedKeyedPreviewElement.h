/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString, ATVFeedImageElement;

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
	int _likeCount;	// 36 = 0x24
	int _dislikeCount;	// 40 = 0x28
}
@property(assign, nonatomic) int dislikeCount;	// G=0x140831; S=0x140841; @synthesize=_dislikeCount
@property(copy, nonatomic) NSString *footnote;	// G=0x140721; S=0x140735; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x140769; S=0x140779; @synthesize=_image
@property(assign, nonatomic) int likeCount;	// G=0x140811; S=0x140821; @synthesize=_likeCount
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x1407a1; S=0x1407b1; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x1407d9; S=0x1407e9; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x140745; S=0x140759; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x1406d9; S=0x1406ed; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x1406fd; S=0x140711; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x1406b5; S=0x1406c9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1400a9
- (void).cxx_destruct;	// 0x140851
// declared property getter: - (int)dislikeCount;	// 0x140831
// declared property getter: - (id)footnote;	// 0x140721
// declared property getter: - (id)image;	// 0x140769
// declared property getter: - (int)likeCount;	// 0x140811
// declared property getter: - (id)metadataKeys;	// 0x1407a1
// declared property getter: - (id)metadataValues;	// 0x1407d9
// declared property getter: - (id)rating;	// 0x140745
// declared property getter: - (id)rightLabel;	// 0x1406d9
// declared property setter: - (void)setDislikeCount:(int)count;	// 0x140841
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x140735
// declared property setter: - (void)setImage:(id)image;	// 0x140779
// declared property setter: - (void)setLikeCount:(int)count;	// 0x140821
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x1407b1
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x1407e9
// declared property setter: - (void)setRating:(id)rating;	// 0x140759
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1406ed
// declared property setter: - (void)setSummary:(id)summary;	// 0x140711
// declared property setter: - (void)setTitle:(id)title;	// 0x1406c9
// declared property getter: - (id)summary;	// 0x1406fd
// declared property getter: - (id)title;	// 0x1406b5
@end

