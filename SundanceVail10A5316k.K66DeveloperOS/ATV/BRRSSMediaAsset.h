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
@property(assign) BOOL needsVolumeFading;	// G=0x2777e5; S=0x2777f5; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x27753d
- (id)coverArt;	// 0x2775d1
- (id)description;	// 0x2777bd
- (long)duration;	// 0x27757d
- (BOOL)hasVideoContent;	// 0x27777d
// converted property getter: - (BOOL)needsVolumeFading;	// 0x2777e5
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x2777f5
@end

