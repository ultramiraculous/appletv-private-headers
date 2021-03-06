/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSPointerFunctions : NSObject <NSCopying> {
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x346d2149; S=0x346d20e9; 
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x346d213d; S=0x346d20dd; 
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x346d2125; S=0x346d20c5; 
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x346d2131; S=0x346d20d1; 
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x346d2155; S=0x346d20f5; 
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x346d2119; S=0x346d20b9; 
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x346d2161; S=0x346d2101; 
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x346d216d; S=0x346d210d; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x34673175
+ (id)pointerFunctionsWithOptions:(unsigned)options;	// 0x346d1fc5
- (id)initWithOptions:(unsigned)options;	// 0x346d2015
// declared property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x346d2149
- (id)copyWithZone:(NSZone *)zone;	// 0x346d20ad
// declared property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x346d213d
// declared property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x346d2125
// declared property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x346d2131
// declared property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x346d2155
// declared property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x346d20e9
// declared property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x346d20dd
// declared property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x346d20c5
// declared property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x346d20d1
// declared property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x346d20f5
// declared property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x346d20b9
// declared property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x346d2101
// declared property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x346d210d
// declared property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x346d2119
// declared property getter: - (BOOL)usesStrongWriteBarrier;	// 0x346d2161
// declared property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x346d216d
@end

