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
@property(assign) double currentTime;	// G=0x31437a3d; S=0x3143749d; @dynamic
@property(readonly, assign) NSData *data;	// G=0x31436465; @dynamic
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x31436479; S=0x31436975; @dynamic
@property(readonly, assign) double deviceCurrentTime;	// G=0x314378e9; @dynamic
@property(readonly, assign) double duration;	// G=0x31437f0d; 
@property(assign) BOOL enableRate;	// G=0x314364b5; S=0x31437d25; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x3143652d; S=0x314373a5; @dynamic
@property(readonly, assign) unsigned numberOfChannels;	// G=0x314364f1; @dynamic
@property(assign) int numberOfLoops;	// G=0x31436519; S=0x31436505; @dynamic
@property(assign) float pan;	// G=0x314364dd; S=0x31437b35; @dynamic
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x31436435; @dynamic
@property(assign) float rate;	// G=0x314364c9; S=0x31437c09; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x3143648d; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x31436451; @dynamic
@property(assign) float volume;	// G=0x314364a1; S=0x31437e3d; @dynamic
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x31438519
- (id)initWithData:(id)data error:(id *)error;	// 0x31438421
- (float)averagePowerForChannel:(unsigned)channel;	// 0x3143657d
- (id)baseInit;	// 0x31436905
- (void)beginInterruption;	// 0x31436a4d
// declared property getter: - (double)currentTime;	// 0x31437a3d
// declared property getter: - (id)data;	// 0x31436465
- (void)dealloc;	// 0x314385f5
- (void)decodeError;	// 0x314369bd
// declared property getter: - (id)delegate;	// 0x31436479
// declared property getter: - (double)deviceCurrentTime;	// 0x314378e9
// declared property getter: - (double)duration;	// 0x31437f0d
// declared property getter: - (BOOL)enableRate;	// 0x314364b5
- (void)endInterruption;	// 0x31436a99
- (void)endInterruptionWithFlags;	// 0x31436a71
- (void)finalize;	// 0x31437351
- (void)finishedPlaying;	// 0x31436f91
- (AudioPlayerImpl *)impl;	// 0x31436425
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x3143652d
// declared property getter: - (BOOL)isPlaying;	// 0x31436435
// declared property getter: - (unsigned)numberOfChannels;	// 0x314364f1
// declared property getter: - (int)numberOfLoops;	// 0x31436519
// declared property getter: - (float)pan;	// 0x314364dd
- (void)pause;	// 0x31437f81
- (float)peakPowerForChannel:(unsigned)channel;	// 0x31436541
- (BOOL)play;	// 0x314381dd
- (BOOL)playAtTime:(double)time;	// 0x3143805d
- (BOOL)prepareToPlay;	// 0x31438321
- (void)privCommonCleanup;	// 0x314372e1
// declared property getter: - (float)rate;	// 0x314364c9
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x3143749d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31436975
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x31437d25
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x314373a5
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x31436505
// declared property setter: - (void)setPan:(float)pan;	// 0x31437b35
// declared property setter: - (void)setRate:(float)rate;	// 0x31437c09
// declared property setter: - (void)setVolume:(float)volume;	// 0x31437e3d
// declared property getter: - (id)settings;	// 0x3143648d
- (void)stop;	// 0x314370ad
- (void)updateMeters;	// 0x31437195
// declared property getter: - (id)url;	// 0x31436451
// declared property getter: - (float)volume;	// 0x314364a1
@end
