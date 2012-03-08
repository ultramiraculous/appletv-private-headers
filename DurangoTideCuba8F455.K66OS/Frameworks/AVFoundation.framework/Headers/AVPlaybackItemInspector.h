/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"


@interface AVPlaybackItemInspector : AVAssetInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
}
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x325bfd11; S=0x325c046d; 
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem;	// 0x325c01bd
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x325bfd11
- (void *)_propertyAccessor:(CFStringRef)accessor;	// 0x325c0ad9
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x325c046d
- (id)availableMetadataFormats;	// 0x325bfd6d
- (id)commonMetadata;	// 0x325bfd8d
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x325bfd25
- (void)dealloc;	// 0x325c0181
- (XXStruct_pwHToB)duration;	// 0x325c0535
- (void)finalize;	// 0x325c0145
- (unsigned)hash;	// 0x325c03e5
- (BOOL)isEqual:(id)equal;	// 0x325c02e5
- (id)lyrics;	// 0x325bfdad
- (id)metadataForFormat:(id)format;	// 0x325bfd4d
- (CGSize)naturalSize;	// 0x325c0d25
- (BOOL)providesPreciseDurationAndTiming;	// 0x325bfd21
- (long)trackCount;	// 0x325bfdcd
@end
