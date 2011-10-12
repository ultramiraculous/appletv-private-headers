/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSObject.h"


@interface NSProxy <NSObject> {
	Class isa;	// 0 = 0x0
}
+ (id)_copyDescription;	// 0x3069083d
+ (id)alloc;	// 0x30619a6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x30619bd1
+ (id)autorelease;	// 0x3069063d
+ (Class)class;	// 0x30690631
+ (BOOL)conformsToProtocol:(id)protocol;	// 0x30690b91
+ (id)copyWithZone:(NSZone *)zone;	// 0x30690649
+ (id)debugDescription;	// 0x3069081d
+ (void)initialize;	// 0x30619a69
+ (BOOL)isAncestorOfObject:(id)object;	// 0x30690665
+ (BOOL)isFault;	// 0x30690aa1
+ (BOOL)isProxy;	// 0x30690aa9
+ (BOOL)isSubclassOfClass:(Class)aClass;	// 0x30690aad
+ (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3069064d
+ (id)performSelector:(SEL)selector;	// 0x306908c5
+ (id)performSelector:(SEL)selector withObject:(id)object;	// 0x30690975
+ (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x306909d9
+ (oneway void)release;	// 0x30690639
+ (BOOL)respondsToSelector:(SEL)selector;	// 0x30690651
+ (id)retain;	// 0x30690635
+ (unsigned)retainCount;	// 0x30690641
+ (id)self;	// 0x30619ad5
+ (Class)superclass;	// 0x306907b9
- (id)_copyDescription;	// 0x30690879
- (BOOL)_isDeallocating;	// 0x3069074d
- (BOOL)_tryRetain;	// 0x30690759
- (BOOL)allowsWeakReference;	// 0x30690779
- (id)autorelease;	// 0x30619bf1
- (Class)class;	// 0x306907cd
- (BOOL)conformsToProtocol:(id)protocol;	// 0x30690bbd
- (void)dealloc;	// 0x30619ca5
- (id)debugDescription;	// 0x3069082d
- (id)description;	// 0x306907d9
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x30690701
- (void)finalize;	// 0x306907b5
- (long long)forward:(SEL)forward :(void *)arg2;	// 0x30690629
- (void)forwardInvocation:(id)invocation;	// 0x30690689
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x30619c09
- (unsigned)hash;	// 0x306908c1
- (BOOL)isEqual:(id)equal;	// 0x306908b5
- (BOOL)isFault;	// 0x30690aa5
- (BOOL)isKindOfClass:(Class)aClass;	// 0x30690ac9
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x30690b2d
- (BOOL)isProxy;	// 0x3062aa8d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x306906c5
- (id)performSelector:(SEL)selector;	// 0x3069091d
- (id)performSelector:(SEL)selector withObject:(id)object;	// 0x3063efd9
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x30690a3d
- (oneway void)release;	// 0x30619c35
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30690c21
- (id)retain;	// 0x30620d99
- (unsigned)retainCount;	// 0x30690749
- (BOOL)retainWeakReference;	// 0x3069079d
- (id)self;	// 0x306907d1
- (Class)superclass;	// 0x306907bd
- (NSZone *)zone;	// 0x306907d5
@end

