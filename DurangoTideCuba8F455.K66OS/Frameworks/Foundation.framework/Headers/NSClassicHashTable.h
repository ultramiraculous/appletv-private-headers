/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable {
@private
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _callBacks;	// 4 = 0x4
	CFBasicHashRef _ht;	// 24 = 0x18
}
- (id)init;	// 0x31056431
- (void)addObject:(id)object;	// 0x310368f9
- (id)allObjects;	// 0x310579c1
- (id)copy;	// 0x31057f61
- (unsigned)count;	// 0x310579a9
- (void)dealloc;	// 0x31057591
- (id)description;	// 0x31057885
- (void *)getItem:(const void *)item;	// 0x31036855
- (void)getKeys:(const void **)keys count:(unsigned *)count;	// 0x31057791
- (unsigned)hash;	// 0x31056581
- (void)insertItem:(const void *)item;	// 0x310366bd
- (void)insertKnownAbsentItem:(const void *)item;	// 0x310576ad
- (BOOL)isEqual:(id)equal;	// 0x310575e5
- (void)removeAllItems;	// 0x310575cd
- (void)removeItem:(const void *)item;	// 0x31057745
@end

