/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl, BRTextControl, BRHorizontalDividerControl, NSNumber;

__attribute__((visibility("hidden")))
@interface BRMetadataLongDescriptionControl : BRControl {
	BRTextControl *_titleLayer;	// 84 = 0x54
	BRTextControl *_titleSubtextLayer;	// 88 = 0x58
	BRTextControl *_priceLayer;	// 92 = 0x5c
	BRControl *_formatControl;	// 96 = 0x60
	BRTextControl *_releaseDateLayer;	// 100 = 0x64
	BRTextControl *_lengthLayer;	// 104 = 0x68
	BRTextControl *_studioNameLayer;	// 108 = 0x6c
	BRImageControl *_ratingImageLayer;	// 112 = 0x70
	BRControl *_userRatingControl;	// 116 = 0x74
	BRImageControl *_topRightImageLayer;	// 120 = 0x78
	BRTextControl *_summaryLayer;	// 124 = 0x7c
	BRTextControl *_copyrightLayer;	// 128 = 0x80
	NSNumber *_trackNumber;	// 132 = 0x84
	BRHorizontalDividerControl *_topDivider;	// 136 = 0x88
	BRHorizontalDividerControl *_bottomDivider;	// 140 = 0x8c
	NSArray *_metadataObjs;	// 144 = 0x90
	NSArray *_metadataLabels;	// 148 = 0x94
	float _totalHeight;	// 152 = 0x98
	int _alignment;	// 156 = 0x9c
	CGSize _artworkSize;	// 160 = 0xa0
}
- (id)init;	// 0x2fae59
- (void)_setCopyright:(id)copyright;	// 0x2fc989
- (void)_setFormatControl:(id)control;	// 0x2fc39d
- (void)_setLength:(id)length;	// 0x2fc4dd
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x2fc8f5
- (void)_setPrice:(id)price;	// 0x2fc2cd
- (void)_setRating:(id)rating;	// 0x2fc67d
- (void)_setReleaseDate:(id)date;	// 0x2fc40d
- (void)_setStudioName:(id)name;	// 0x2fc5ad
- (void)_setSummary:(id)summary;	// 0x2fc769
- (void)_setTitle:(id)title;	// 0x2fc001
- (void)_setTitleSubtext:(id)subtext;	// 0x2fc0d1
- (void)_setTopRightImage:(id)image;	// 0x2fc749
- (void)_setTrackNumber:(id)number;	// 0x2fc1a1
- (void)_setUserRatingControl:(id)control;	// 0x2fc6d9
- (id)accessibilityScreenContent;	// 0x2fca59
- (void)dealloc;	// 0x2fb135
- (void)layoutSubcontrols;	// 0x2fb809
- (CGSize)renderedSize;	// 0x2fb765
- (void)resetAllFields;	// 0x2fb2f1
- (void)setAlignment:(int)alignment;	// 0x2fbf99
- (void)setArtworkSize:(CGSize)size;	// 0x2fbfa9
- (void)setCopyright:(id)copyright;	// 0x2fb729
- (void)setFormatControl:(id)control;	// 0x2fb4fd
- (void)setLength:(id)length;	// 0x2fb575
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2fb6ed
- (void)setPrice:(id)price;	// 0x2fb4c1
- (void)setRating:(id)rating;	// 0x2fb5ed
- (void)setReleaseDate:(id)date;	// 0x2fb539
- (void)setStudioName:(id)name;	// 0x2fb5b1
- (void)setSummary:(id)summary;	// 0x2fb6b1
- (void)setTitle:(id)title;	// 0x2fb40d
- (void)setTitleSubtext:(id)subtext;	// 0x2fb449
- (void)setTopRightImage:(id)image;	// 0x2fb675
- (void)setTrackNumber:(id)number;	// 0x2fb485
- (void)setUserRatingControl:(id)control;	// 0x2fb629
- (id)topRightImageControl;	// 0x2fb665
- (void)windowMaxBoundsChanged;	// 0x2fb7c9
@end
