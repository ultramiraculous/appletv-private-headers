/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSAsset, MSASAlbum;

@interface MSASAssetInfoToReauthForDownload : NSObject {
	MSAsset *_asset;	// 4 = 0x4
	MSASAlbum *_album;	// 8 = 0x8
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x33763a81; S=0x33763a91; @synthesize=_album
@property(retain, nonatomic) MSAsset *asset;	// G=0x33763a49; S=0x33763a59; @synthesize=_asset
- (void).cxx_destruct;	// 0x33763ab9
// declared property getter: - (id)album;	// 0x33763a81
// declared property getter: - (id)asset;	// 0x33763a49
// declared property setter: - (void)setAlbum:(id)album;	// 0x33763a91
// declared property setter: - (void)setAsset:(id)asset;	// 0x33763a59
@end

