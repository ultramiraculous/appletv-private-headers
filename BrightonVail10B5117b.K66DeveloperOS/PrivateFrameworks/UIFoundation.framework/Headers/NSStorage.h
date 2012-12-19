/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStorage : NSObject {
	id _storage;	// 4 = 0x4
	long _hintCapacity;	// 8 = 0x8
	unsigned _reserved[4];	// 12 = 0xc
}
@property(assign) unsigned hintCapacity;	// G=0x35c92fe9; S=0x35c92fd9; converted property
+ (void)initialize;	// 0x35c92ebd
- (id)init;	// 0x35c92f51
- (id)initWithElementSize:(unsigned)elementSize capacity:(unsigned)capacity;	// 0x35c92efd
- (void)addElement:(void *)element;	// 0x35c930ed
- (unsigned)capacity;	// 0x35c92fc5
- (unsigned)count;	// 0x35c92fb1
- (void)dealloc;	// 0x35c92f65
- (id)description;	// 0x35c93125
- (void *)elementAtIndex:(unsigned)index;	// 0x35c9300d
- (unsigned)elementSize;	// 0x35c92ff9
- (void)enumerateElementsUsingBlock:(id)block;	// 0x35c93155
// converted property getter: - (unsigned)hintCapacity;	// 0x35c92fe9
- (void)insertElement:(void *)element atIndex:(unsigned)index;	// 0x35c930cd
- (void)insertElements:(void *)elements count:(unsigned)count atIndex:(unsigned)index;	// 0x35c93025
- (void *)pointerToElement:(unsigned)element directlyAccessibleElements:(NSRange *)elements;	// 0x35c930b5
- (void)removeElementAtIndex:(unsigned)index;	// 0x35c9306d
- (void)removeElementsInRange:(NSRange)range;	// 0x35c9309d
- (void)replaceElementAtIndex:(unsigned)index withElement:(void *)element;	// 0x35c93085
// converted property setter: - (void)setHintCapacity:(unsigned)capacity;	// 0x35c92fd9
@end
