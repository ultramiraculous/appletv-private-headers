/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSData, NSURL, NSDictionary;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x322e9a3d; S=0x322e949d; @dynamic
@property(readonly, assign) NSData *data;	// G=0x322e8465; @dynamic
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x322e8479; S=0x322e8975; @dynamic
@property(readonly, assign) double deviceCurrentTime;	// G=0x322e98e9; @dynamic
@property(readonly, assign) double duration;	// G=0x322e9f0d; 
@property(assign) BOOL enableRate;	// G=0x322e84b5; S=0x322e9d25; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x322e852d; S=0x322e93a5; @dynamic
@property(readonly, assign) unsigned numberOfChannels;	// G=0x322e84f1; @dynamic
@property(assign) int numberOfLoops;	// G=0x322e8519; S=0x322e8505; @dynamic
@property(assign) float pan;	// G=0x322e84dd; S=0x322e9b35; @dynamic
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x322e8435; @dynamic
@property(assign) float rate;	// G=0x322e84c9; S=0x322e9c09; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x322e848d; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x322e8451; @dynamic
@property(assign) float volume;	// G=0x322e84a1; S=0x322e9e3d; @dynamic
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x322ea519
- (id)initWithData:(id)data error:(id *)error;	// 0x322ea421
- (float)averagePowerForChannel:(unsigned)channel;	// 0x322e857d
- (id)baseInit;	// 0x322e8905
- (void)beginInterruption;	// 0x322e8a4d
// declared property getter: - (double)currentTime;	// 0x322e9a3d
// declared property getter: - (id)data;	// 0x322e8465
- (void)dealloc;	// 0x322ea5f5
- (void)decodeError;	// 0x322e89bd
// declared property getter: - (id)delegate;	// 0x322e8479
// declared property getter: - (double)deviceCurrentTime;	// 0x322e98e9
// declared property getter: - (double)duration;	// 0x322e9f0d
// declared property getter: - (BOOL)enableRate;	// 0x322e84b5
- (void)endInterruption;	// 0x322e8a99
- (void)endInterruptionWithFlags;	// 0x322e8a71
- (void)finalize;	// 0x322e9351
- (void)finishedPlaying;	// 0x322e8f91
- (AudioPlayerImpl *)impl;	// 0x322e8425
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x322e852d
// declared property getter: - (BOOL)isPlaying;	// 0x322e8435
// declared property getter: - (unsigned)numberOfChannels;	// 0x322e84f1
// declared property getter: - (int)numberOfLoops;	// 0x322e8519
// declared property getter: - (float)pan;	// 0x322e84dd
- (void)pause;	// 0x322e9f81
- (float)peakPowerForChannel:(unsigned)channel;	// 0x322e8541
- (BOOL)play;	// 0x322ea1dd
- (BOOL)playAtTime:(double)time;	// 0x322ea05d
- (BOOL)prepareToPlay;	// 0x322ea321
- (void)privCommonCleanup;	// 0x322e92e1
// declared property getter: - (float)rate;	// 0x322e84c9
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x322e949d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322e8975
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x322e9d25
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x322e93a5
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x322e8505
// declared property setter: - (void)setPan:(float)pan;	// 0x322e9b35
// declared property setter: - (void)setRate:(float)rate;	// 0x322e9c09
// declared property setter: - (void)setVolume:(float)volume;	// 0x322e9e3d
// declared property getter: - (id)settings;	// 0x322e848d
- (void)stop;	// 0x322e90ad
- (void)updateMeters;	// 0x322e9195
// declared property getter: - (id)url;	// 0x322e8451
// declared property getter: - (float)volume;	// 0x322e84a1
@end

