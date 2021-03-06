/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSLock;

@interface CALRunLoopSemaphore : NSObject {
	CFRunLoopRef _rloop;	// 4 = 0x4
	int _count;	// 8 = 0x8
	int _pipe[2];	// 12 = 0xc
	CFSocketRef _socket;	// 20 = 0x14
	CFRunLoopSourceRef _socketSource;	// 24 = 0x18
	NSLock *_countLock;	// 28 = 0x1c
}
- (id)init;	// 0x3175f65d
- (id)initWithCFRunLoop:(CFRunLoopRef)cfrunLoop;	// 0x3175f681
- (void)awake;	// 0x3175f659
- (void)dealloc;	// 0x3175f7a9
- (void)down;	// 0x3175f8f1
- (void)finalize;	// 0x3175f85d
- (void)up;	// 0x3175f9a1
- (int)value;	// 0x3175fa0d
@end

