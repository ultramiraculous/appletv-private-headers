/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface RUIRetailMovieAsset : BRBaseMediaAsset {
	NSURL *_mediaURL;	// 8 = 0x8
}
@property(readonly, retain) NSURL *mediaURL;	// G=0x376f6d; converted property
- (id)initWithMediaURL:(id)mediaURL;	// 0x376f01
- (void).cxx_destruct;	// 0x376fcd
- (id)assetID;	// 0x376fad
- (BOOL)hasVideoContent;	// 0x376fa9
- (id)mediaType;	// 0x376f8d
// converted property getter: - (id)mediaURL;	// 0x376f6d
@end

