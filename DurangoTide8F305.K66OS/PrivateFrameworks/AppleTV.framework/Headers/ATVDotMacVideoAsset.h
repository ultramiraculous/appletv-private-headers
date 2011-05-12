/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoAsset : ATVDotMacAsset {
@private
	long _duration;	// 60 = 0x3c
	NSString *_mediaURL;	// 64 = 0x40
	NSString *_description;	// 68 = 0x44
}
@property(assign) long duration;	// G=0x3072fcb9; S=0x3072fcc9; converted property
@property(retain) NSString *mediaURL;	// G=0x30730005; S=0x3072ff41; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x3072fd1d
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x307300b9
- (void)dealloc;	// 0x3072fd6d
// converted property getter: - (long)duration;	// 0x3072fcb9
- (BOOL)hasVideoContent;	// 0x3072fcd9
- (id)mediaDescription;	// 0x3072fe8d
- (id)mediaType;	// 0x3072fcfd
// converted property getter: - (id)mediaURL;	// 0x30730005
- (void)setDescription:(id)description;	// 0x3072fdc9
// converted property setter: - (void)setDuration:(long)duration;	// 0x3072fcc9
// converted property setter: - (void)setMediaURL:(id)url;	// 0x3072ff41
@end
