/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"
#import "AppleTV-Structs.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedPhotoElement : ATVFeedElement {
	NSString *_caption;	// 4 = 0x4
	NSArray *_assets;	// 8 = 0x8
	NSArray *_badges;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *assets;	// G=0x39ce6d; S=0x39ce7d; @synthesize=_assets
@property(retain, nonatomic) NSArray *badges;	// G=0x39cea5; S=0x39ceb5; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x39ce35; S=0x39ce45; @synthesize=_caption
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x39c9b9
- (void).cxx_destruct;	// 0x39cedd
// declared property getter: - (id)assets;	// 0x39ce6d
// declared property getter: - (id)badges;	// 0x39cea5
// declared property getter: - (id)caption;	// 0x39ce35
- (id)photoAssetForPreferredSize:(CGSize)preferredSize;	// 0x39cf25
// declared property setter: - (void)setAssets:(id)assets;	// 0x39ce7d
// declared property setter: - (void)setBadges:(id)badges;	// 0x39ceb5
// declared property setter: - (void)setCaption:(id)caption;	// 0x39ce45
@end

