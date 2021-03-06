/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrack.h"

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {
	AVCompositionTrackInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x368b0709; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x368b04ad
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x368b06e9
- (void)dealloc;	// 0x368b056d
- (id)description;	// 0x368b063d
- (void)finalize;	// 0x368b05d5
// declared property getter: - (id)segments;	// 0x368b0709
@end

