/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVQualityOfServiceSample : XXUnknownSuperclass {
	int _numberOfSegmentsDownloaded;	// 4 = 0x4
	NSString *_serverAddress;	// 8 = 0x8
	int _numberOfServerAddressChanges;	// 12 = 0xc
	NSString *_URI;	// 16 = 0x10
	double _segmentsDownloadedDuration;	// 20 = 0x14
	double _durationWatched;	// 28 = 0x1c
	int _numberOfStalls;	// 36 = 0x24
	long long _numberOfBytesTransferred;	// 40 = 0x28
	double _observedBitrate;	// 48 = 0x30
	double _indicatedBitrate;	// 56 = 0x38
	int _numberOfDroppedVideoFrames;	// 64 = 0x40
}
@property(retain, nonatomic) NSString *URI;	// G=0x222d7d; S=0x222d8d; @synthesize=_URI
@property(assign, nonatomic) double durationWatched;	// G=0x222dc9; S=0x222de1; @synthesize=_durationWatched
@property(assign, nonatomic) double indicatedBitrate;	// G=0x222e6d; S=0x222e85; @synthesize=_indicatedBitrate
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x222e15; S=0x222e2d; @synthesize=_numberOfBytesTransferred
@property(assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x222e99; S=0x222ea9; @synthesize=_numberOfDroppedVideoFrames
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x222d1d; S=0x222d2d; @synthesize=_numberOfSegmentsDownloaded
@property(assign, nonatomic) int numberOfServerAddressChanges;	// G=0x222d5d; S=0x222d6d; @synthesize=_numberOfServerAddressChanges
@property(assign, nonatomic) int numberOfStalls;	// G=0x222df5; S=0x222e05; @synthesize=_numberOfStalls
@property(assign, nonatomic) double observedBitrate;	// G=0x222e41; S=0x222e59; @synthesize=_observedBitrate
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x222d9d; S=0x222db5; @synthesize=_segmentsDownloadedDuration
@property(retain, nonatomic) NSString *serverAddress;	// G=0x222d3d; S=0x222d4d; @synthesize=_serverAddress
// declared property getter: - (id)URI;	// 0x222d7d
- (void)dealloc;	// 0x222cc5
// declared property getter: - (double)durationWatched;	// 0x222dc9
// declared property getter: - (double)indicatedBitrate;	// 0x222e6d
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x222e15
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x222e99
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x222d1d
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x222d5d
// declared property getter: - (int)numberOfStalls;	// 0x222df5
// declared property getter: - (double)observedBitrate;	// 0x222e41
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x222d9d
// declared property getter: - (id)serverAddress;	// 0x222d3d
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x222de1
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x222e85
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x222e2d
// declared property setter: - (void)setNumberOfDroppedVideoFrames:(int)droppedVideoFrames;	// 0x222ea9
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x222d2d
// declared property setter: - (void)setNumberOfServerAddressChanges:(int)serverAddressChanges;	// 0x222d6d
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x222e05
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x222e59
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x222db5
// declared property setter: - (void)setServerAddress:(id)address;	// 0x222d4d
// declared property setter: - (void)setURI:(id)uri;	// 0x222d8d
@end

