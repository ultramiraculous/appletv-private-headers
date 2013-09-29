/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVRemoteSet, NSMutableArray, NSTimer, ATVRCCapture;

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
@property(readonly, assign) BOOL appleRemoteInUse;	// G=0x233b1d; converted property
@property(readonly, retain) ATVRemoteSet *learningSet;	// G=0x2331f5; converted property
@property(readonly, retain) NSMutableArray *remoteSets;	// G=0x233a05; converted property
@property(assign) int state;	// G=0x2331c1; S=0x233185; converted property
@property(readonly, retain) ATVRemoteSet *temporaryActiveSet;	// G=0x23363d; converted property
+ (id)sharedManager;	// 0x232c29
- (id)init;	// 0x232c71
- (void)_addRemoteSet:(id)set;	// 0x233bcd
- (void)_clearActiveRemoteSets;	// 0x234121
- (id)_defaultCustomName;	// 0x234749
- (void)_discontinuityTrigger:(id)trigger;	// 0x233e09
- (void)_doSystemActivityNotification;	// 0x233f69
- (void)_enterLearningState;	// 0x233cb1
- (void)_eventRecognized:(BOOL)recognized;	// 0x2347bd
- (void)_exitLearningState;	// 0x233d31
- (id)_findIdenticalActiveRemoteSet:(id)set;	// 0x233c49
- (BOOL)_isCustomEvent:(id)event;	// 0x234675
- (void)_ledReset:(id)reset;	// 0x2348d1
- (BOOL)_loadActiveRemoteSets;	// 0x234175
- (id)_loadAppleRemoteSet;	// 0x2345d1
- (id)_loadRemoteSet:(id)set;	// 0x234529
- (id)_maskToggleBits:(id)bits;	// 0x233fe1
- (BOOL)_nameInExistsInSets:(id)sets;	// 0x2346cd
- (void)_pairAppleRemote:(unsigned long)remote;	// 0x233b61
- (BOOL)_processLearningEvent:(id)event;	// 0x233ea5
- (void)_resetDiscontinuityTrigger;	// 0x233d89
- (void)_resetLEDTimer;	// 0x234859
- (BOOL)_saveActiveRemoteSets;	// 0x234309
- (void)_setState:(int)state;	// 0x233b51
- (id)_setTemporaryActiveSet:(id)set;	// 0x233c09
- (void)_unpairAppleRemote;	// 0x233ba9
- (void)addRemoteSet:(id)set;	// 0x23398d
// converted property getter: - (BOOL)appleRemoteInUse;	// 0x233b1d
- (void)applyCaptureToButton:(int)button;	// 0x233335
- (void)applyCaptureToPlayButtonOnly;	// 0x2333c1
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x233515
- (id)applyLearningSet;	// 0x233471
- (double)captureProgress;	// 0x2332a9
- (id)capturedPatternSet;	// 0x2332f1
- (void)dealloc;	// 0x232d9d
- (void)endLearn;	// 0x233271
- (id)findIdenticalActiveRemoteSet:(id)set;	// 0x2339c9
- (int)findPatternInActiveSets:(id)activeSets;	// 0x23381d
- (int)findPatternInActiveSets:(id)activeSets includeLearningSet:(BOOL)set excludeExtendedRemoteSet:(id)set3 excludeRange:(NSRange)range;	// 0x233841
- (id)identifyCapture:(int)capture;	// 0x2336b9
// converted property getter: - (id)learningSet;	// 0x2331f5
- (void)pairAppleRemote:(unsigned long)remote;	// 0x233aa9
- (BOOL)processEvent:(id)event;	// 0x232e65
// converted property getter: - (id)remoteSets;	// 0x233a05
- (void)removeRemoteSet:(id)set;	// 0x233935
- (void)resetLearningSet;	// 0x233a39
- (void)setCustomPage:(unsigned short)page withUsage:(unsigned short)usage;	// 0x233135
- (void)setName:(id)name remoteSet:(id)set;	// 0x2335bd
// converted property setter: - (void)setState:(int)state;	// 0x233185
- (id)setTemporaryActiveSet:(id)set;	// 0x233671
- (void)startLearn;	// 0x233229
// converted property getter: - (int)state;	// 0x2331c1
// converted property getter: - (id)temporaryActiveSet;	// 0x23363d
- (void)unpairAppleRemote;	// 0x233ae5
@end
