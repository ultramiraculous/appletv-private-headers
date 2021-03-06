/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface ATVHIDSystemClient : NSObject {
@private
	IOHIDEventSystemClientRef _hidSystemClient;	// 4 = 0x4
	IOHIDServiceClientRef _appleTVIRService;	// 8 = 0x8
	NSArray *_remotes;	// 12 = 0xc
}
@property(readonly, retain) NSArray *remotes;	// G=0x3314b4c5; converted property
+ (id)sharedInstance;	// 0x3314adad
- (id)init;	// 0x3314ade9
- (long)_init;	// 0x3314ae49
- (void)cancelLearning;	// 0x3314b7dd
- (void)commitLearningRemote;	// 0x3314b695
- (void)dealloc;	// 0x3314afe9
- (void)deleteRemote:(id)remote;	// 0x3314b57d
- (BOOL)isPairedWithAppleRemote;	// 0x3314b2c1
- (id)mcuVersion;	// 0x3314b28d
- (void)pairAppleRemote;	// 0x3314b2f5
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x3314b045
- (id)propertyForKey:(id)key error:(id *)error;	// 0x3314b41d
// converted property getter: - (id)remotes;	// 0x3314b4c5
- (void)rereadRemotes;	// 0x3314b51d
- (void)resetLearningRemote;	// 0x3314b661
- (void)saveLearning;	// 0x3314b78d
- (void)setName:(id)name ofRemote:(id)remote;	// 0x3314b5dd
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x3314b451
- (void)setSILState_HardwareProblem;	// 0x3314b885
- (void)setSILState_Off;	// 0x3314b815
- (void)setSILState_On;	// 0x3314b831
- (void)setSILState_RejectedCommand;	// 0x3314b869
- (void)setSILState_Starting;	// 0x3314b84d
- (void)setSILToState:(id)state;	// 0x3314b8a1
- (void)sleepDisplay;	// 0x3314b3b5
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x3314b6e1
- (void)unpairAppleRemote;	// 0x3314b355
- (void)wakeDisplay;	// 0x3314b3e9
@end

