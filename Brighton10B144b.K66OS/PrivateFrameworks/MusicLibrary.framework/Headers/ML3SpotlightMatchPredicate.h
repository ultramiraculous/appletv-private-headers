/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"

@class MLSQLiteStatement, ML3MusicLibrary, NSArray;

@interface ML3SpotlightMatchPredicate : ML3Predicate {
	ML3MusicLibrary *_library;	// 4 = 0x4
	MLSQLiteStatement *_lookupStatement;	// 8 = 0x8
	sqlite3 *_db;	// 12 = 0xc
	unordered_map<long long, NSString *, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>, false> _matchingNames;	// 16 = 0x10
	unordered_map<long long, NSString *, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>, false> _cachedNames;	// 48 = 0x30
	NSArray *_searchProperties;	// 80 = 0x50
}
@property(retain, nonatomic) NSArray *searchProperties;	// G=0x34712b19; S=0x34712b29; @synthesize=_searchProperties
- (id)initWithLibrary:(id)library;	// 0x346b0f4d
- (id).cxx_construct;	// 0x346b0b05
- (void).cxx_destruct;	// 0x34712b39
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346b1531
- (void)dealloc;	// 0x34712a89
// declared property getter: - (id)searchProperties;	// 0x34712b19
// declared property setter: - (void)setSearchProperties:(id)properties;	// 0x34712b29
@end

