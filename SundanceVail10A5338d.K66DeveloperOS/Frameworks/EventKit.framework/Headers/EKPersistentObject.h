/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSMutableDictionary, EKEventStore, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKPersistentObject : NSObject {
	EKEventStore *_eventStore;	// 4 = 0x4
	id _objectID;	// 8 = 0x8
	CFDictionaryRef _loadedProperties;	// 12 = 0xc
	NSMutableDictionary *_referencers;	// 16 = 0x10
	NSMutableSet *_dirtyProperties;	// 20 = 0x14
	unsigned _flags;	// 24 = 0x18
	NSMutableDictionary *_committedProperties;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableDictionary *committedProperties;	// G=0x34b86e01; S=0x34b86e11; @synthesize=_committedProperties
@property(readonly, retain) NSMutableSet *dirtyProperties;	// G=0x34b84ff9; converted property
@property(readonly, assign, nonatomic) EKEventStore *eventStore;	// G=0x34b2ad21; 
@property(readonly, retain) id objectID;	// G=0x34b22531; converted property
+ (id)defaultPropertiesToLoad;	// 0x34b22c55
+ (id)relations;	// 0x34b84e8d
- (id)init;	// 0x34b342b5
- (id)initCommon;	// 0x34b221d1
- (void)_addDirtyProperty:(id)property;	// 0x34b30d85
- (void)_addObjectCore:(id)core toValues:(id)values relation:(id)relation;	// 0x34b38169
- (void)_addReference:(id)reference forKey:(id)key;	// 0x34b85461
- (BOOL)_areDefaultPropertiesLoaded;	// 0x34b22c31
- (void)_clearReferences;	// 0x34b85561
- (void)_clearWeakRelations;	// 0x34b856f9
- (void)_fastpathSetProperty:(id)property forKey:(id)key isRelation:(BOOL)relation;	// 0x34b85219
- (BOOL)_isPendingDelete;	// 0x34b357f5
- (BOOL)_isPendingInsert;	// 0x34b35611
- (BOOL)_isPendingUpdate;	// 0x34b35819
- (id)_loadChildIdentifiersForKey:(id)key;	// 0x34b2ecd1
- (void)_loadDefaultPropertiesIfNeeded;	// 0x34b22a2d
- (BOOL)_loadRelationForKey:(id)key value:(id *)value;	// 0x34b2a835
- (id)_loadStringValueForKey:(id)key;	// 0x34b2350d
- (id)_loadedPropertyKeys;	// 0x34b84fd9
- (void)_primitiveSetValue:(id)value forKey:(id)key daemonSetter:(id)setter;	// 0x34b30d1d
- (id)_primitiveValueForKey:(id)key loader:(id)loader;	// 0x34b22949
- (id)_propertyForKey:(id)key;	// 0x34b22df9
- (id)_relationForKey:(id)key;	// 0x34b2a37d
- (void)_releaseLoadedProperties;	// 0x34b85341
- (void)_removeObjectCore:(id)core fromValues:(id)values relation:(id)relation;	// 0x34b3feb9
- (void)_removeReference:(id)reference forKey:(id)key;	// 0x34b85519
- (void)_setDefaultPropertiesLoaded:(BOOL)loaded;	// 0x34b22dc1
- (void)_setEventStore:(id)store;	// 0x34b2260d
- (void)_setObjectID:(id)anId;	// 0x34b221fd
- (void)_setPendingDelete:(BOOL)aDelete;	// 0x34b3d561
- (void)_setPendingInsert:(BOOL)insert;	// 0x34b3583d
- (void)_setPendingUpdate:(BOOL)update;	// 0x34b3d6a9
- (void)_setProperty:(id)property forKey:(id)key;	// 0x34b22f09
- (BOOL)_shouldRetainPropertyForKey:(id)key;	// 0x34b851e1
- (void)_takeValuesForDefaultProperties:(id)defaultProperties;	// 0x34b86bf1
- (void)changed;	// 0x34b30e05
// declared property getter: - (id)committedProperties;	// 0x34b86e01
- (id)committedValueForKey:(id)key;	// 0x34b31859
- (void)dealloc;	// 0x34b34335
// converted property getter: - (id)dirtyProperties;	// 0x34b84ff9
- (id)dump;	// 0x34b86c51
- (int)entityType;	// 0x34b84edd
// declared property getter: - (id)eventStore;	// 0x34b2ad21
- (BOOL)existsInStore;	// 0x34b335d5
- (BOOL)isDirty;	// 0x34b84f09
- (BOOL)isEqual:(id)equal;	// 0x34b2cf3d
- (BOOL)isNew;	// 0x34b2830d
- (BOOL)isPropertyDirty:(id)dirty;	// 0x34b39cf5
- (BOOL)isPropertyLoaded:(id)loaded;	// 0x34b2ac25
// converted property getter: - (id)objectID;	// 0x34b22531
- (void)primitiveAddRelatedObject:(id)object forKey:(id)key;	// 0x34b37f91
- (BOOL)primitiveBoolValueForKey:(id)key;	// 0x34b22845
- (id)primitiveDataValueForKey:(id)key;	// 0x34b86485
- (id)primitiveDateValueForKey:(id)key;	// 0x34b28a55
- (double)primitiveDoubleValueForKey:(id)key;	// 0x34b85ac9
- (int)primitiveIntValueForKey:(id)key;	// 0x34b231b9
- (id)primitiveNumberValueForKey:(id)key;	// 0x34b33f3d
- (id)primitiveRelationValueForKey:(id)key;	// 0x34b29f69
- (void)primitiveRemoveRelatedObject:(id)object forKey:(id)key;	// 0x34b3fd71
- (void)primitiveSetBoolValue:(BOOL)value forKey:(id)key;	// 0x34b384b1
- (void)primitiveSetDataValue:(id)value forKey:(id)key;	// 0x34b866b9
- (void)primitiveSetDateValue:(id)value forKey:(id)key;	// 0x34b382dd
- (void)primitiveSetDoubleValue:(double)value forKey:(id)key;	// 0x34b3f569
- (void)primitiveSetIntValue:(int)value forKey:(id)key;	// 0x34b346d5
- (void)primitiveSetNumberValue:(id)value forKey:(id)key;	// 0x34b391a1
- (void)primitiveSetRelationValue:(id)value forKey:(id)key;	// 0x34b373bd
- (void)primitiveSetStringValue:(id)value forKey:(id)key;	// 0x34b30c59
- (void)primitiveSetURLValue:(id)value forKey:(id)key;	// 0x34b863c1
- (void)primitiveSetUnboundedStringValue:(id)value forKey:(id)key;	// 0x34b86119
- (id)primitiveStringValueForKey:(id)key;	// 0x34b233ed
- (id)primitiveURLValueForKey:(id)key;	// 0x34b861dd
- (id)primitiveUnboundedStringValueForKey:(id)key;	// 0x34b30529
- (void)primitiveValueChangedForKey:(id)key;	// 0x34b3469d
- (BOOL)pushDirtyProperties:(id *)properties;	// 0x34b3a6dd
- (BOOL)refresh;	// 0x34b3bf75
- (BOOL)refreshExcludingProperties:(id)properties;	// 0x34b3373d
- (void)reset;	// 0x34b850d5
- (void)rollback;	// 0x34b32d29
- (void)saved;	// 0x34b3af15
// declared property setter: - (void)setCommittedProperties:(id)properties;	// 0x34b86e11
- (void)takeValues:(id)values forProperties:(id)properties;	// 0x34b8680d
- (void)unloadPropertyForKey:(id)key;	// 0x34b3ff4d
- (BOOL)validate:(id *)validate;	// 0x34b3a4e9
@end

