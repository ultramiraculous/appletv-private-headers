/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPSongInternal, NSURL, MPAudioPlaylist, MCSong, NSString;

@interface MPSong : NSObject <NSCoding, NSCopying> {
@private
	NSString *_path;	// 4 = 0x4
	MCSong *_song;	// 8 = 0x8
	MPAudioPlaylist *_parentPlaylist;	// 12 = 0xc
	MPSongInternal *_internal;	// 16 = 0x10
}
@property(copy) NSURL *URL;	// G=0x32ed1fdd; S=0x32ed2015; @dynamic
@property(assign) float audioVolume;	// G=0x32ed2899; S=0x32ed28ed; @dynamic
@property(assign) double duration;	// G=0x32ed2419; S=0x32ed2491; @dynamic
@property(assign) double fadeInDuration;	// G=0x32ed26e1; S=0x32ed2701; @dynamic
@property(assign) double fadeOutDuration;	// G=0x32ed27bd; S=0x32ed27dd; @dynamic
@property(retain) MPAudioPlaylist *parentPlaylist;	// G=0x32ed29c1; S=0x32ed2dd1; converted property
@property(copy) NSString *path;	// G=0x32ed1e25; S=0x32ed1e35; @dynamic
@property(retain) MCSong *song;	// G=0x32ed29d1; S=0x32ed2c29; converted property
@property(assign) double startTime;	// G=0x32ed2045; S=0x32ed2111; @dynamic
+ (id)song;	// 0x32ed1541
+ (id)songWithPath:(id)path;	// 0x32ed15b5
+ (id)songWithURL:(id)url;	// 0x32ed1579
- (id)init;	// 0x32ed15f1
- (id)initWithCoder:(id)coder;	// 0x32ed1a25
- (id)initWithPath:(id)path;	// 0x32ed1c09
// declared property getter: - (id)URL;	// 0x32ed1fdd
// declared property getter: - (float)audioVolume;	// 0x32ed2899
- (void)copyStruct:(id)aStruct;	// 0x32ed2b41
- (id)copyWithZone:(NSZone *)zone;	// 0x32ed1c49
- (void)dealloc;	// 0x32ed1ced
- (id)description;	// 0x32ed1d6d
// declared property getter: - (double)duration;	// 0x32ed2419
- (void)encodeWithCoder:(id)coder;	// 0x32ed175d
// declared property getter: - (double)fadeInDuration;	// 0x32ed26e1
// declared property getter: - (double)fadeOutDuration;	// 0x32ed27bd
- (int)index;	// 0x32ed29a1
- (double)maxDuration;	// 0x32ed29e1
- (id)parentDocument;	// 0x32ed2b19
// converted property getter: - (id)parentPlaylist;	// 0x32ed29c1
// declared property getter: - (id)path;	// 0x32ed1e25
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x32ed28ed
// declared property setter: - (void)setDuration:(double)duration;	// 0x32ed2491
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x32ed2701
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x32ed27dd
// converted property setter: - (void)setParentPlaylist:(id)playlist;	// 0x32ed2dd1
// declared property setter: - (void)setPath:(id)path;	// 0x32ed1e35
// converted property setter: - (void)setSong:(id)song;	// 0x32ed2c29
// declared property setter: - (void)setStartTime:(double)time;	// 0x32ed2111
// declared property setter: - (void)setURL:(id)url;	// 0x32ed2015
// converted property getter: - (id)song;	// 0x32ed29d1
// declared property getter: - (double)startTime;	// 0x32ed2045
- (double)stopTime;	// 0x32ed2a7d
@end

