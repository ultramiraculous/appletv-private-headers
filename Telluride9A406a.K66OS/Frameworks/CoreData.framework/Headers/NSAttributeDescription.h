/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription {
@private
	Class _attributeValueClass;	// 48 = 0x30
	NSString *_valueTransformerName;	// 52 = 0x34
	unsigned _type;	// 56 = 0x38
	NSString *_attributeValueClassName;	// 60 = 0x3c
	attributeDescriptionFlags _attributeDescriptionFlags;	// 64 = 0x40
	id _defaultValue;	// 68 = 0x44
}
@property(assign) BOOL allowsExternalBinaryDataStorage;	// G=0x34759ce9; S=0x347ac139; converted property
@property(assign) unsigned attributeType;	// G=0x34762909; S=0x347ac665; converted property
@property(retain) NSString *attributeValueClassName;	// G=0x347ac059; S=0x347ac795; converted property
@property(retain) id defaultValue;	// G=0x347ac07d; S=0x347ac09d; converted property
@property(assign) BOOL storesBinaryDataExternally;	// G=0x34759cd1; S=0x347ac3f1; converted property
@property(retain) NSString *valueTransformerName;	// G=0x347ac08d; S=0x347ac0f1; converted property
+ (id)_classNameForType:(unsigned)type;	// 0x347ac401
+ (void)initialize;	// 0x3478bcd9
- (id)initWithCoder:(id)coder;	// 0x34755589
- (Class)_attributeValueClass;	// 0x347ad335
- (int)_canConvertPredicate:(id)predicate andWarning:(id)warning;	// 0x3478c6b1
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x347acc71
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)unoptimizedAttributeDescription;	// 0x347ac1e1
- (void)_createCachesAndOptimizeState;	// 0x34759731
- (id)_initWithName:(id)name type:(unsigned)type;	// 0x347acd81
- (id)_initWithName:(id)name type:(unsigned)type withClassName:(id)className;	// 0x347ac175
- (id)_initWithType:(unsigned)type;	// 0x347ac3dd
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x347ace4d
- (unsigned)_propertyType;	// 0x34759ccd
- (id)_rawValidationPredicates;	// 0x347acc19
- (id)_rawValidationWarnings;	// 0x347acc45
- (void)_versionHash:(char *)hash;	// 0x34769d31
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x347ad369
// converted property getter: - (BOOL)allowsExternalBinaryDataStorage;	// 0x34759ce9
// converted property getter: - (unsigned)attributeType;	// 0x34762909
// converted property getter: - (id)attributeValueClassName;	// 0x347ac059
- (id)copyWithZone:(NSZone *)zone;	// 0x347aca01
- (void)dealloc;	// 0x34786921
// converted property getter: - (id)defaultValue;	// 0x347ac07d
- (id)description;	// 0x347ac869
- (void)encodeWithCoder:(id)coder;	// 0x347acac5
- (BOOL)isEqual:(id)equal;	// 0x347ac90d
- (BOOL)isIndexed;	// 0x347ac5f9
// converted property setter: - (void)setAllowsExternalBinaryDataStorage:(BOOL)storage;	// 0x347ac139
// converted property setter: - (void)setAttributeType:(unsigned)type;	// 0x347ac665
// converted property setter: - (void)setAttributeValueClassName:(id)name;	// 0x347ac795
// converted property setter: - (void)setDefaultValue:(id)value;	// 0x347ac09d
// converted property setter: - (void)setStoresBinaryDataExternally:(BOOL)externally;	// 0x347ac3f1
// converted property setter: - (void)setValueTransformerName:(id)name;	// 0x347ac0f1
// converted property getter: - (BOOL)storesBinaryDataExternally;	// 0x34759cd1
- (id)validationPredicates;	// 0x3478c1b9
- (id)validationWarnings;	// 0x34759a2d
// converted property getter: - (id)valueTransformerName;	// 0x347ac08d
- (id)versionHash;	// 0x347ac5cd
@end

