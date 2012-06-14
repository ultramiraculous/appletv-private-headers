/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <Security/__kCFStreamSSLTrustedLeafCertificates.h>


__attribute__((visibility("hidden")))
@interface NSCFSet : __kCFStreamSSLTrustedLeafCertificates {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31606aa1
- (BOOL)_isDeallocating;	// 0x31606a51
- (unsigned)_trueCount;	// 0x31606b69
- (BOOL)_tryRetain;	// 0x31606a3d
- (void)addObject:(id)object;	// 0x31606bd9
- (Class)classForCoder;	// 0x31606aa5
- (id)copyWithZone:(NSZone *)zone;	// 0x31606ae5
- (unsigned)count;	// 0x31606b3d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31606b6d
- (void)finalize;	// 0x31606a5d
- (void)getObjects:(id *)objects;	// 0x31606d99
- (unsigned)hash;	// 0x31606a21
- (BOOL)isEqual:(id)equal;	// 0x316069d5
- (id)member:(id)member;	// 0x31606b41
- (void)minusSet:(id)set;	// 0x31606db9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31606b21
- (id)objectEnumerator;	// 0x31606b7d
- (oneway void)release;	// 0x31606a35
- (void)removeAllObjects;	// 0x31606d39
- (void)removeObject:(id)object;	// 0x31606c89
- (id)retain;	// 0x31606a25
- (unsigned)retainCount;	// 0x31606a39
- (void)setSet:(id)set;	// 0x31606f71
- (void)unionSet:(id)set;	// 0x31606e99
@end
