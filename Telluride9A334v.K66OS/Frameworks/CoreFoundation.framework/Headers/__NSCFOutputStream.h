/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSOutputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x348ce76d; S=0x348ce771; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x348ce629
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x348ce625
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x348ce665
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x348ce695
- (id)initToMemory;	// 0x348ce62d
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x348ce709
- (BOOL)_isDeallocating;	// 0x348ce5d1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x348ce8dd
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x348ce8c5
- (BOOL)_tryRetain;	// 0x348ce5bd
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x348ce8e5
- (void)close;	// 0x348ce769
// converted property getter: - (id)delegate;	// 0x348ce76d
- (void)finalize;	// 0x348ce5e1
- (BOOL)hasSpaceAvailable;	// 0x348ce8b9
- (unsigned)hash;	// 0x348ce5a5
- (BOOL)isEqual:(id)equal;	// 0x348ce58d
- (void)open;	// 0x348ce765
- (id)propertyForKey:(id)key;	// 0x348ce7ed
- (oneway void)release;	// 0x348ce5b9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x348ce855
- (id)retain;	// 0x348ce5a9
- (unsigned)retainCount;	// 0x348ce5dd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x348ce829
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x348ce771
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x348ce819
- (id)streamError;	// 0x348ce885
- (unsigned)streamStatus;	// 0x348ce881
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x348ce8b1
@end

