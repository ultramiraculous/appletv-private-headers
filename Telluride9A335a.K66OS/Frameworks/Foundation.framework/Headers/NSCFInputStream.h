/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSInputStream.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x320a0aa9; S=0x320a0aad; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x320a09ed
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x320a09e9
- (id)initWithData:(id)data;	// 0x320a09f5
- (id)initWithFileAtPath:(id)path;	// 0x320a0a15
- (id)initWithURL:(id)url;	// 0x320a0a7d
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x320a0c3d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x320a0c25
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x320a0c45
- (BOOL)allowsWeakReference;	// 0x320a0979
- (void)close;	// 0x320a0aa5
// converted property getter: - (id)delegate;	// 0x320a0aa9
- (void)finalize;	// 0x320a09a5
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x320a0bf5
- (BOOL)hasBytesAvailable;	// 0x320a0c19
- (unsigned)hash;	// 0x320a0961
- (BOOL)isEqual:(id)equal;	// 0x320a0949
- (void)open;	// 0x320a0aa1
- (id)propertyForKey:(id)key;	// 0x320a0b29
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x320a0bed
- (oneway void)release;	// 0x320a0975
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x320a0b91
- (id)retain;	// 0x320a0965
- (unsigned)retainCount;	// 0x320a09a1
- (BOOL)retainWeakReference;	// 0x320a098d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x320a0b65
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320a0aad
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x320a0b55
- (id)streamError;	// 0x320a0bc1
- (unsigned)streamStatus;	// 0x320a0bbd
@end
