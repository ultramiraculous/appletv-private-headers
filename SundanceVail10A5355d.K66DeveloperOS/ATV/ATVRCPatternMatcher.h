/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, ATVRCButtonPatternSet, NSTimer;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : XXUnknownSuperclass {
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned long _pairingMask;	// 36 = 0x24
	unsigned long _payloadMask;	// 40 = 0x28
	unsigned long _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x212541; S=0x21248d; converted property
@property(retain) NSArray *holdEvents;	// G=0x212551; S=0x2124c9; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x21247d; S=0x212431; converted property
@property(retain) NSArray *upEvents;	// G=0x212561; S=0x212505; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x2127fd
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x212731
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x21267d
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x212a69
+ (double)intervalBetweenLastEvents:(id)events;	// 0x2129c1
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x212941
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x212891
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x2122f1
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x2130a9
- (void)_clearDiscontinuityTrigger;	// 0x212f5d
- (void)_clearHoldTrigger;	// 0x212fed
- (void)_commandPatternMatched;	// 0x212dad
- (double)_discontinuityTriggerInterval;	// 0x213021
- (void)_discontinuityTriggered;	// 0x213181
- (void)_dispatchEvents:(id)events;	// 0x2132d9
- (void)_holdTriggered;	// 0x213251
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x212d25
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x212b61
- (void)_resetDiscontinuityTrigger;	// 0x212ee5
- (void)_resetHoldTrigger;	// 0x212f91
- (void)dealloc;	// 0x21234d
// converted property getter: - (id)downEvents;	// 0x212541
- (void)forceReleaseState;	// 0x212b3d
// converted property getter: - (id)holdEvents;	// 0x212551
// converted property getter: - (id)patternSet;	// 0x21247d
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x212571
- (void)reset;	// 0x2123d9
- (void)setDelegate:(id)delegate;	// 0x21246d
// converted property setter: - (void)setDownEvents:(id)events;	// 0x21248d
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x2124c9
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x212b09
// converted property setter: - (void)setPatternSet:(id)set;	// 0x212431
// converted property setter: - (void)setUpEvents:(id)events;	// 0x212505
// converted property getter: - (id)upEvents;	// 0x212561
@end

