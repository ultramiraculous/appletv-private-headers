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
@property(assign) unsigned hintCapacity;	// G=0x32546fa9; S=0x32546f99; converted property
+ (void)initialize;	// 0x32546e7d
- (id)init;	// 0x32546f11
- (id)initWithElementSize:(unsigned)elementSize capacity:(unsigned)capacity;	// 0x32546ebd
- (void)addElement:(void *)element;	// 0x325470ad
- (unsigned)capacity;	// 0x32546f85
- (unsigned)count;	// 0x32546f71
- (void)dealloc;	// 0x32546f25
- (id)description;	// 0x325470e5
- (void *)elementAtIndex:(unsigned)index;	// 0x32546fcd
- (unsigned)elementSize;	// 0x32546fb9
- (void)enumerateElementsUsingBlock:(id)block;	// 0x32547115
// converted property getter: - (unsigned)hintCapacity;	// 0x32546fa9
- (void)insertElement:(void *)element atIndex:(unsigned)index;	// 0x3254708d
- (void)insertElements:(void *)elements count:(unsigned)count atIndex:(unsigned)index;	// 0x32546fe5
- (void *)pointerToElement:(unsigned)element directlyAccessibleElements:(NSRange *)elements;	// 0x32547075
- (void)removeElementAtIndex:(unsigned)index;	// 0x3254702d
- (void)removeElementsInRange:(NSRange)range;	// 0x3254705d
- (void)replaceElementAtIndex:(unsigned)index withElement:(void *)element;	// 0x32547045
// converted property setter: - (void)setHintCapacity:(unsigned)capacity;	// 0x32546f99
@end

