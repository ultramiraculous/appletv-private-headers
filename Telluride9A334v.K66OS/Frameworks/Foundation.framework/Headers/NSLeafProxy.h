/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSDocInfo, NSString;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x306f955d
+ (id)allocWithZone:(NSZone *)zone;	// 0x306f953d
+ (void)forwardInvocation:(id)invocation;	// 0x306f9571
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x306f9771
- (BOOL)_isDeallocating;	// 0x306f98e5
- (BOOL)_tryRetain;	// 0x306f98e1
- (id)autorelease;	// 0x306f98e9
- (id)copy;	// 0x306f9815
- (id)copyWithZone:(NSZone *)zone;	// 0x306f97d1
- (void)dealloc;	// 0x306f9921
- (void)forwardInvocation:(id)invocation;	// 0x306f95bd
- (BOOL)isProxy;	// 0x306f9955
- (id)methodSignatureForSelector:(SEL)selector;	// 0x306f9729
- (void)reallyDealloc;	// 0x306f9829
- (void)release;	// 0x306f98ad
- (id)retain;	// 0x306f9899
- (unsigned)retainCount;	// 0x306f9911
@end
