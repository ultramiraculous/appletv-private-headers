/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspector.h"
#import "AVFoundation-Structs.h"

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
	NSArray *_trackIDs;	// 8 = 0x8
}
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x3549ad9d; S=0x3549bf05; 
@property(readonly, retain) NSArray *trackIDs;	// G=0x3549adb1; converted property
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem trackIDs:(id)ids;	// 0x3549bd89
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x3549ad9d
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x3549bf05
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x3549beb5
- (id)availableMetadataFormats;	// 0x3549b0a5
- (id)commonMetadata;	// 0x3549b089
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x3549adc1
- (void)dealloc;	// 0x3549c029
- (XXStruct_pwHToB)duration;	// 0x3549be5d
- (void)finalize;	// 0x3549bfe9
- (unsigned)hash;	// 0x3549bf31
- (BOOL)isEqual:(id)equal;	// 0x3549bf79
- (id)lyrics;	// 0x3549b069
- (id)metadataForFormat:(id)format;	// 0x3549b0c1
- (CGSize)naturalSize;	// 0x3549be0d
- (BOOL)providesPreciseDurationAndTiming;	// 0x3549adad
- (long)trackCount;	// 0x3549b015
// converted property getter: - (id)trackIDs;	// 0x3549adb1
@end

