/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x3278ebfd
+ (id)allocWithZone:(NSZone *)zone;	// 0x3278ec5d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3278ec59
- (id)copyWithZone:(NSZone *)zone;	// 0x3278ebed
- (unsigned)count;	// 0x3278eaf9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3278eb11
- (void)dealloc;	// 0x3278ec01
- (void)finalize;	// 0x3278ec2d
- (id)keyEnumerator;	// 0x3278eb0d
- (id)objectForKey:(id)key;	// 0x3278eb09
@end

