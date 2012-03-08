/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSNumber, BRDividerControl, NSArray, BRImageControl, BRTextControl;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 44 = 0x2c
	BRTextControl *_titleSubtextLayer;	// 48 = 0x30
	BRTextControl *_priceLayer;	// 52 = 0x34
	BRControl *_formatControl;	// 56 = 0x38
	BRTextControl *_releaseDateLayer;	// 60 = 0x3c
	BRTextControl *_lengthLayer;	// 64 = 0x40
	BRTextControl *_studioNameLayer;	// 68 = 0x44
	BRImageControl *_ratingImageLayer;	// 72 = 0x48
	BRControl *_userRatingControl;	// 76 = 0x4c
	BRImageControl *_topRightImageLayer;	// 80 = 0x50
	BRTextControl *_summaryLayer;	// 84 = 0x54
	BRTextControl *_copyrightLayer;	// 88 = 0x58
	NSNumber *_trackNumber;	// 92 = 0x5c
	BRDividerControl *_topDivider;	// 96 = 0x60
	BRDividerControl *_bottomDivider;	// 100 = 0x64
	NSArray *_metadataObjs;	// 104 = 0x68
	NSArray *_metadataLabels;	// 108 = 0x6c
	float _totalHeight;	// 112 = 0x70
	int _alignment;	// 116 = 0x74
	CGSize _artworkSize;	// 120 = 0x78
}
- (id)init;	// 0x33013609
- (void)_setCopyright:(id)copyright;	// 0x330139bd
- (void)_setFormatControl:(id)control;	// 0x33012e89
- (void)_setLength:(id)length;	// 0x33013cc5
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x33012d19
- (void)_setPrice:(id)price;	// 0x33013e45
- (void)_setRating:(id)rating;	// 0x33012e39
- (void)_setReleaseDate:(id)date;	// 0x33013d85
- (void)_setStudioName:(id)name;	// 0x33013c05
- (void)_setSummary:(id)summary;	// 0x33013a7d
- (void)_setTitle:(id)title;	// 0x33013fc1
- (void)_setTitleSubtext:(id)subtext;	// 0x33013f05
- (void)_setTopRightImage:(id)image;	// 0x33012da9
- (void)_setTrackNumber:(id)number;	// 0x33012ef9
- (void)_setUserRatingControl:(id)control;	// 0x33012dc9
- (void)_themeMetricsChanged;	// 0x33012d05
- (id)accessibilityScreenContent;	// 0x3301407d
- (void)dealloc;	// 0x33013479
- (void)layoutSubcontrols;	// 0x330141b9
- (CGSize)renderedSize;	// 0x33013959
- (void)resetAllFields;	// 0x33013379
- (void)setAlignment:(int)alignment;	// 0x33012cf5
- (void)setArtworkSize:(CGSize)size;	// 0x3301301d
- (void)setCopyright:(id)copyright;	// 0x33013069
- (void)setFormatControl:(id)control;	// 0x33013261
- (void)setLength:(id)length;	// 0x330131f1
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x330130a1
- (void)setPrice:(id)price;	// 0x33013299
- (void)setRating:(id)rating;	// 0x33013181
- (void)setReleaseDate:(id)date;	// 0x33013229
- (void)setStudioName:(id)name;	// 0x330131b9
- (void)setSummary:(id)summary;	// 0x330130d9
- (void)setTitle:(id)title;	// 0x33013341
- (void)setTitleSubtext:(id)subtext;	// 0x33013309
- (void)setTopRightImage:(id)image;	// 0x33013111
- (void)setTrackNumber:(id)number;	// 0x330132d1
- (void)setUserRatingControl:(id)control;	// 0x33013149
- (id)topRightImageControl;	// 0x33012ce5
@end
