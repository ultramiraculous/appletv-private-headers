/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVCloudQueryHandler.h"

@class ATVDataClient, ML3MusicLibrary;

@protocol ATVCloudQueryHandler
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;
+ (id)mlPropertyForATVProperty:(id)atvproperty;
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;
- (void)handleQuery:(id)query withContext:(void *)context;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudQueryHandler : XXUnknownSuperclass <ATVCloudQueryHandler> {
	ML3MusicLibrary *mlLibrary;	// 4 = 0x4
	ATVDataClient *cloudDataClient;	// 8 = 0x8
}
@property(retain, nonatomic) ATVDataClient *cloudDataClient;	// G=0xdf285; S=0xdf295; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary;	// G=0xdf265; S=0xdf275; @synthesize
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xdf25d
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xdf261
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xdf259
- (id)initWithLibrary:(id)library cloudDataClient:(id)client;	// 0xde6c9
// declared property getter: - (id)cloudDataClient;	// 0xdf285
- (void)dealloc;	// 0xde729
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xdf255
- (int)mlComparisonForATVOperator:(int)atvoperator;	// 0xdf1c9
// declared property getter: - (id)mlLibrary;	// 0xdf265
- (unsigned long)mlMediaTypeForATVMediaType:(id)atvmediaType;	// 0xdf1f9
- (id)mlPropertiesForQuery:(id)query;	// 0xdf099
- (id)predicateForCompoundFilter:(id)compoundFilter;	// 0xdeec1
- (id)predicateForFilter:(id)filter;	// 0xde8ed
- (id)predicateFromATVFilters:(id)atvfilters;	// 0xde781
- (id)predicateFromPredicates:(id)predicates withOperator:(int)anOperator;	// 0xdf021
// declared property setter: - (void)setCloudDataClient:(id)client;	// 0xdf295
// declared property setter: - (void)setMlLibrary:(id)library;	// 0xdf275
@end

