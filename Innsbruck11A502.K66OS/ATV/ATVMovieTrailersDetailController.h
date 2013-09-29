/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRMediaShelfView, BRBoxControl, BRMovieTrailerCollection, BRMovieTrailersProvider, BRDetailedMediaControl;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersDetailController : BRController {
	BRMovieTrailersProvider *_provider;	// 100 = 0x64
	BRMovieTrailerCollection *_trailer;	// 104 = 0x68
	BRDetailedMediaControl *_detailedControl;	// 108 = 0x6c
	BRBoxControl *_relatedBox;	// 112 = 0x70
	BRMediaShelfView *_relatedShelf;	// 116 = 0x74
}
@property(readonly, retain) BRMovieTrailerCollection *trailer;	// G=0xb453d; converted property
- (id)initWithProvider:(id)provider trailer:(id)trailer;	// 0xb4351
- (void)_setActionControl;	// 0xb4909
- (void)_setCopyrightText;	// 0xb4d7d
- (void)_setImageProxy;	// 0xb487d
- (void)_setMetadataControl;	// 0xb4ca5
- (void)_setRelatedContent;	// 0xb4e09
- (void)_setupDetailControls;	// 0xb4819
- (id)accessibilityScreenContent;	// 0xb5631
- (BOOL)brEventAction:(id)action;	// 0xb4681
- (void)dealloc;	// 0xb449d
- (BOOL)handleSelectionForActionShelf:(id)actionShelf;	// 0xb54b5
- (BOOL)handleSelectionForRelatedShelf:(id)relatedShelf;	// 0xb5395
- (void)layoutSubcontrols;	// 0xb454d
// converted property getter: - (id)trailer;	// 0xb453d
@end
