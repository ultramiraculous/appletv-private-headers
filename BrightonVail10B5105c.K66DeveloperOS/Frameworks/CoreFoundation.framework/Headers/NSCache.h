/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library


@interface NSCache : NSObject {
	id _delegate;	// 4 = 0x4
	void *_private[5];	// 8 = 0x8
	void *_reserved;	// 28 = 0x1c
}
@property(assign) unsigned countLimit;	// G=0x3575f041; S=0x356d4d21; converted property
@property(assign) id delegate;	// G=0x3575ef99; S=0x356d4c85; converted property
@property(assign) BOOL evictsObjectsWhenApplicationEntersBackground;	// G=0x3575f071; S=0x3575f089; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x356d1405; S=0x3575f055; converted property
@property(retain) id name;	// G=0x3575ef55; S=0x356d1159; converted property
@property(assign) unsigned totalCostLimit;	// G=0x3575f02d; S=0x356d4cf9; converted property
- (id)init;	// 0x356d1095
- (id)allObjects;	// 0x3575f121
// converted property getter: - (unsigned)countLimit;	// 0x3575f041
- (void)dealloc;	// 0x356e2a2d
// converted property getter: - (id)delegate;	// 0x3575ef99
// converted property getter: - (BOOL)evictsObjectsWhenApplicationEntersBackground;	// 0x3575f071
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x356d1405
- (void)finalize;	// 0x3575eecd
// converted property getter: - (id)name;	// 0x3575ef55
- (id)objectForKey:(id)key;	// 0x356d1331
- (void)removeAllObjects;	// 0x356e29e1
- (void)removeObjectForKey:(id)key;	// 0x356e292d
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x356d4d21
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x356d4c85
// converted property setter: - (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)background;	// 0x3575f089
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x3575f055
// converted property setter: - (void)setName:(id)name;	// 0x356d1159
- (void)setObject:(id)object forKey:(id)key;	// 0x356d141d
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x356d144d
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x356d4cf9
// converted property getter: - (unsigned)totalCostLimit;	// 0x3575f02d
@end
