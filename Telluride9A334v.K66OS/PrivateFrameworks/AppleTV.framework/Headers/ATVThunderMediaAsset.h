/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAssetDerivesMediaURL.h"
#import "BRSecureResource.h"
#import "BRImageProxy.h"
#import "BRRSSMediaAsset.h"
#import "NSXMLParserDelegate.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderMediaAsset : BRRSSMediaAsset <BRMediaAssetDerivesMediaURL, NSXMLParserDelegate, BRSecureResource, BRImageProxy> {
@private
	NSString *_gameId;	// 16 = 0x10
	NSString *_m3u8URLStr;	// 20 = 0x14
	int _errorCode;	// 24 = 0x18
	unsigned _playbackStartOffsetSec;	// 28 = 0x1c
	NSDictionary *_item;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *item;	// G=0x33162dbd; S=0x33162dcd; @synthesize=_item
@property(assign, nonatomic) unsigned playbackStartOffsetSec;	// G=0x33162d9d; S=0x33162dad; @synthesize=_playbackStartOffsetSec
- (id)initWithGameId:(id)gameId;	// 0x331620ed
- (id)artist;	// 0x331624a5
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x33162d95
- (void)dealloc;	// 0x33162335
- (id)defaultImageForImageSize:(int)imageSize;	// 0x33162d15
- (BOOL)forceHDCPProtection;	// 0x331624c5
- (BOOL)hasCoverArt;	// 0x331624bd
- (id)imageForImageSize:(int)imageSize;	// 0x33162d05
- (id)imageIDForImageSize:(int)imageSize;	// 0x33162cf5
- (id)imageProxy;	// 0x331624c1
- (id)infoOverlay;	// 0x33162afd
// declared property getter: - (id)item;	// 0x33162dbd
- (id)object;	// 0x33162d99
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33162a01
// declared property getter: - (unsigned)playbackStartOffsetSec;	// 0x33162d9d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x33162ac5
- (id)resolveMediaURL;	// 0x331624e1
- (void)sendPing;	// 0x33162ba9
// declared property setter: - (void)setItem:(id)item;	// 0x33162dcd
// declared property setter: - (void)setPlaybackStartOffsetSec:(unsigned)sec;	// 0x33162dad
- (unsigned)startTimeInMS;	// 0x331624c9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x33162d91
- (id)title;	// 0x331623a9
- (void)trackPlayback;	// 0x33162c5d
- (void)willBeginPlayback;	// 0x33162b79
@end

