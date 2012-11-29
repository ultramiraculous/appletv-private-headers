/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSEntityDescription, NSData, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
	NSString *_versionHashModifier;	// 4 = 0x4
	id _underlyingProperty;	// 8 = 0x8
	NSData *_versionHash;	// 12 = 0xc
	NSEntityDescription *_entity;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSArray *_validationPredicates;	// 24 = 0x18
	NSArray *_validationWarnings;	// 28 = 0x1c
	propertyDescriptionFlags _propertyDescriptionFlags;	// 32 = 0x20
	void *_extraIvars;	// 36 = 0x24
	NSMutableDictionary *_userInfo;	// 40 = 0x28
	long _entitysReferenceIDForProperty;	// 44 = 0x2c
}
@property(retain) id elementID;	// G=0x335147a9; S=0x33514799; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x334a24ad; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x33513691; S=0x33472f7d; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x33476009; S=0x33514831; converted property
@property(retain) NSString *name;	// G=0x33472bd1; S=0x33513705; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x33482779; S=0x335136a5; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x3348278d; S=0x33513dd1; converted property
@property(retain) id renamingIdentifier;	// G=0x33513b91; S=0x33472b35; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x335147b9; S=0x335147d1; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x33476025; S=0x33514855; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x33514809; S=0x33514821; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x335147e1; S=0x335147f9; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x33476071; S=0x335136d5; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x33513a0d; S=0x33513925; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x334a2919; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x33475fe5; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x33513a31; converted property
@property(retain) NSString *versionHashModifier;	// G=0x33513b2d; S=0x33513b3d; converted property
+ (void)initialize;	// 0x334a1fad
- (id)init;	// 0x33512e69
- (id)initWithCoder:(id)coder;	// 0x334727d9
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots;	// 0x33514555
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x33513ed1
- (void)_createCachesAndOptimizeState;	// 0x33475dc5
- (long)_entitysReferenceID;	// 0x33492f61
- (NSExtraPropertyIVars *)_extraIVars;	// 0x334a2c4d
- (id)_initWithName:(id)name;	// 0x33513cc5
- (void)_initializeExtraIVars;	// 0x334a2c81
- (BOOL)_isEditable;	// 0x334a247d
- (BOOL)_isOrdered;	// 0x334a2d21
- (BOOL)_isRelationship;	// 0x33513cbd
- (BOOL)_isToManyRelationship;	// 0x33513cc1
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x33513e45
- (unsigned)_propertyType;	// 0x33513cb9
- (id)_rawValidationPredicates;	// 0x33513e25
- (id)_rawValidationWarnings;	// 0x33513e35
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x334a2c9d
- (void)_restoreValidation;	// 0x33513f59
- (void)_setEntity:(id)entity;	// 0x33513da5
- (void)_setEntitysReferenceID:(long)anId;	// 0x33476085
- (void)_setOrdered:(BOOL)ordered;	// 0x33513e01
- (BOOL)_skipValidation;	// 0x33513f71
- (void)_stripForMigration;	// 0x33513f41
- (void)_throwIfNotEditable;	// 0x334a2435
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x33513bbd
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x33513f85
- (id)copyWithZone:(NSZone *)zone;	// 0x33513195
- (void)dealloc;	// 0x3349d931
- (id)description;	// 0x3351355d
// converted property getter: - (id)elementID;	// 0x335147a9
- (void)encodeWithCoder:(id)coder;	// 0x33512e7d
// converted property getter: - (id)entity;	// 0x334a24ad
- (unsigned)hash;	// 0x33513335
- (BOOL)isEqual:(id)equal;	// 0x3351335d
// converted property getter: - (BOOL)isIndexed;	// 0x33513691
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x33476009
// converted property getter: - (BOOL)isOptional;	// 0x33482779
// converted property getter: - (BOOL)isReadOnly;	// 0x3348278d
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x335147b9
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x33476025
// converted property getter: - (BOOL)isStoredInTruth;	// 0x33514809
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x335147e1
// converted property getter: - (BOOL)isTransient;	// 0x33476071
// converted property getter: - (id)name;	// 0x33472bd1
// converted property getter: - (id)renamingIdentifier;	// 0x33513b91
// converted property setter: - (void)setElementID:(id)anId;	// 0x33514799
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x33472f7d
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x33514831
// converted property setter: - (void)setName:(id)name;	// 0x33513705
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x335136a5
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x33513dd1
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x33472b35
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x335147d1
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x33514855
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x33514821
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x335147f9
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x335136d5
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33513925
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x33513825
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x33513b3d
// converted property getter: - (id)userInfo;	// 0x33513a0d
// converted property getter: - (id)validationPredicates;	// 0x334a2919
// converted property getter: - (id)validationWarnings;	// 0x33475fe5
// converted property getter: - (id)versionHash;	// 0x33513a31
// converted property getter: - (id)versionHashModifier;	// 0x33513b2d
@end
