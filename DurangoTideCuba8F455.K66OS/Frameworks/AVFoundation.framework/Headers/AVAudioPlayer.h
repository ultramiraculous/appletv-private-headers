/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL, NSData;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x3256a499; S=0x3256a091; @dynamic
@property(readonly, assign) NSData *data;	// G=0x32567a99; @dynamic
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x32567aa9; S=0x32567bcd; @dynamic
@property(readonly, assign) double deviceCurrentTime;	// G=0x3256a365; @dynamic
@property(readonly, assign) double duration;	// G=0x32568179; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x32567b29; S=0x32569a05; @dynamic
@property(readonly, assign) unsigned numberOfChannels;	// G=0x32567af1; @dynamic
@property(assign) int numberOfLoops;	// G=0x32567b15; S=0x32567b01; @dynamic
@property(assign) float pan;	// G=0x32567add; S=0x3256a595; @dynamic
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x32567a75; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x32567ab9; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x32567a89; @dynamic
@property(assign) float volume;	// G=0x32567ac9; S=0x3256a659; @dynamic
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x325685dd
- (id)initWithData:(id)data error:(id *)error;	// 0x325686b9
- (float)averagePowerForChannel:(unsigned)channel;	// 0x32567b6d
- (id)baseInit;	// 0x32567bed
- (void)beginInterruption;	// 0x32567cb1
// declared property getter: - (double)currentTime;	// 0x3256a499
// declared property getter: - (id)data;	// 0x32567a99
- (void)dealloc;	// 0x325680a9
- (void)decodeError;	// 0x32567cd5
// declared property getter: - (id)delegate;	// 0x32567aa9
// declared property getter: - (double)deviceCurrentTime;	// 0x3256a365
// declared property getter: - (double)duration;	// 0x32568179
- (void)endInterruption;	// 0x32567c65
- (void)endInterruptionWithFlags;	// 0x32567c89
- (void)finalize;	// 0x32568129
- (void)finishedPlaying;	// 0x32569dbd
- (AudioPlayerImpl *)impl;	// 0x32567a65
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x32567b29
// declared property getter: - (BOOL)isPlaying;	// 0x32567a75
// declared property getter: - (unsigned)numberOfChannels;	// 0x32567af1
// declared property getter: - (int)numberOfLoops;	// 0x32567b15
// declared property getter: - (float)pan;	// 0x32567add
- (void)pause;	// 0x3256a7f1
- (float)peakPowerForChannel:(unsigned)channel;	// 0x32567b3d
- (BOOL)play;	// 0x32569ea5
- (BOOL)playAtTime:(double)time;	// 0x3256a8b1
- (BOOL)prepareToPlay;	// 0x32569fa9
- (void)privCommonCleanup;	// 0x32568041
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x3256a091
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32567bcd
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x32569a05
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x32567b01
// declared property setter: - (void)setPan:(float)pan;	// 0x3256a595
// declared property setter: - (void)setVolume:(float)volume;	// 0x3256a659
// declared property getter: - (id)settings;	// 0x32567ab9
- (void)stop;	// 0x3256a719
- (void)updateMeters;	// 0x32569901
// declared property getter: - (id)url;	// 0x32567a89
// declared property getter: - (float)volume;	// 0x32567ac9
@end

