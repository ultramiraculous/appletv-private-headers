/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSObject.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject <NSObject> {
	Class isa;	// 0 = 0x0
}
- (unsigned long)_cfTypeID;	// 0x32e2ee09
- (BOOL)isNSArray__;	// 0x32e56871
- (BOOL)isNSData__;	// 0x32e2a621
- (BOOL)isNSDate__;	// 0x32e55b21
- (BOOL)isNSDictionary__;	// 0x32eb1819
- (BOOL)isNSNumber__;	// 0x32e55b1d
- (BOOL)isNSOrderedSet__;	// 0x32eb181d
- (BOOL)isNSSet__;	// 0x32e5d981
- (BOOL)isNSString__;	// 0x32e2a61d
- (BOOL)isNSTimeZone__;	// 0x32eb1821
- (BOOL)isNSValue__;	// 0x32eb1825
@end

@interface NSObject (NSObject)
+ (id)init;	// 0x32eb1f7d
+ (id)_copyDescription;	// 0x32eb1cd1
+ (id)alloc;	// 0x32e12665
+ (id)allocWithZone:(NSZone *)zone;	// 0x32e138d1
+ (id)autorelease;	// 0x32eb1805
+ (Class)class;	// 0x32e19865
+ (BOOL)conformsToProtocol:(id)protocol;	// 0x32e4f839
+ (id)copy;	// 0x32e58471
+ (id)copyWithZone:(NSZone *)zone;	// 0x32e540ed
+ (void)dealloc;	// 0x32eb1f01
+ (id)debugDescription;	// 0x32eb1875
+ (id)description;	// 0x32e47581
+ (void)doesNotRecognizeSelector:(SEL)selector;	// 0x32eb21d5
+ (void)finalize;	// 0x32eb1e91
+ (void)forwardInvocation:(id)invocation;	// 0x32eb18b9
+ (id)forwardingTargetForSelector:(SEL)selector;	// 0x32eb1801
+ (unsigned)hash;	// 0x32e21035
+ (void)initialize;	// 0x32eb17f1
+ (/*function-pointer*/ void *)instanceMethodForSelector:(SEL)selector;	// 0x32e3d739
+ (id)instanceMethodSignatureForSelector:(SEL)selector;	// 0x32e28195
+ (BOOL)instancesRespondToSelector:(SEL)selector;	// 0x32e4abe1
+ (BOOL)isAncestorOfObject:(id)object;	// 0x32eb1915
+ (BOOL)isEqual:(id)equal;	// 0x32e51c85
+ (BOOL)isFault;	// 0x32eb17f9
+ (BOOL)isKindOfClass:(Class)aClass;	// 0x32e486c1
+ (BOOL)isMemberOfClass:(Class)aClass;	// 0x32eb184d
+ (BOOL)isProxy;	// 0x32e4f835
+ (BOOL)isSubclassOfClass:(Class)aClass;	// 0x32e35305
+ (void)load;	// 0x32e35329
+ (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x32e3d791
+ (id)methodSignatureForSelector:(SEL)selector;	// 0x32e40755
+ (id)mutableCopy;	// 0x32eb1811
+ (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32eb1815
+ (id)new;	// 0x32e2a1a1
+ (id)performSelector:(SEL)selector;	// 0x32e560e5
+ (id)performSelector:(SEL)selector withObject:(id)object;	// 0x32e3d5f1
+ (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x32eb18e9
+ (oneway void)release;	// 0x32e180c1
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x32e3c2b5
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x32e27f59
+ (BOOL)respondsToSelector:(SEL)selector;	// 0x32e3d5d5
+ (id)retain;	// 0x32e17e71
+ (unsigned)retainCount;	// 0x32eb1809
+ (id)self;	// 0x32e126e5
+ (Class)superclass;	// 0x32e1dea1
+ (NSZone *)zone;	// 0x32eb1a45
- (id)init;	// 0x32e16919
- (id)_copyDescription;	// 0x32e3c7f5
- (id)autorelease;	// 0x32e129c5
- (Class)class;	// 0x32e12f5d
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32e1eec5
- (id)copy;	// 0x32e17b41
- (void)dealloc;	// 0x32e12ecd
- (id)debugDescription;	// 0x32eb1861
- (id)description;	// 0x32e596dd
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x32eb2159
- (void)finalize;	// 0x32eb2435
- (void)forwardInvocation:(id)invocation;	// 0x32eb1889
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x32e28191
- (unsigned)hash;	// 0x32e230ad
- (BOOL)isEqual:(id)equal;	// 0x32e1e519
- (BOOL)isFault;	// 0x32eb17fd
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32e19869
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x32e51ca9
- (BOOL)isProxy;	// 0x32e4f869
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x32e3d75d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32e31315
- (id)mutableCopy;	// 0x32e1df39
- (id)performSelector:(SEL)selector;	// 0x32e46d69
- (id)performSelector:(SEL)selector withObject:(id)object;	// 0x32e1beed
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x32e1e559
- (oneway void)release;	// 0x32e12c25
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32e180d1
- (id)retain;	// 0x32e11ec9
- (unsigned)retainCount;	// 0x32e47289
- (id)self;	// 0x32eb17f5
- (Class)superclass;	// 0x32e51c91
- (NSZone *)zone;	// 0x32e213a9
@end

