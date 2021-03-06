/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, NSTimer, BRHeaderControl;

@interface BRMediaListControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	BRControl *_preview;	// 52 = 0x34
	float _previewDelay;	// 56 = 0x38
	NSTimer *_previewDelayTimer;	// 60 = 0x3c
	BRHeaderControl *_header;	// 64 = 0x40
	BOOL _shareItemArtwork;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x366abbe1; @synthesize=_header
@property(retain) id listProviders;	// G=0x366ab825; S=0x366ab7e9; converted property
@property(assign) long selection;	// G=0x366abb0d; S=0x366abad1; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x366abbf1; S=0x366abc01; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x366ab96d; S=0x366ab929; converted property
@property(retain) id title;	// G=0x366ab889; S=0x366ab845; converted property
@property(retain) id titleImage;	// G=0x366ab909; S=0x366ab8a9; converted property
- (id)init;	// 0x366ab2c1
- (void)_cleanupPreviewDelayTimer;	// 0x366abccd
- (void)_previewDelayTimerHandler:(id)handler;	// 0x366abcfd
- (void)_scrollWillStart:(id)_scroll;	// 0x366abc11
- (void)_scrollWillStop:(id)_scroll;	// 0x366abc21
- (void)_updatePreviewWithDelay;	// 0x366abc31
- (id)accessibilityLabel;	// 0x366abba1
- (id)accessibilityScreenContent;	// 0x366abbc1
- (void)controlWasActivated;	// 0x366ab665
- (void)controlWasDeactivated;	// 0x366ab72d
- (void)dealloc;	// 0x366ab3cd
// declared property getter: - (id)header;	// 0x366abbe1
- (long)itemCount;	// 0x366abb2d
- (void)layoutSubcontrols;	// 0x366ab471
- (id)listProviderRequester;	// 0x366abac1
// converted property getter: - (id)listProviders;	// 0x366ab825
- (void)reload;	// 0x366abb65
// converted property getter: - (long)selection;	// 0x366abb0d
// converted property setter: - (void)setListProviders:(id)providers;	// 0x366ab7e9
// converted property setter: - (void)setSelection:(long)selection;	// 0x366abad1
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x366abc01
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x366ab929
// converted property setter: - (void)setTitle:(id)title;	// 0x366ab845
// converted property setter: - (void)setTitleImage:(id)image;	// 0x366ab8a9
// declared property getter: - (BOOL)shareItemArtwork;	// 0x366abbf1
// converted property getter: - (id)subtitle;	// 0x366ab96d
// converted property getter: - (id)title;	// 0x366ab889
// converted property getter: - (id)titleImage;	// 0x366ab909
- (void)updatePreview;	// 0x366ab98d
@end

