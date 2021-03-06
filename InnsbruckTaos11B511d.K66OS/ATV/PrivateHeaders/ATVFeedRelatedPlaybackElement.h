/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedMenuElement, ATVFeedVideoAssetElement;

__attribute__((visibility("hidden")))
@interface ATVFeedRelatedPlaybackElement : ATVFeedRootElement {
	ATVFeedVideoAssetElement *_upNextItem;	// 4 = 0x4
	NSString *_endTitle;	// 8 = 0x8
	ATVFeedMenuElement *_optionsMenu;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *endTitle;	// G=0x14d03d; S=0x14d04d; @synthesize=_endTitle
@property(retain, nonatomic) ATVFeedMenuElement *optionsMenu;	// G=0x14d075; S=0x14d085; @synthesize=_optionsMenu
@property(retain, nonatomic) ATVFeedVideoAssetElement *upNextItem;	// G=0x14d005; S=0x14d015; @synthesize=_upNextItem
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14ce1d
- (void).cxx_destruct;	// 0x14d0ad
// declared property getter: - (id)endTitle;	// 0x14d03d
// declared property getter: - (id)optionsMenu;	// 0x14d075
// declared property setter: - (void)setEndTitle:(id)title;	// 0x14d04d
// declared property setter: - (void)setOptionsMenu:(id)menu;	// 0x14d085
// declared property setter: - (void)setUpNextItem:(id)item;	// 0x14d015
// declared property getter: - (id)upNextItem;	// 0x14d005
@end

