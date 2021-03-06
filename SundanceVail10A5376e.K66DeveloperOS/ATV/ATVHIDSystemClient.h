/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVHIDSystemClient : XXUnknownSuperclass {
	IOHIDEventSystemClientRef _hidSystemClient;	// 4 = 0x4
	IOHIDServiceClientRef _appleTVIRService;	// 8 = 0x8
	NSArray *_remotes;	// 12 = 0xc
}
@property(readonly, retain) NSArray *remotes;	// G=0x189675; converted property
+ (id)sharedInstance;	// 0x188f69
- (id)init;	// 0x188fa5
- (long)_init;	// 0x189005
- (void)cancelLearning;	// 0x189995
- (void)commitLearningRemote;	// 0x189849
- (void)dealloc;	// 0x1891a5
- (void)deleteRemote:(id)remote;	// 0x189725
- (BOOL)isPairedWithAppleRemote;	// 0x189471
- (id)mcuVersion;	// 0x18943d
- (void)pairAppleRemote;	// 0x1894a5
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x189201
- (id)propertyForKey:(id)key error:(id *)error;	// 0x1895d5
// converted property getter: - (id)remotes;	// 0x189675
- (void)rereadRemotes;	// 0x1896c9
- (void)resetLearningRemote;	// 0x189811
- (void)saveLearning;	// 0x189945
- (void)setName:(id)name ofRemote:(id)remote;	// 0x18978d
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x189609
- (void)setSILState_HardwareProblem;	// 0x189a41
- (void)setSILState_Off;	// 0x1899d1
- (void)setSILState_On;	// 0x1899ed
- (void)setSILState_RejectedCommand;	// 0x189a25
- (void)setSILState_Starting;	// 0x189a09
- (void)setSILToState:(id)state;	// 0x189a5d
- (void)sleepDisplay;	// 0x189565
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x189895
- (void)unpairAppleRemote;	// 0x189505
- (void)wakeDisplay;	// 0x18959d
@end

