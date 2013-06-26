/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <Foundation/NSOutputStream.h>
#import "ExternalAccessory-Structs.h"

@class NSRecursiveLock, EASession, EAAccessory;

@interface EAOutputStream : NSOutputStream {
	id _delegate;	// 4 = 0x4
	int _sock;	// 8 = 0x8
	EAAccessory *_accessory;	// 12 = 0xc
	EASession *_session;	// 16 = 0x10
	NSRecursiveLock *_statusLock;	// 20 = 0x14
	NSRecursiveLock *_runloopLock;	// 24 = 0x18
	CFSocketRef _cfSocket;	// 28 = 0x1c
	BOOL _isOpenCompletedEventSent;	// 32 = 0x20
	BOOL _hasSpaceAvailableEventSent;	// 33 = 0x21
	BOOL _hasSpaceAvailable;	// 34 = 0x22
	BOOL _isAtEndEventSent;	// 35 = 0x23
	unsigned _streamStatus;	// 36 = 0x24
	CFRunLoopRef _runLoop;	// 40 = 0x28
	CFRunLoopSourceRef _runLoopSource;	// 44 = 0x2c
	CFRunLoopSourceRef _socketRunLoopSource;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x2db46b61; S=0x2db46b71; converted property
@property(readonly, assign) BOOL hasSpaceAvailable;	// G=0x2db46fb5; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x2db46de1; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session socket:(int)socket;	// 0x2db466b5
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x2db470e1
- (void)_performAtEndOfStreamValidation;	// 0x2db470f1
- (void)_scheduleCallback;	// 0x2db4734d
- (void)_streamEventTrigger;	// 0x2db47199
- (void)_streamWriteable;	// 0x2db47179
- (void)close;	// 0x2db46a3d
- (void)dealloc;	// 0x2db46861
// converted property getter: - (id)delegate;	// 0x2db46b61
- (void)endStream;	// 0x2db4707d
// converted property getter: - (BOOL)hasSpaceAvailable;	// 0x2db46fb5
- (void)open;	// 0x2db46931
- (void)openCompleted;	// 0x2db47019
- (id)propertyForKey:(id)key;	// 0x2db46b89
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x2db46d35
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x2db46b91
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2db46b71
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x2db46b8d
- (id)streamError;	// 0x2db46e3d
// converted property getter: - (unsigned)streamStatus;	// 0x2db46de1
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x2db46e41
@end
