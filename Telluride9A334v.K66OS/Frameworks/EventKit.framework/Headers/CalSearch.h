/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol CalSearchDataSink;

@interface CalSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	CalFilter *_filter;	// 8 = 0x8
	CFStringRef _searchString;	// 12 = 0xc
	int _seed;	// 16 = 0x10
	id<CalSearchDataSink> _dataSink;	// 20 = 0x14
	opaque_pthread_mutex_t _dataSinkLock;	// 24 = 0x18
	bool _dateToStartShowingResultsSentToDataSink;	// 68 = 0x44
	bool _moreResultsAvailable;	// 69 = 0x45
	CFArrayRef _partialResults;	// 72 = 0x48
	CFArrayRef _partialCachedOccurrences;	// 76 = 0x4c
	CFArrayRef _partialCachedDays;	// 80 = 0x50
	CFArrayRef _partialCachedDaysIndexes;	// 84 = 0x54
	CFSetRef _matchedEventsSet;	// 88 = 0x58
	CFSetRef _matchedParticipantsSet;	// 92 = 0x5c
	CFSetRef _matchedLocationsSet;	// 96 = 0x60
	bool _stopLoadingResults;	// 100 = 0x64
	opaque_pthread_mutex_t _dataSourceDeallocLock;	// 104 = 0x68
	bool _implementsCancellationCallback;	// 148 = 0x94
}
@property(readonly, assign) bool moreResultsAvailable;	// G=0x327889a9; converted property
@property(readonly, assign) int seed;	// G=0x327889bd; converted property
- (id)initWithDatabase:(CalDatabase *)database filter:(CalFilter *)filter dataSink:(id)sink;	// 0x327885b5
- (void)_addMatchedEventIds:(CFArrayRef)ids;	// 0x32788bb1
- (void)_addMatchedLocationIds:(CFArrayRef)ids;	// 0x32788da9
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x32788bf9
- (CalEventIdsSearchContext *)_createEventIdsSearchContext;	// 0x32788ff5
- (CalLocationIdsSearchContext *)_createLocationIdsSearchContext;	// 0x32788d4d
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x32788cf1
- (CalEventOccurrenceSearchContext *)_createSearchContext;	// 0x3278922d
- (void)_deleteEventIdsSearchContext:(CalEventIdsSearchContext *)context;	// 0x32789065
- (void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext *)context;	// 0x32788da1
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x32788d45
- (void)_deleteSearchContext:(CalEventOccurrenceSearchContext *)context;	// 0x3278942d
- (void)_getApplicationSearchResults:(CalEventOccurrenceSearchContext *)results;	// 0x3278906d
- (void)_getAttendeesSearchResults:(CalEventIdsSearchContext *)results;	// 0x32788ea1
- (void)_getEventsSearchResults:(CalEventIdsSearchContext *)results;	// 0x32788f45
- (void)_getLocationSearchResults:(CalLocationIdsSearchContext *)results;	// 0x32788df1
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x32788c41
- (void)_startLoadingResults;	// 0x327889cd
- (void)dealloc;	// 0x3278879d
// converted property getter: - (bool)moreResultsAvailable;	// 0x327889a9
// converted property getter: - (int)seed;	// 0x327889bd
- (void)startSearching;	// 0x327888ed
- (void)stopSearching;	// 0x32788965
@end

