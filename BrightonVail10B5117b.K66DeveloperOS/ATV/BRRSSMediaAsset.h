/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"


__attribute__((visibility("hidden")))
@interface BRRSSMediaAsset : BRXMLMediaAsset {
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x2ae285; S=0x2ae295; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x2adfdd
- (id)coverArt;	// 0x2ae071
- (id)description;	// 0x2ae25d
- (long)duration;	// 0x2ae01d
- (BOOL)hasVideoContent;	// 0x2ae21d
// converted property getter: - (BOOL)needsVolumeFading;	// 0x2ae285
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x2ae295
@end

