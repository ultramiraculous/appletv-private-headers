/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x302a8e55
+ (id)allocWithZone:(NSZone *)zone;	// 0x3024f7e5
+ (BOOL)autoreleasePoolExists;	// 0x302a8fad
+ (unsigned)autoreleasedObjectCount;	// 0x302a8fa5
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x302a8fb5
+ (void)enableRelease:(BOOL)release;	// 0x302a8fb1
+ (unsigned)poolCountHighWaterMark;	// 0x302a8fb9
+ (unsigned)poolCountHighWaterResolution;	// 0x302a8fc1
+ (void)releaseAllPools;	// 0x302a8fa1
+ (void)resetTotalAutoreleasedObjects;	// 0x302a8fcd
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x302a8fbd
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x302a8fc5
+ (void)showPools;	// 0x302a8f9d
+ (unsigned)topAutoreleasePoolCount;	// 0x302a8fa9
+ (unsigned)totalAutoreleasedObjects;	// 0x302a8fc9
- (id)init;	// 0x3024f85d
- (id)initWithCapacity:(unsigned)capacity;	// 0x302a8e5d
- (void)addObject:(id)object;	// 0x302a8e91
- (id)autorelease;	// 0x302a8f35
- (void)dealloc;	// 0x302a8f81
- (void)drain;	// 0x30258a71
- (oneway void)release;	// 0x30251be1
- (id)retain;	// 0x302a8ee5
- (unsigned)retainCount;	// 0x302a8f31
@end

