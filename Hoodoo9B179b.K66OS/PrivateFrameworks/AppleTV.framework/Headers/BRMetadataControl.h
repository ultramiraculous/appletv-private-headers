/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImageControl, NSArray, BRTextControl, BRDividerControl, BRMetadataLinesLayer;

@interface BRMetadataControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_rightJustifiedTitleLayer;	// 52 = 0x34
	BRImageControl *_ratingImageLayer;	// 56 = 0x38
	BRImageControl *_starRatingImageLayer;	// 60 = 0x3c
	BRImageControl *_topRightImageLayer;	// 64 = 0x40
	BRTextControl *_summaryLayer;	// 68 = 0x44
	BRMetadataLinesLayer *_metadataLinesLayer;	// 72 = 0x48
	BRTextControl *_copyrightLayer;	// 76 = 0x4c
	BRDividerControl *_topDividerLayer;	// 80 = 0x50
	BRDividerControl *_middleDividerLayer;	// 84 = 0x54
	BRDividerControl *_bottomDividerLayer;	// 88 = 0x58
	NSArray *_metadataObjs;	// 92 = 0x5c
	NSArray *_metadataLabels;	// 96 = 0x60
	float _totalHeight;	// 100 = 0x64
	int _alignment;	// 104 = 0x68
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x302aeb61; S=0x302aeb19; 
- (id)init;	// 0x302ae5dd
- (void)_setCopyright:(id)copyright;	// 0x302aff3d
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x302afea5
- (void)_setRating:(id)rating;	// 0x302afc35
- (void)_setStarRating:(id)rating;	// 0x302afc91
- (void)_setSummary:(id)summary;	// 0x302afd0d
- (void)_setTitle:(id)title;	// 0x302afb75
- (void)_setTopRightImage:(id)image;	// 0x302afced
- (id)accessibilityLabel;	// 0x302afa89
- (void)dealloc;	// 0x302ae8b9
- (void)layoutSubcontrols;	// 0x302aee41
- (CGSize)renderedSize;	// 0x302aeda1
- (void)resetAllFields;	// 0x302aea25
// declared property getter: - (id)rightJustifiedTitle;	// 0x302aeb61
- (void)setAlignment:(int)alignment;	// 0x302afb65
- (void)setCopyright:(id)copyright;	// 0x302aed65
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x302aed29
- (void)setRating:(id)rating;	// 0x302aeb99
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x302aeb19
- (void)setStarRating:(id)rating;	// 0x302aec65
- (void)setSummary:(id)summary;	// 0x302aeced
- (void)setTitle:(id)title;	// 0x302aeadd
- (void)setTopRightImage:(id)image;	// 0x302aecb1
- (void)setUserRating:(id)rating;	// 0x302aebd5
- (id)topRightImageControl;	// 0x302aeca1
- (void)windowMaxBoundsChanged;	// 0x302aee01
@end
