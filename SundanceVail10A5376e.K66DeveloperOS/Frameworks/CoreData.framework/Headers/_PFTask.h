/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFTask : NSObject {
	int _cd_rc;	// 4 = 0x4
	void *_task;	// 8 = 0x8
	void *arguments;	// 12 = 0xc
	opaque_pthread_mutex_t lock;	// 16 = 0x10
	opaque_pthread_cond_t condition;	// 60 = 0x3c
	int isFinishedFlag;	// 88 = 0x58
}
+ (int)getNumActiveProcessors;	// 0x35bd180d
+ (unsigned long long)getPhysicalMemory;	// 0x35c0bc39
+ (double)getProcessorSpeed;	// 0x35c0bbb1
- (id)initWithFunction:(/*function-pointer*/ void *)function withArgument:(void *)argument andPriority:(int)priority;	// 0x35c0bc7d
- (BOOL)_isDeallocating;	// 0x35c0c061
- (BOOL)_tryRetain;	// 0x35c0c05d
- (void)dealloc;	// 0x35c0bef5
- (void)finalize;	// 0x35c0bf6d
- (void)release;	// 0x35c0c005
- (id)retain;	// 0x35c0bfe5
- (unsigned)retainCount;	// 0x35c0c049
@end

