/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSArray.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"

@class MPMediaQueryCriteria, MPMediaLibrary, NSMutableArray, MPMediaQuerySectionInfo;

@interface MPMediaEntityStreamArray : NSArray <NSCopying> {
	Class _entityClass;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	MPMediaQueryCriteria *_queryCriteria;	// 12 = 0xc
	MPMediaLibrary *_library;	// 16 = 0x10
	int _containedMediaTypes;	// 20 = 0x14
	NSMutableArray *_entities;	// 24 = 0x18
	CFArrayRef _entitiesSemaphores;	// 28 = 0x1c
	unsigned _entitiesSemaphoreIndex;	// 32 = 0x20
	unsigned _count;	// 36 = 0x24
	MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
	CFArrayRef _countAndSectionInfoSemaphores;	// 44 = 0x2c
	unsigned _hasCountAndSectionInfo : 1;	// 48 = 0x30
	CFArrayRef _isEmptySemaphores;	// 52 = 0x34
	int _retainCount;	// 56 = 0x38
	unsigned _isEmpty : 1;	// 60 = 0x3c
	unsigned _hasIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingEntities : 1;	// 60 = 0x3c
	unsigned _isImmediate : 1;	// 60 = 0x3c
}
@property(assign, nonatomic) int containedMediaTypes;	// G=0x309b99c1; S=0x309b99d1; @synthesize=_containedMediaTypes
@property(readonly, assign) unsigned count;	// G=0x309b8769; converted property
@property(readonly, assign, nonatomic) MPMediaLibrary *library;	// G=0x309b8ea1; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x309b99e1; @synthesize=_queryCriteria
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *sectionInfo;	// G=0x309b8911; 
- (id)init;	// 0x309b816d
- (id)initWithCoder:(id)coder;	// 0x309b8545
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;	// 0x309b81f1
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library immediate:(BOOL)immediate;	// 0x309b8215
- (BOOL)MPIsEmpty;	// 0x309b85b9
- (void)_commonInitMPMediaEntityStreamArray;	// 0x309b81b9
- (void)_onQueueAddObject:(id)object;	// 0x309b9185
- (void)_onQueueStartLoadingEntities;	// 0x309b9811
- (void)_onQueueStartLoadingIsEmpty;	// 0x309b953d
- (void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x309b93b9
- (void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x309b9231
// declared property getter: - (int)containedMediaTypes;	// 0x309b99c1
- (id)copyWithZone:(NSZone *)zone;	// 0x309b85a9
// converted property getter: - (unsigned)count;	// 0x309b8769
- (void)dealloc;	// 0x309b8465
// declared property getter: - (id)library;	// 0x309b8ea1
- (id)objectAtIndex:(unsigned)index;	// 0x309b8b7d
- (id)propertiesToFetch;	// 0x309b8eb1
// declared property getter: - (id)queryCriteria;	// 0x309b99e1
// declared property getter: - (id)sectionInfo;	// 0x309b8911
// declared property setter: - (void)setContainedMediaTypes:(int)types;	// 0x309b99d1
- (void)setCount:(unsigned)count sectionInfo:(id)info;	// 0x309b904d
- (void)setIsEmpty:(BOOL)empty;	// 0x309b8f29
@end

