/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ATVStateMachine : NSObject {
	NSMutableArray *_events;	// 4 = 0x4
	NSMutableDictionary *_handlers;	// 8 = 0x8
	NSMutableDictionary *_defaultHandlers;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	BOOL _shouldAcceptEvents;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	int _mode;	// 32 = 0x20
	NSArray *_ignorableEvents;	// 36 = 0x24
}
@property(copy) NSString *currentState;	// G=0x3009c8fd; S=0x3009c911; @synthesize=_currentState
@property(copy) NSArray *ignorableEvents;	// G=0x3009c961; S=0x3009c975; @synthesize=_ignorableEvents
@property(readonly, assign, nonatomic) int mode;	// G=0x3009c921; @synthesize=_mode
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3009c8ed; @synthesize=_name
@property(assign) BOOL shouldAcceptEvents;	// G=0x3009c931; S=0x3009c949; @synthesize=_shouldAcceptEvents
+ (void)deregisterStateMachine:(id)machine;	// 0x3009bbd1
+ (void)initialize;	// 0x3009ba31
+ (void)registerStateMachine:(id)machine;	// 0x3009ba8d
+ (id)stateMachineWithName:(id)name;	// 0x3009bbb5
- (id)initWithName:(id)name initialState:(id)state mode:(int)mode;	// 0x3009bc65
- (void).cxx_destruct;	// 0x3009c985
- (void)_dispatchEvent:(id)event;	// 0x3009d095
- (id)_eventHandlerForEvent:(id)event;	// 0x3009d409
- (void)_processEvent:(id)event;	// 0x3009cd9d
- (void)_processNextEvent;	// 0x3009cc5d
- (void)_transitionToState:(id)state withEvent:(id)event context:(id)context userInfo:(id)info;	// 0x3009ca1d
// declared property getter: - (id)currentState;	// 0x3009c8fd
- (void)deregisterHandlers;	// 0x3009c7c9
// declared property getter: - (id)ignorableEvents;	// 0x3009c961
// declared property getter: - (int)mode;	// 0x3009c921
// declared property getter: - (id)name;	// 0x3009c8ed
- (void)postEvent:(id)event;	// 0x3009bde5
- (void)postEvent:(id)event withContext:(id)context;	// 0x3009be05
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x3009be3d
- (void)purgeEventQueue;	// 0x3009c121
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x3009c535
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x3009c1f1
- (void)registerHandlerForEvent:(id)event onStates:(id)states withBlock:(id)block;	// 0x3009c419
- (void)registerStateTransitionFromState:(id)state onEvent:(id)event toState:(id)state3;	// 0x3009c6c1
// declared property setter: - (void)setCurrentState:(id)state;	// 0x3009c911
// declared property setter: - (void)setIgnorableEvents:(id)events;	// 0x3009c975
// declared property setter: - (void)setShouldAcceptEvents:(BOOL)acceptEvents;	// 0x3009c949
// declared property getter: - (BOOL)shouldAcceptEvents;	// 0x3009c931
@end

