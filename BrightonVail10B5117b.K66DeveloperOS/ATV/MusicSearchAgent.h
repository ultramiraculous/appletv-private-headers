/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class BRAsyncTaskContext, ATVDataClient, PlayHandler, NSString, ATVDataQuery, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface MusicSearchAgent : ATVSearchAgent {
	NSString *_initialSearchTerm;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	ATVDataQuery *_artistQuery;	// 20 = 0x14
	ATVDataQuery *_albumQuery;	// 24 = 0x18
	ATVDataQuery *_playlistQuery;	// 28 = 0x1c
	ATVDataQuery *_songQuery;	// 32 = 0x20
	BRAsyncTaskContext *_taskContext;	// 36 = 0x24
	PlayHandler *_playHandler;	// 40 = 0x28
	BOOL _dataClientSearchInProgress;	// 44 = 0x2c
	NSArray *_fullProviderPriorityOrder;	// 48 = 0x30
	unsigned long _clientType;	// 52 = 0x34
	ATVDataClient *_dataClient;	// 56 = 0x38
	NSMutableDictionary *_inFlightQueryResultsByProviderName;	// 60 = 0x3c
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x1d2e05; S=0x1d2e15; @synthesize=_clientType
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x1d2e25; S=0x1d2e35; @synthesize=_dataClient
@property(assign, nonatomic) BOOL dataClientSearchInProgress;	// G=0x1d2dc1; S=0x1d2dd1; @synthesize=_dataClientSearchInProgress
@property(copy, nonatomic) NSArray *fullProviderPriorityOrder;	// G=0x1d2de1; S=0x1d2df5; @synthesize=_fullProviderPriorityOrder
@property(retain, nonatomic) NSMutableDictionary *inFlightQueryResultsByProviderName;	// G=0x1d2e5d; S=0x1d2e6d; @synthesize=_inFlightQueryResultsByProviderName
+ (id)defaultProviderPriorityOrder;	// 0x1d28f1
+ (void)initialize;	// 0x1d28b1
+ (id)searchAgent;	// 0x1d29bd
- (id)init;	// 0x1d29e9
- (void).cxx_destruct;	// 0x1d2e95
- (void)_addMediaTypeFilterForQuery:(id)query;	// 0x1d4ee5
- (void)_addSearchTermFilterForQuery:(id)query operator:(int)anOperator;	// 0x1d4e55
- (void)_albumDataClientSearch;	// 0x1d3791
- (void)_artistDataClientSearch;	// 0x1d34bd
- (void)_dataClientSearch;	// 0x1d30e9
- (id)_filterData:(id)data forSearchTerm:(id)searchTerm;	// 0x1d4a21
- (id)_filterExistingResultsForSearchTerm:(id)searchTerm;	// 0x1d451d
- (void)_playlistDataClientSearch;	// 0x1d3a4d
- (void)_postSearchResults:(id)results searchTerm:(id)term;	// 0x1d4c1d
- (id)_providerForSearchResults:(id)searchResults title:(id)title label:(id)label;	// 0x1d506d
- (void)_providerNamed:(id)named completedWithResults:(id)results;	// 0x1d42bd
- (void)_search;	// 0x1d2f7d
- (void)_searchFilteringComplete:(id)complete;	// 0x1d48cd
- (void)_searchForMultiCharFirstSearchTerm;	// 0x1d2ff9
- (void)_setAlbumQuery:(id)query;	// 0x1d4ffd
- (void)_setArtistQuery:(id)query;	// 0x1d4f8d
- (void)_setPlaylistQuery:(id)query;	// 0x1d4fc5
- (void)_setSongQuery:(id)query;	// 0x1d5035
- (void)_songDataClientSearch;	// 0x1d4001
- (void)_startSearchTask;	// 0x1d3009
- (long)cacheSize;	// 0x1d2dbd
// declared property getter: - (unsigned long)clientType;	// 0x1d2e05
- (id)contextMenuUtility;	// 0x1d2d15
// declared property getter: - (id)dataClient;	// 0x1d2e25
// declared property getter: - (BOOL)dataClientSearchInProgress;	// 0x1d2dc1
- (void)dealloc;	// 0x1d2afd
// declared property getter: - (id)fullProviderPriorityOrder;	// 0x1d2de1
- (BOOL)handlePlayForObject:(id)object;	// 0x1d2d31
// declared property getter: - (id)inFlightQueryResultsByProviderName;	// 0x1d2e5d
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x1d2bdd
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x1d2e15
// declared property setter: - (void)setDataClient:(id)client;	// 0x1d2e35
// declared property setter: - (void)setDataClientSearchInProgress:(BOOL)progress;	// 0x1d2dd1
// declared property setter: - (void)setFullProviderPriorityOrder:(id)order;	// 0x1d2df5
// declared property setter: - (void)setInFlightQueryResultsByProviderName:(id)flightQueryResultsByProviderName;	// 0x1d2e6d
- (BOOL)showRecentSearches;	// 0x1d2bd9
@end

