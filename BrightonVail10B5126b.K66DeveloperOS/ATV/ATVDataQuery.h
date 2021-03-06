/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSMutableArray, NSString, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDataQuery : XXUnknownSuperclass {
	/*function-pointer*/ void *callbackFn;	// 4 = 0x4
	int _status;	// 8 = 0x8
	XXStruct_ny2fMB _range;	// 12 = 0xc
	int _queryType;	// 20 = 0x14
	int _groupingDirection;	// 24 = 0x18
	NSMutableDictionary *_metadataDict;	// 28 = 0x1c
	NSString *_groupingProperty;	// 32 = 0x20
	NSMutableArray *_queryFilters;	// 36 = 0x24
	id _callbackContext;	// 40 = 0x28
	NSMutableArray *_queryProperties;	// 44 = 0x2c
	NSArray *_results;	// 48 = 0x30
	NSError *_error;	// 52 = 0x34
}
@property(assign, nonatomic) id callbackContext;	// G=0xd03d9; S=0xd03e9; @synthesize=_callbackContext
@property(retain, nonatomic) NSError *error;	// G=0xd0439; S=0xd0449; @synthesize=_error
@property(assign, nonatomic) int groupingDirection;	// G=0xd0359; S=0xd0369; @synthesize=_groupingDirection
@property(retain, nonatomic) NSString *groupingProperty;	// G=0xd0399; S=0xd03a9; @synthesize=_groupingProperty
@property(retain, nonatomic) NSMutableDictionary *metadataDict;	// G=0xd0379; S=0xd0389; @synthesize=_metadataDict
@property(retain, nonatomic) NSMutableArray *queryFilters;	// G=0xd03b9; S=0xd03c9; @synthesize=_queryFilters
@property(retain, nonatomic) NSMutableArray *queryProperties;	// G=0xd03f9; S=0xd0409; @synthesize=_queryProperties
@property(assign, nonatomic) int queryType;	// G=0xd0339; S=0xd0349; @synthesize=_queryType
@property(assign, nonatomic) XXStruct_ny2fMB range;	// G=0xd030d; S=0xd0325; @synthesize=_range
@property(retain, nonatomic) NSArray *results;	// G=0xd0419; S=0xd0429; @synthesize=_results
@property(assign) int status;	// G=0xd02e1; S=0xd02f5; @synthesize=_status
- (id)initWithQueryType:(int)queryType;	// 0xcfead
- (void)addDataQueryFilter:(id)filter;	// 0xd01a9
- (void)addProperty:(id)property;	// 0xd0201
// declared property getter: - (id)callbackContext;	// 0xd03d9
- (void)cancelProcessing;	// 0xd0195
- (id)completionContext;	// 0xd0185
- (/*function-pointer*/ void *)completionFn;	// 0xd0175
- (id)dataQueryFilters;	// 0xd01d5
- (void)dealloc;	// 0xcff95
- (id)description;	// 0xd0051
// declared property getter: - (id)error;	// 0xd0439
// declared property getter: - (int)groupingDirection;	// 0xd0359
// declared property getter: - (id)groupingProperty;	// 0xd0399
// declared property getter: - (id)metadataDict;	// 0xd0379
- (id)objectForKey:(id)key;	// 0xd02c1
- (id)properties;	// 0xd0255
// declared property getter: - (id)queryFilters;	// 0xd03b9
// declared property getter: - (id)queryProperties;	// 0xd03f9
// declared property getter: - (int)queryType;	// 0xd0339
// declared property getter: - (XXStruct_ny2fMB)range;	// 0xd030d
// declared property getter: - (id)results;	// 0xd0419
// declared property setter: - (void)setCallbackContext:(id)context;	// 0xd03e9
- (void)setCompletionFn:(/*function-pointer*/ void *)fn context:(id)context;	// 0xd0151
// declared property setter: - (void)setError:(id)error;	// 0xd0449
// declared property setter: - (void)setGroupingDirection:(int)direction;	// 0xd0369
// declared property setter: - (void)setGroupingProperty:(id)property;	// 0xd03a9
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xd0389
- (void)setObject:(id)object forKey:(id)key;	// 0xd028d
// declared property setter: - (void)setQueryFilters:(id)filters;	// 0xd03c9
// declared property setter: - (void)setQueryProperties:(id)properties;	// 0xd0409
// declared property setter: - (void)setQueryType:(int)type;	// 0xd0349
// declared property setter: - (void)setRange:(XXStruct_ny2fMB)range;	// 0xd0325
// declared property setter: - (void)setResults:(id)results;	// 0xd0429
// declared property setter: - (void)setStatus:(int)status;	// 0xd02f5
// declared property getter: - (int)status;	// 0xd02e1
@end

