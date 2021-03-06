/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _stopTime;	// 20 = 0x14
	NSString *_videoID;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x31cc4a09; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x31cc4a19; S=0x31cc4a2d; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x31cc4a3d; S=0x31cc4a55; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x31cc4a69; S=0x31cc4a81; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x31cc4a95; S=0x31cc4aa9; @synthesize=_videoID
- (id)init;	// 0x31cc48e1
- (id)initWithMPAVItem:(id)mpavitem;	// 0x31cc48f5
- (void)dealloc;	// 0x31cc4979
// declared property getter: - (id)item;	// 0x31cc4a09
// declared property getter: - (id)path;	// 0x31cc4a19
// declared property setter: - (void)setPath:(id)path;	// 0x31cc4a2d
// declared property setter: - (void)setStartTime:(double)time;	// 0x31cc4a55
// declared property setter: - (void)setStopTime:(double)time;	// 0x31cc4a81
// declared property setter: - (void)setVideoID:(id)anId;	// 0x31cc4aa9
// declared property getter: - (double)startTime;	// 0x31cc4a3d
// declared property getter: - (double)stopTime;	// 0x31cc4a69
// declared property getter: - (id)videoID;	// 0x31cc4a95
@end

