/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
	NSSQLRelationship *_relationship;	// 8 = 0x8
	NSString *_sourceAlias;	// 12 = 0xc
	NSString *_destinationAlias;	// 16 = 0x10
	NSString *_correlationAlias;	// 20 = 0x14
	unsigned _type;	// 24 = 0x18
	BOOL _direct;	// 28 = 0x1c
}
@property(readonly, retain) NSString *correlationAlias;	// G=0x35ca01b1; converted property
@property(retain) NSString *destinationAlias;	// G=0x35ca015d; S=0x35ca016d; converted property
@property(assign, getter=isDirect) BOOL direct;	// G=0x35ca0099; S=0x35ca00a9; converted property
@property(readonly, retain) NSSQLRelationship *relationship;	// G=0x35ca00b9; converted property
@property(retain) NSString *sourceAlias;	// G=0x35ca0109; S=0x35ca0119; converted property
+ (id)createJoinIntermediatesForKeypath:(id)keypath startEntity:(id)entity startAlias:(id)alias forScope:(id)scope inFetchIntermediate:(id)fetchIntermediate inContext:(id)context;	// 0x35bf1159
+ (id)createManyToManyJoinIntermediateForProperty:(id)property direct:(BOOL)direct lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x35c9fdc5
+ (id)createToManyJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x35c9fd25
+ (id)createToOneJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x35c9fc85
- (id)initForRelationship:(id)relationship sourceAlias:(id)alias destinationAlias:(id)alias3 correlationAlias:(id)alias4 direct:(BOOL)direct inScope:(id)scope;	// 0x35c9fe81
- (id)_generateManyToManySQLStringInContext:(id)context;	// 0x35ca05dd
- (id)_generateToManySQLStringInContext:(id)context;	// 0x35ca03cd
- (id)_generateToOneSQLStringInContext:(id)context;	// 0x35ca01e1
// converted property getter: - (id)correlationAlias;	// 0x35ca01b1
- (void)dealloc;	// 0x35c9ff39
- (id)description;	// 0x35c9ffd9
// converted property getter: - (id)destinationAlias;	// 0x35ca015d
- (id)destinationEntity;	// 0x35ca00e9
- (id)generateSQLStringInContext:(id)context;	// 0x35ca0915
// converted property getter: - (BOOL)isDirect;	// 0x35ca0099
- (BOOL)joinType;	// 0x35ca01c1
// converted property getter: - (id)relationship;	// 0x35ca00b9
// converted property setter: - (void)setDestinationAlias:(id)alias;	// 0x35ca016d
// converted property setter: - (void)setDirect:(BOOL)direct;	// 0x35ca00a9
- (void)setJoinType:(unsigned)type;	// 0x35ca01d1
// converted property setter: - (void)setSourceAlias:(id)alias;	// 0x35ca0119
// converted property getter: - (id)sourceAlias;	// 0x35ca0109
- (id)sourceEntity;	// 0x35ca00c9
@end

