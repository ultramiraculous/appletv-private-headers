/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRTextControl, BRHorizontalDividerControl, BRMetadataLinesLayer, NSString, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRMetadataControl : BRControl {
	BRTextControl *_titleLayer;	// 80 = 0x50
	BRTextControl *_rightJustifiedTitleLayer;	// 84 = 0x54
	BRImageControl *_ratingImageLayer;	// 88 = 0x58
	BRImageControl *_starRatingImageLayer;	// 92 = 0x5c
	BRImageControl *_topRightImageLayer;	// 96 = 0x60
	BRTextControl *_summaryLayer;	// 100 = 0x64
	BRMetadataLinesLayer *_metadataLinesLayer;	// 104 = 0x68
	BRTextControl *_copyrightLayer;	// 108 = 0x6c
	BRHorizontalDividerControl *_topDividerLayer;	// 112 = 0x70
	BRHorizontalDividerControl *_middleDividerLayer;	// 116 = 0x74
	BRHorizontalDividerControl *_bottomDividerLayer;	// 120 = 0x78
	NSArray *_metadataObjs;	// 124 = 0x7c
	NSArray *_metadataLabels;	// 128 = 0x80
	float _totalHeight;	// 132 = 0x84
	int _alignment;	// 136 = 0x88
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x2bd705; S=0x2bd6bd; 
- (id)init;	// 0x2bd1d9
- (void)_setCopyright:(id)copyright;	// 0x2be9e9
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x2be955
- (void)_setRating:(id)rating;	// 0x2be6e5
- (void)_setStarRating:(id)rating;	// 0x2be741
- (void)_setSummary:(id)summary;	// 0x2be7bd
- (void)_setTitle:(id)title;	// 0x2be625
- (void)_setTopRightImage:(id)image;	// 0x2be79d
- (id)accessibilityLabel;	// 0x2be549
- (void)dealloc;	// 0x2bd45d
- (void)layoutSubcontrols;	// 0x2bd9e9
- (CGSize)renderedSize;	// 0x2bd941
- (void)resetAllFields;	// 0x2bd5c9
// declared property getter: - (id)rightJustifiedTitle;	// 0x2bd705
- (void)setAlignment:(int)alignment;	// 0x2be615
- (void)setCopyright:(id)copyright;	// 0x2bd905
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2bd8c9
- (void)setRating:(id)rating;	// 0x2bd73d
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x2bd6bd
- (void)setStarRating:(id)rating;	// 0x2bd805
- (void)setSummary:(id)summary;	// 0x2bd88d
- (void)setTitle:(id)title;	// 0x2bd681
- (void)setTopRightImage:(id)image;	// 0x2bd851
- (void)setUserRating:(id)rating;	// 0x2bd779
- (id)topRightImageControl;	// 0x2bd841
- (void)windowMaxBoundsChanged;	// 0x2bd9a5
@end

