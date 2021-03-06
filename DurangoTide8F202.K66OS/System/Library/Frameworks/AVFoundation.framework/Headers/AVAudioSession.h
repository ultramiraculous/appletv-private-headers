/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol AVAudioSessionDelegate;

@interface AVAudioSession : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSString *category;	// G=0x303c48e9; @dynamic
@property(readonly, assign) int currentHardwareInputNumberOfChannels;	// G=0x303c47a9; @dynamic
@property(readonly, assign) int currentHardwareOutputNumberOfChannels;	// G=0x303c4771; @dynamic
@property(readonly, assign) double currentHardwareSampleRate;	// G=0x303c4865; @dynamic
@property(assign) id<AVAudioSessionDelegate> delegate;	// G=0x303c45e9; S=0x303c45f5; @dynamic
@property(readonly, assign) BOOL inputIsAvailable;	// G=0x303c48a9; @dynamic
@property(readonly, assign) double preferredHardwareSampleRate;	// G=0x303c4821; @dynamic
@property(readonly, assign) double preferredIOBufferDuration;	// G=0x303c47e1; @dynamic
+ (id)sharedInstance;	// 0x303c4721
// declared property getter: - (id)category;	// 0x303c48e9
// declared property getter: - (int)currentHardwareInputNumberOfChannels;	// 0x303c47a9
// declared property getter: - (int)currentHardwareOutputNumberOfChannels;	// 0x303c4771
// declared property getter: - (double)currentHardwareSampleRate;	// 0x303c4865
// declared property getter: - (id)delegate;	// 0x303c45e9
// declared property getter: - (BOOL)inputIsAvailable;	// 0x303c48a9
// declared property getter: - (double)preferredHardwareSampleRate;	// 0x303c4821
// declared property getter: - (double)preferredIOBufferDuration;	// 0x303c47e1
- (void)privateBeginInterruption;	// 0x303c46cd
- (void)privateEndInterruption;	// 0x303c46ad
- (void)privateEndInterruptionWithFlags:(id)flags;	// 0x303c4679
- (void)privateInputIsAvailableChanged:(id)changed;	// 0x303c46ed
- (BOOL)setActive:(BOOL)active error:(id *)error;	// 0x303c4e09
- (BOOL)setActive:(BOOL)active withFlags:(int)flags error:(id *)error;	// 0x303c4e65
- (BOOL)setCategory:(id)category error:(id *)error;	// 0x303c4ca9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303c45f5
- (BOOL)setPreferredHardwareSampleRate:(double)rate error:(id *)error;	// 0x303c4c41
- (BOOL)setPreferredIOBufferDuration:(double)duration error:(id *)error;	// 0x303c4bc5
@end

