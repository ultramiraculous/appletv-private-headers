/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
@private
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x31078105; S=0x3107807d; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x310780f5; S=0x3107806d; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x310780d5; S=0x3107803d; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x310780e5; S=0x31078055; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x31078115; S=0x3107808d; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x310780c5; S=0x3107802d; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x31078125; S=0x3107809d; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x31078139; S=0x310780b1; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(bool)sentinel;	// 0x3100a6e5
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x3100a415
- (id)initWithOptions:(unsigned)options;	// 0x31078535
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x31078105
- (id)copyWithZone:(NSZone *)zone;	// 0x310781d1
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x310780f5
- (unsigned)hash;	// 0x3107801d
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x310780d5
- (BOOL)isEqual:(id)equal;	// 0x31078021
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x310780e5
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x31078115
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x3107807d
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x3107806d
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x3107803d
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x31078055
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x3107808d
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x3107802d
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x3107809d
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x310780b1
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x310780c5
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x31078125
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x31078139
@end

