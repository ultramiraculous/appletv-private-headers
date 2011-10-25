/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x30788da5
+ (id)allocWithZone:(NSZone *)zone;	// 0x30788e05
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30788e01
- (unsigned)count;	// 0x30788ca9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30788cc1
- (void)dealloc;	// 0x30788da9
- (void)finalize;	// 0x30788dd5
- (id)keyEnumerator;	// 0x30788cbd
- (id)objectForKey:(id)key;	// 0x30788cb9
- (void)removeObjectForKey:(id)key;	// 0x30788da1
- (void)setObject:(id)object forKey:(id)key;	// 0x30788d9d
@end

