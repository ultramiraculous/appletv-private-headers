/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSArray.h> // Unknown library


@interface NSArray (NSArray)
+ (id)arrayWithContentsOfFile:(id)file;	// 0x34d6bbe1
+ (id)arrayWithContentsOfURL:(id)url;	// 0x34d86f85
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x34d6bc21
- (id)initWithCoder:(id)coder;	// 0x34d5d3e5
- (id)initWithContentsOfFile:(id)file;	// 0x34d86fc5
- (id)initWithContentsOfURL:(id)url;	// 0x34d87001
- (id)_stringToWrite;	// 0x34d86d05
- (Class)classForCoder;	// 0x34d3c895
- (id)debugDescription;	// 0x34d867d1
- (void)encodeWithCoder:(id)coder;	// 0x34d3b0f9
- (id)sortedArrayHint;	// 0x34d8694d
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context hint:(id)hint;	// 0x34d86a59
- (id)sortedArrayUsingSelector:(SEL)selector hint:(id)hint;	// 0x34d86c7d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x34d86d65
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x34d86e75
@end

@interface NSArray (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x34dad8a9
- (id)_countForKeyPath:(id)keyPath;	// 0x34dad919
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x34dadc0d
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x34dadc55
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x34dadc9d
- (id)_maxForKeyPath:(id)keyPath;	// 0x34dad951
- (id)_minForKeyPath:(id)keyPath;	// 0x34dad9d1
- (id)_sumForKeyPath:(id)keyPath;	// 0x34dad7c5
- (id)_unionOfArraysForKeyPath:(id)keyPath;	// 0x34dadae1
- (id)_unionOfObjectsForKeyPath:(id)keyPath;	// 0x34dada51
- (id)_unionOfSetsForKeyPath:(id)keyPath;	// 0x34dadb71
- (void)setValue:(id)value forKey:(id)key;	// 0x34dadd3d
- (id)valueForKey:(id)key;	// 0x34d6a1c1
- (id)valueForKeyPath:(id)keyPath;	// 0x34daddfd
@end

@interface NSArray (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34daf93d
- (id)_mutableOrderedSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34daf96d
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34daf99d
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34daf9cd
- (BOOL)_validateValue:(inout id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(out id *)error;	// 0x34dafa01
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34daf90d
@end

@interface NSArray (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x34db63c9
- (void)addObserver:(id)observer toObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x34db5da9
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x34db6469
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x34db6419
- (void)removeObserver:(id)observer fromObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath;	// 0x34db6201
- (void)removeObserver:(id)observer fromObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath context:(void *)context;	// 0x34db5f81
@end

@interface NSArray (NSArrayPathExtensions)
- (id)pathsMatchingExtensions:(id)extensions;	// 0x34dc87bd
- (id)stringsByAppendingPathComponent:(id)component;	// 0x34dc88a1
@end

@interface NSArray (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x34d4adb9
@end

@interface NSArray (NSPredicateSupport)
- (id)filteredArrayUsingPredicate:(id)predicate;	// 0x34d682b5
@end

@interface NSArray (NSArrayPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34e83381
@end

