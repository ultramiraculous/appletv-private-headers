/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "_NSCFURLProtocolBridge.h"

@class NSMutableArray, NSCountedSet, NSThread;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge {
	NSMutableArray *_workQueue;	// 24 = 0x18
	NSCountedSet *_runloops;	// 28 = 0x1c
	BOOL _canSignalDirectly;	// 32 = 0x20
	NSThread *_processThread;	// 36 = 0x24
}
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x30640341
- (void)dealloc;	// 0x306412f9
- (void)finalize;	// 0x306b743d
- (void)processEventQ;	// 0x30640bc5
- (void)pushEvent:(id)event from:(const char *)from;	// 0x30640949
- (void)releaseWorkQueue;	// 0x3064135d
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x306407d9
- (BOOL)shouldSignalDirectly;	// 0x30640b21
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x306b747d
@end

