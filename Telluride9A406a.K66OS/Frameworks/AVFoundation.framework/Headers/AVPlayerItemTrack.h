/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {
@private
	AVPlayerItemTrackInternal *_playerItemTrack;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x30e87385; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30e8772d; S=0x30e876ad; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x30e87421
- (void)_addLayer:(id)layer;	// 0x30e87355
- (id)_audioVolumeCurve;	// 0x30e875ed
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x30e87311
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x30e87a2d
- (id)_playerItem;	// 0x30e87359
- (void)_removeLayer:(id)layer;	// 0x30e87351
- (void)_setAudioVolumeCurve:(id)curve;	// 0x30e87479
// declared property getter: - (id)assetTrack;	// 0x30e87385
- (void)dealloc;	// 0x30e87975
- (id)description;	// 0x30e87895
- (id)fallbackTrack;	// 0x30e873c1
- (void)finalize;	// 0x30e87901
- (unsigned)hash;	// 0x30e877c5
// declared property getter: - (BOOL)isEnabled;	// 0x30e8772d
- (BOOL)isEqual:(id)equal;	// 0x30e87801
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30e876ad
- (int)trackID;	// 0x30e87331
@end

