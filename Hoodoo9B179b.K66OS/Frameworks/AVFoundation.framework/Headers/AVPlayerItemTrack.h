/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {
@private
	AVPlayerItemTrackInternal *_playerItemTrack;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x30acd2e5; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30acd321; S=0x30acd3bd; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x30acce15
- (void)_addLayer:(id)layer;	// 0x30acd6c9
- (id)_audioVolumeCurve;	// 0x30acd4a1
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x30acd279
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x30acce6d
- (id)_playerItem;	// 0x30acd299
- (void)_removeLayer:(id)layer;	// 0x30acd6c5
- (void)_setAudioVolumeCurve:(id)curve;	// 0x30acd559
// declared property getter: - (id)assetTrack;	// 0x30acd2e5
- (void)dealloc;	// 0x30acd00d
- (id)description;	// 0x30acd13d
- (id)fallbackTrack;	// 0x30acd43d
- (void)finalize;	// 0x30acd0c5
- (unsigned)hash;	// 0x30acd23d
// declared property getter: - (BOOL)isEnabled;	// 0x30acd321
- (BOOL)isEqual:(id)equal;	// 0x30acd1a5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30acd3bd
- (int)trackID;	// 0x30acd2c5
@end

