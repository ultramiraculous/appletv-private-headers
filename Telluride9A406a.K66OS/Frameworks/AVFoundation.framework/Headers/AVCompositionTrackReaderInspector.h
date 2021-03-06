/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
@private
	OpaqueFigMutableComposition *_figMutableComposition;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x30ed5f59; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30ed68ed
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x30ed5f59
- (void)dealloc;	// 0x30ed68a9
- (void)finalize;	// 0x30ed6865
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30ed64a5
- (id)segments;	// 0x30ed65cd
@end

