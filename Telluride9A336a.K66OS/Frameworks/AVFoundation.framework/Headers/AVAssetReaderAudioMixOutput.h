/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAudioMix, NSArray, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
@private
	AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x31463961; S=0x31465af9; 
@property(readonly, assign, nonatomic) NSDictionary *audioSettings;	// G=0x314649bd; 
@property(readonly, assign, nonatomic) NSArray *audioTracks;	// G=0x31463941; 
+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x31464a61
- (id)init;	// 0x314649a9
- (id)initWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x31465f91
- (id)_asset;	// 0x31464a25
- (id)_audioVolumeCurveForTrack:(id)track;	// 0x31465e11
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x314656e1
- (void)_setAudioVolumeCurve:(id)curve forTrack:(id)track;	// 0x31465cdd
// declared property getter: - (id)audioMix;	// 0x31463961
// declared property getter: - (id)audioSettings;	// 0x314649bd
// declared property getter: - (id)audioTracks;	// 0x31463941
- (void)dealloc;	// 0x31465629
- (id)description;	// 0x31465ec9
- (void)finalize;	// 0x31465f4d
- (id)mediaType;	// 0x314649e9
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x31465af9
@end

