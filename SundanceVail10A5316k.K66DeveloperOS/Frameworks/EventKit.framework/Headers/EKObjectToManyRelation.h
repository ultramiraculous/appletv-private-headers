/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
@private
	NSMutableSet *_loadedItems;	// 20 = 0x14
	NSMutableSet *_effectiveItems;	// 24 = 0x18
	NSMutableSet *_addedItems;	// 28 = 0x1c
	NSMutableSet *_removedItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableSet *addedItems;	// G=0x30e69115; S=0x30e69125; @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;	// G=0x30df7f01; 
@property(retain, nonatomic) NSMutableSet *effectiveItems;	// G=0x30e690f5; S=0x30e69105; @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet *items;	// G=0x30df97b9; S=0x30dfb29d; 
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;	// G=0x30e68cc5; 
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;	// G=0x30e68cf1; 
@property(retain, nonatomic) NSMutableSet *loadedItems;	// G=0x30e690d5; S=0x30e690e5; @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet *removedItems;	// G=0x30e69135; S=0x30e69145; @synthesize=_removedItems
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30dfe171
- (id)_effectiveItems;	// 0x30df7f29
- (void)_forgetRelatedObject:(id)object;	// 0x30e68d1d
- (id)_loadedItems;	// 0x30df7fe5
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30e08e9d
- (void)addItem:(id)item;	// 0x30dfe151
// declared property getter: - (id)addedItems;	// 0x30e69115
- (id)committedValue;	// 0x30dfb23d
// declared property getter: - (int)count;	// 0x30df7f01
- (void)dealloc;	// 0x30e04fad
- (id)description;	// 0x30e68fed
- (void)didCommit;	// 0x30e04809
// declared property getter: - (id)effectiveItems;	// 0x30e690f5
- (BOOL)isWeak;	// 0x30e68cc1
// declared property getter: - (id)items;	// 0x30df97b9
// declared property getter: - (BOOL)itemsWereAdded;	// 0x30e68cc5
// declared property getter: - (BOOL)itemsWereRemoved;	// 0x30e68cf1
// declared property getter: - (id)loadedItems;	// 0x30e690d5
- (void)refresh;	// 0x30e68e9d
- (void)removeItem:(id)item;	// 0x30e08e7d
// declared property getter: - (id)removedItems;	// 0x30e69135
- (void)reset;	// 0x30e68d8d
- (void)rollback;	// 0x30dfc595
// declared property setter: - (void)setAddedItems:(id)items;	// 0x30e69125
// declared property setter: - (void)setEffectiveItems:(id)items;	// 0x30e69105
// declared property setter: - (void)setItems:(id)items;	// 0x30dfb29d
// declared property setter: - (void)setLoadedItems:(id)items;	// 0x30e690e5
// declared property setter: - (void)setRemovedItems:(id)items;	// 0x30e69145
- (void)updatePersistentObject;	// 0x30e01271
- (BOOL)validate:(id *)validate;	// 0x30dff599
@end
