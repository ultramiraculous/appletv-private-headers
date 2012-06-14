/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSTimer, ATVRCCapture, ATVRemoteSet;

__attribute__((visibility("hidden")))
@interface ATVRCManager : XXUnknownSuperclass {
	int _runState;	// 4 = 0x4
	ATVRCCapture *_trpCapture;	// 8 = 0x8
	NSMutableArray *_remoteSets;	// 12 = 0xc
	ATVRemoteSet *_learningSet;	// 16 = 0x10
	ATVRemoteSet *_appleRemoteSet;	// 20 = 0x14
	ATVRemoteSet *_temporaryActiveSet;	// 24 = 0x18
	BOOL _appleRemoteInUse;	// 28 = 0x1c
	NSTimer *_discontinuityTrigger;	// 32 = 0x20
	NSTimer *_ledResetTimer;	// 36 = 0x24
	unsigned short _customPage;	// 40 = 0x28
	unsigned short _customUsage;	// 42 = 0x2a
	BOOL _a39LegacyDispatch;	// 44 = 0x2c
	unsigned long _pairingUID;	// 48 = 0x30
	opaque_pthread_mutex_t _mutex;	// 52 = 0x34
}
@property(readonly, assign) BOOL appleRemoteInUse;	// G=0x201a35; converted property
@property(readonly, retain) ATVRemoteSet *learningSet;	// G=0x201121; converted property
@property(readonly, retain) NSMutableArray *remoteSets;	// G=0x20191d; converted property
@property(assign) int state;	// G=0x2010ed; S=0x2010b1; converted property
@property(readonly, retain) ATVRemoteSet *temporaryActiveSet;	// G=0x201569; converted property
+ (id)sharedManager;	// 0x200b59
- (id)init;	// 0x200ba1
- (void)_addRemoteSet:(id)set;	// 0x201ae5
- (void)_clearActiveRemoteSets;	// 0x20203d
- (id)_defaultCustomName;	// 0x202675
- (void)_discontinuityTrigger:(id)trigger;	// 0x201d21
- (void)_doSystemActivityNotification;	// 0x201e81
- (void)_enterLearningState;	// 0x201bc9
- (void)_eventRecognized:(BOOL)recognized;	// 0x2026e9
- (void)_exitLearningState;	// 0x201c49
- (id)_findIdenticalActiveRemoteSet:(id)set;	// 0x201b61
- (BOOL)_isCustomEvent:(id)event;	// 0x2025a1
- (void)_ledReset:(id)reset;	// 0x2027d1
- (BOOL)_loadActiveRemoteSets;	// 0x202091
- (id)_loadAppleRemoteSet;	// 0x2024fd
- (id)_loadRemoteSet:(id)set;	// 0x202455
- (id)_maskToggleBits:(id)bits;	// 0x201ef9
- (BOOL)_nameInExistsInSets:(id)sets;	// 0x2025f9
- (void)_pairAppleRemote:(unsigned long)remote;	// 0x201a79
- (BOOL)_processLearningEvent:(id)event;	// 0x201dbd
- (void)_resetDiscontinuityTrigger;	// 0x201ca1
- (void)_resetLEDTimer;	// 0x202759
- (BOOL)_saveActiveRemoteSets;	// 0x202239
- (void)_setState:(int)state;	// 0x201a69
- (id)_setTemporaryActiveSet:(id)set;	// 0x201b21
- (void)_unpairAppleRemote;	// 0x201ac1
- (void)addRemoteSet:(id)set;	// 0x2018a5
// converted property getter: - (BOOL)appleRemoteInUse;	// 0x201a35
- (void)applyCaptureToButton:(int)button;	// 0x201261
- (void)applyCaptureToPlayButtonOnly;	// 0x2012ed
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x201441
- (id)applyLearningSet;	// 0x20139d
- (double)captureProgress;	// 0x2011d5
- (id)capturedPatternSet;	// 0x20121d
- (void)dealloc;	// 0x200ccd
- (void)endLearn;	// 0x20119d
- (id)findIdenticalActiveRemoteSet:(id)set;	// 0x2018e1
- (int)findPatternInActiveSets:(id)activeSets;	// 0x20173d
- (int)findPatternInActiveSets:(id)activeSets includeLearningSet:(BOOL)set excludeExtendedRemoteSet:(id)set3 excludeRange:(NSRange)range;	// 0x201761
- (id)identifyCapture:(int)capture;	// 0x2015e5
// converted property getter: - (id)learningSet;	// 0x201121
- (void)pairAppleRemote:(unsigned long)remote;	// 0x2019c1
- (BOOL)processEvent:(id)event;	// 0x200d95
// converted property getter: - (id)remoteSets;	// 0x20191d
- (void)removeRemoteSet:(id)set;	// 0x20184d
- (void)resetLearningSet;	// 0x201951
- (void)setCustomPage:(unsigned short)page withUsage:(unsigned short)usage;	// 0x201061
- (void)setName:(id)name remoteSet:(id)set;	// 0x2014e9
// converted property setter: - (void)setState:(int)state;	// 0x2010b1
- (id)setTemporaryActiveSet:(id)set;	// 0x20159d
- (void)startLearn;	// 0x201155
// converted property getter: - (int)state;	// 0x2010ed
// converted property getter: - (id)temporaryActiveSet;	// 0x201569
- (void)unpairAppleRemote;	// 0x2019fd
@end

