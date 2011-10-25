/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOutputStream.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x336e6e15; S=0x336e6e19; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x336e6cf1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x336e6ced
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x336e6d25
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x336e6d49
- (id)initToMemory;	// 0x336e6cf9
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x336e6dbd
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x336e6f85
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x336e6f6d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x336e6f8d
- (BOOL)allowsWeakReference;	// 0x336e6c7d
- (void)close;	// 0x336e6e11
// converted property getter: - (id)delegate;	// 0x336e6e15
- (void)finalize;	// 0x336e6ca9
- (BOOL)hasSpaceAvailable;	// 0x336e6f61
- (unsigned)hash;	// 0x336e6c65
- (BOOL)isEqual:(id)equal;	// 0x336e6c4d
- (void)open;	// 0x336e6e0d
- (id)propertyForKey:(id)key;	// 0x336e6e95
- (oneway void)release;	// 0x336e6c79
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x336e6efd
- (id)retain;	// 0x336e6c69
- (unsigned)retainCount;	// 0x336e6ca5
- (BOOL)retainWeakReference;	// 0x336e6c91
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x336e6ed1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336e6e19
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x336e6ec1
- (id)streamError;	// 0x336e6f2d
- (unsigned)streamStatus;	// 0x336e6f29
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x336e6f59
@end

