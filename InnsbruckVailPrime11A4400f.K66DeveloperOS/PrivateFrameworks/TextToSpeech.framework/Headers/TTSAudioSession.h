/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import "TextToSpeech-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_queue;

@interface TTSAudioSession : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	BOOL _audioSessionIsSetUp;	// 8 = 0x8
	XXStruct_b$JQBC _desiredState;	// 12 = 0xc
	XXStruct_b$JQBC _cachedState;	// 20 = 0x14
	BOOL _bluetoothAllowed;	// 28 = 0x1c
	CFBagRef _activityBag;	// 32 = 0x20
	int _serverGeneration;	// 36 = 0x24
}
+ (id)sharedInstance;	// 0x32a2da69
- (id)init;	// 0x32a2dae5
- (void).cxx_destruct;	// 0x32a2e935
- (void)_audioSessionInterrupted:(id)interrupted;	// 0x32a2dc85
- (void)_mediaServicesWereReset:(id)reset;	// 0x32a2ddf1
- (long)_nextActivityForActive:(BOOL)active activity:(long)activity serverActivity:(long)activity3;	// 0x32a2e1d5
- (int)_safeServerGeneration;	// 0x32a2e371
- (void)_safeSetActive:(BOOL)active withActivity:(long)activity;	// 0x32a2e4c9
- (void)_safeSetBluetoothInputAllowed:(BOOL)allowed;	// 0x32a2e765
- (void)_safeSetCategoryForActivity:(long)activity;	// 0x32a2e441
- (void)_safeSetupAudioSession;	// 0x32a2e2f1
- (void)_setCategoryForActivity:(long)activity;	// 0x32a2dfc1
- (void)_setupAudioSession;	// 0x32a2ded9
- (void)dealloc;	// 0x32a2dc01
@end

