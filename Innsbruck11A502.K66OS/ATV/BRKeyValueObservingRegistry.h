/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface BRKeyValueObservingRegistry : XXUnknownSuperclass {
	NSIndexSet *_indexesToRemove;	// 4 = 0x4
	NSArray *_observationEntries;	// 8 = 0x8
}
@property(retain) NSArray *observationEntries;	// G=0x452999; S=0x4529ad; @synthesize=_observationEntries
- (id)init;	// 0x4523a1
- (void)_addObservationEntry:(id)entry options:(unsigned)options;	// 0x4529bd
- (void)_removeObservationEntriesAtIndexes:(id)indexes inDealloc:(BOOL)dealloc;	// 0x452a4d
- (void)dealloc;	// 0x45242d
// declared property getter: - (id)observationEntries;	// 0x452999
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x4528d9
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath handler:(id)handler;	// 0x4524c5
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath options:(unsigned)options handler:(id)handler;	// 0x4524f5
// declared property setter: - (void)setObservationEntries:(id)entries;	// 0x4529ad
- (void)unregisterAll;	// 0x452879
- (void)unregisterObserver:(id)observer;	// 0x452621
- (void)unregisterObserversOfObject:(id)object;	// 0x4526c9
- (void)unregisterObserversOfObject:(id)object forKeyPath:(id)keyPath;	// 0x452771
@end

