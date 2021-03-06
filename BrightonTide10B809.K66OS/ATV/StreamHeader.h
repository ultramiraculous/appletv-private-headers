/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AudioData, IFrameData, DRMData, IFrameIndexOffsetObject, IndexData, StreamData, VideoData;

@interface StreamHeader : XXUnknownSuperclass {
	StreamData *streamData;	// 4 = 0x4
	VideoData *videoData;	// 8 = 0x8
	AudioData *audioData;	// 12 = 0xc
	IndexData *indexData;	// 16 = 0x10
	IFrameIndexOffsetObject *iFrameIndexOffset;	// 20 = 0x14
	IFrameData *iFrameData;	// 24 = 0x18
	DRMData *playReady_;	// 28 = 0x1c
	DRMData *netflixKeyEnvelope_;	// 32 = 0x20
}
@property(retain, nonatomic) DRMData *netflixKeyEnvelope;	// G=0x4b6bc1; S=0x4b6bd1; @synthesize=netflixKeyEnvelope_
@property(retain, nonatomic) DRMData *playReady;	// G=0x4b6ba1; S=0x4b6bb1; @synthesize=playReady_
- (id)initWithBuffer:(id)buffer;	// 0x4b6695
- (void)dealloc;	// 0x4b6ac5
- (id)getAudioData;	// 0x4b6a65
- (id)getIFrameData;	// 0x4b6aa5
- (id)getIFrameIndexOffset;	// 0x4b6ab5
- (id)getIndexData;	// 0x4b6a95
- (id)getNetflixKeyEnvelope;	// 0x4b6a85
- (id)getPlayReady;	// 0x4b6a75
- (id)getStreamData;	// 0x4b6a45
- (id)getVideoData;	// 0x4b6a55
// declared property getter: - (id)netflixKeyEnvelope;	// 0x4b6bc1
// declared property getter: - (id)playReady;	// 0x4b6ba1
// declared property setter: - (void)setNetflixKeyEnvelope:(id)envelope;	// 0x4b6bd1
// declared property setter: - (void)setPlayReady:(id)ready;	// 0x4b6bb1
@end

