/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class IndexData, DRMData, AudioData, VideoData, StreamData;

__attribute__((visibility("hidden")))
@interface StreamHeader : NSObject {
@private
	StreamData *streamData;	// 4 = 0x4
	VideoData *videoData;	// 8 = 0x8
	AudioData *audioData;	// 12 = 0xc
	DRMData *playReady;	// 16 = 0x10
	DRMData *netflixKeyEnvelope;	// 20 = 0x14
	IndexData *indexData;	// 24 = 0x18
}
- (id)initWithBuffer:(id)buffer;	// 0x33c5ef94
- (void)dealloc;	// 0x33c5f35c
- (id)getAudioData;	// 0x33c5ef44
- (id)getIndexData;	// 0x33c5ef80
- (id)getNetflixKeyEnvelope;	// 0x33c5ef6c
- (id)getPlayReady;	// 0x33c5ef58
- (id)getStreamData;	// 0x33c5ef1c
- (id)getVideoData;	// 0x33c5ef30
@end

