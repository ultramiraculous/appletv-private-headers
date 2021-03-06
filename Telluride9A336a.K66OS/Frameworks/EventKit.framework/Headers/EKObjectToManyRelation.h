/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
@private
	NSMutableSet *_loadedItems;	// 20 = 0x14
	NSMutableSet *_effectiveItems;	// 24 = 0x18
	NSMutableSet *_addedItems;	// 28 = 0x1c
	NSMutableSet *_removedItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableSet *addedItems;	// G=0x313e786d; S=0x313e787d; @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;	// G=0x31383f79; 
@property(retain, nonatomic) NSMutableSet *effectiveItems;	// G=0x313e7839; S=0x313e7849; @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet *items;	// G=0x31385d8d; S=0x31387831; 
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;	// G=0x313e73f5; 
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;	// G=0x313e7425; 
@property(retain, nonatomic) NSMutableSet *loadedItems;	// G=0x313e7805; S=0x313e7815; @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet *removedItems;	// G=0x313e78a1; S=0x313e78b1; @synthesize=_removedItems
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x3138a871
- (id)_effectiveItems;	// 0x31383fa1
- (void)_forgetRelatedObject:(id)object;	// 0x313e7455
- (id)_loadedItems;	// 0x31384049
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31394aa9
- (void)addItem:(id)item;	// 0x3138a851
// declared property getter: - (id)addedItems;	// 0x313e786d
- (id)committedValue;	// 0x313877d1
// declared property getter: - (int)count;	// 0x31383f79
- (void)dealloc;	// 0x313910dd
- (id)description;	// 0x313e7721
- (void)didCommit;	// 0x313908e1
// declared property getter: - (id)effectiveItems;	// 0x313e7839
- (BOOL)isWeak;	// 0x313e73f1
// declared property getter: - (id)items;	// 0x31385d8d
// declared property getter: - (BOOL)itemsWereAdded;	// 0x313e73f5
// declared property getter: - (BOOL)itemsWereRemoved;	// 0x313e7425
// declared property getter: - (id)loadedItems;	// 0x313e7805
- (void)refresh;	// 0x313e75dd
- (void)removeItem:(id)item;	// 0x31394a89
// declared property getter: - (id)removedItems;	// 0x313e78a1
- (void)reset;	// 0x313e74c1
- (void)rollback;	// 0x31388a89
// declared property setter: - (void)setAddedItems:(id)items;	// 0x313e787d
// declared property setter: - (void)setEffectiveItems:(id)items;	// 0x313e7849
// declared property setter: - (void)setItems:(id)items;	// 0x31387831
// declared property setter: - (void)setLoadedItems:(id)items;	// 0x313e7815
// declared property setter: - (void)setRemovedItems:(id)items;	// 0x313e78b1
- (void)updatePersistentObject;	// 0x3138d771
- (BOOL)validate:(id *)validate;	// 0x3138bc09
@end

