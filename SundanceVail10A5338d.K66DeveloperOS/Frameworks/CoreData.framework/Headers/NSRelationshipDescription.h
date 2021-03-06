/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSEntityDescription *_destinationEntity;	// 56 = 0x38
	NSString *_lazyDestinationEntityName;	// 60 = 0x3c
	NSRelationshipDescription *_inverseRelationship;	// 64 = 0x40
	NSString *_lazyInverseRelationshipName;	// 68 = 0x44
	unsigned long _maxCount;	// 72 = 0x48
	unsigned long _minCount;	// 76 = 0x4c
	unsigned _deleteRule;	// 80 = 0x50
}
@property(assign) unsigned deleteRule;	// G=0x36612c71; S=0x36612d39; converted property
@property(retain) NSEntityDescription *destinationEntity;	// G=0x3659ff79; S=0x36612ced; converted property
@property(retain) NSRelationshipDescription *inverseRelationship;	// G=0x3659f271; S=0x3659f2c9; converted property
@property(assign) unsigned maxCount;	// G=0x3659fc71; S=0x36612c91; converted property
@property(assign) unsigned minCount;	// G=0x36612c81; S=0x36612cbd; converted property
@property(assign, getter=isOrdered) BOOL ordered;	// G=0x3659fbe9; S=0x36612d75; converted property
+ (void)initialize;	// 0x3659ef45
- (id)init;	// 0x36612675
- (id)initWithCoder:(id)coder;	// 0x3659ef61
- (void)_createCachesAndOptimizeState;	// 0x3659f1d5
- (id)_initWithName:(id)name;	// 0x36612d85
- (BOOL)_isRelationship;	// 0x36613051
- (BOOL)_isToManyRelationship;	// 0x36613055
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x366131bd
- (unsigned)_propertyType;	// 0x3659fbcd
- (void)_setLazyDestinationEntityName:(id)name;	// 0x3661306d
- (void)_updateInverse:(id)inverse;	// 0x366139ad
- (BOOL)_validateValuesAreOfDestinationEntity:(id)destinationEntity source:(id)source;	// 0x366130b1
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x3661302d
- (void)_versionHash:(char *)hash inStyle:(unsigned)style proxyContext:(id)context;	// 0x36612de1
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x36613acd
- (id)copyWithZone:(NSZone *)zone;	// 0x366128d1
- (void)dealloc;	// 0x36612689
// converted property getter: - (unsigned)deleteRule;	// 0x36612c71
- (id)description;	// 0x36612b71
// converted property getter: - (id)destinationEntity;	// 0x3659ff79
- (void)encodeWithCoder:(id)coder;	// 0x36612721
// converted property getter: - (id)inverseRelationship;	// 0x3659f271
- (BOOL)isEqual:(id)equal;	// 0x366129f9
- (BOOL)isIndexed;	// 0x36612ce9
// converted property getter: - (BOOL)isOrdered;	// 0x3659fbe9
- (BOOL)isToMany;	// 0x3659fbd1
// converted property getter: - (unsigned)maxCount;	// 0x3659fc71
// converted property getter: - (unsigned)minCount;	// 0x36612c81
// converted property setter: - (void)setDeleteRule:(unsigned)rule;	// 0x36612d39
// converted property setter: - (void)setDestinationEntity:(id)entity;	// 0x36612ced
// converted property setter: - (void)setInverseRelationship:(id)relationship;	// 0x3659f2c9
// converted property setter: - (void)setMaxCount:(unsigned)count;	// 0x36612c91
// converted property setter: - (void)setMinCount:(unsigned)count;	// 0x36612cbd
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x36612d75
- (id)versionHash;	// 0x36612d49
@end

