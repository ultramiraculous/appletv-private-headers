/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPAVItem, NSURL;

@interface MPMovie : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	int _movieSourceType;	// 12 = 0xc
	double _startPlaybackTime;	// 16 = 0x10
	double _endPlaybackTime;	// 24 = 0x18
	BOOL _explicitlySetMovieSourceType;	// 32 = 0x20
	BOOL _movieIsUnplayable;	// 33 = 0x21
	double _lastKnownDuration;	// 36 = 0x24
	CGSize _lastKnownNaturalSize;	// 44 = 0x2c
	unsigned _lastKnownType;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) double duration;	// G=0x341bccd9; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x341bcdf1; S=0x341bcddd; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x341bcc0d; 
@property(assign, nonatomic) int movieSourceType;	// G=0x341bccc9; S=0x341bcc4d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x341bcd69; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x341bcd21; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x341bcdc5; S=0x341bcdb1; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x341bcbfd; 
+ (id)movieWithURL:(id)url options:(id)options error:(id *)error;	// 0x341bc909
- (id)_MPArrayQueueItem;	// 0x341bd05d
- (void)_determineMediaType;	// 0x341bd119
- (void)_durationAvailableNotification:(id)notification;	// 0x341bce09
- (id)_initWithURL:(id)url options:(id)options error:(id *)error;	// 0x341bc95d
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x341bcec9
- (void)_typeAvailableNotification:(id)notification;	// 0x341bcfad
- (void)dealloc;	// 0x341bcb11
// declared property getter: - (double)duration;	// 0x341bccd9
// declared property getter: - (double)endPlaybackTime;	// 0x341bcdf1
// declared property getter: - (int)movieMediaTypes;	// 0x341bcc0d
// declared property getter: - (int)movieSourceType;	// 0x341bccc9
// declared property getter: - (CGSize)naturalSize;	// 0x341bcd69
// declared property getter: - (double)playableDuration;	// 0x341bcd21
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x341bcddd
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x341bcc4d
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x341bcdb1
// declared property getter: - (double)startPlaybackTime;	// 0x341bcdc5
// declared property getter: - (id)url;	// 0x341bcbfd
@end
