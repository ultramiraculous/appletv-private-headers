/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
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

@interface NSObject (NSObject)
+ (id)init;	// 0x2d2fb879
+ (id)__allocWithZone_OA:(NSZone *)zone_OA;	// 0x2d2fb7c1
+ (id)_copyDescription;	// 0x2d2fb6c5
+ (void)dealloc;	// 0x2d2fb921
+ (id)description;	// 0x2d249be1
+ (void)doesNotRecognizeSelector:(SEL)selector;	// 0x2d2fb425
+ (void)finalize;	// 0x2d2fb9b5
+ (id)instanceMethodSignatureForSelector:(SEL)selector;	// 0x2d248101
+ (void)load;	// 0x2d25b3c5
+ (id)methodSignatureForSelector:(SEL)selector;	// 0x2d28f675
- (BOOL)___tryRetain_OA;	// 0x2d2fb731
- (id)__autorelease_OA;	// 0x2d2fb785
- (void)__dealloc_zombie;	// 0x2d2fb7e1
- (oneway void)__release_OA;	// 0x2d2fb75d
- (id)__retain_OA;	// 0x2d2fb709
- (id)_copyDescription;	// 0x2d25c0fd
- (id)description;	// 0x2d28b6b5
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x2d2fb519
- (id)methodSignatureForSelector:(SEL)selector;	// 0x2d249a59
@end

@interface NSObject (__NSIsKinds)
- (BOOL)isNSArray__;	// 0x2d27a55d
- (BOOL)isNSData__;	// 0x2d27a561
- (BOOL)isNSDate__;	// 0x2d27ee99
- (BOOL)isNSDictionary__;	// 0x2d27a559
- (BOOL)isNSNumber__;	// 0x2d27ee95
- (BOOL)isNSOrderedSet__;	// 0x2d2fba49
- (BOOL)isNSSet__;	// 0x2d2823c9
- (BOOL)isNSString__;	// 0x2d272d21
- (BOOL)isNSTimeZone__;	// 0x2d2fba4d
- (BOOL)isNSValue__;	// 0x2d2fba51
@end

@interface NSObject (__NSCFType)
- (unsigned long)_cfTypeID;	// 0x2d2766bd
@end
