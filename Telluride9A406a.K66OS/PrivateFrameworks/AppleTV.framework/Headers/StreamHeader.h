/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class DRMData, IndexData, StreamData, VideoData, AudioData;

__attribute__((visibility("hidden")))
@interface StreamHeader : NSObject {
@private
	StreamData *streamData;	// 4 = 0x4
	VideoData *videoData;	// 8 = 0x8
	AudioData *audioData;	// 12 = 0xc
	IndexData *indexData;	// 16 = 0x10
	DRMData *playReady_;	// 20 = 0x14
	DRMData *netflixKeyEnvelope_;	// 24 = 0x18
}
@property(retain, nonatomic) DRMData *netflixKeyEnvelope;	// G=0x332f4bc0; S=0x332f4fb0; @synthesize=netflixKeyEnvelope_
@property(retain, nonatomic) DRMData *playReady;	// G=0x332f4bd4; S=0x332f4f7c; @synthesize=playReady_
- (id)initWithBuffer:(id)buffer;	// 0x332f4be8
- (void)dealloc;	// 0x332f4fe4
- (id)getAudioData;	// 0x332f4b70
- (id)getIndexData;	// 0x332f4bac
- (id)getNetflixKeyEnvelope;	// 0x332f4b98
- (id)getPlayReady;	// 0x332f4b84
- (id)getStreamData;	// 0x332f4b48
- (id)getVideoData;	// 0x332f4b5c
// declared property getter: - (id)netflixKeyEnvelope;	// 0x332f4bc0
// declared property getter: - (id)playReady;	// 0x332f4bd4
// declared property setter: - (void)setNetflixKeyEnvelope:(id)envelope;	// 0x332f4fb0
// declared property setter: - (void)setPlayReady:(id)ready;	// 0x332f4f7c
@end
