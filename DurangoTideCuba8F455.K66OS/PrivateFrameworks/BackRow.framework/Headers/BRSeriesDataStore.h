/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRDataStore.h"

@class NSSet, NSString;

@interface BRSeriesDataStore : BRDataStore {
@private
	NSSet *_seriesMediaTypes;	// 40 = 0x28
	NSString *_seriesName;	// 44 = 0x2c
	int _seriesDataStoreType;	// 48 = 0x30
}
+ (id)byDateDataStoreWithTypes:(id)types;	// 0x32fc2f01
+ (id)byMostRecentDataStoreWithTypes:(id)types;	// 0x32fc2e1d
+ (id)byShowDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x32fc2eb5
+ (id)byUnwatchedByMostRecentDataStoreWithTypes:(id)types;	// 0x32fc2dd1
+ (id)byUnwatchedDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x32fc2e69
- (id)_aggregateSeries:(id)series aggregate:(id)aggregate sortByDate:(BOOL)date;	// 0x32fc2645
- (id)_filteredSeriesFrom:(id)from;	// 0x32fc228d
- (id)_groupEpisodesIntoSeries:(id)series filterOutWatched:(BOOL)watched sortByDate:(BOOL)date;	// 0x32fc2105
- (id)_groupSeriesIntoSeasons:(id)seasons filterOutWatched:(BOOL)watched;	// 0x32fc1f95
- (void)_handleObjectModifiedForMostRecentUnwatchedDataStore:(id)mostRecentUnwatchedDataStore;	// 0x32fc1d65
- (id)_initWithSeriesTypes:(id)seriesTypes seriesName:(id)name dataStoreType:(int)type;	// 0x32fc2f49
- (id)_labelForSeason:(int)season;	// 0x32fc248d
- (id)_mediaTypePredicate;	// 0x32fc2531
- (id)_primaryCollectionTitlesFromData:(id)data;	// 0x32fc1e95
- (id)_seriesPredicate;	// 0x32fc24e1
- (id)_sortResultsByDate:(id)date;	// 0x32fc23d5
- (void)addObject:(id)object;	// 0x32fc2c99
- (void)dealloc;	// 0x32fc2fc5
- (id)hashForData:(id)data;	// 0x32fc27e1
- (id)loadData;	// 0x32fc28c9
- (void)objectModified:(id)modified;	// 0x32fc2bfd
- (void)removeObject:(id)object;	// 0x32fc2be9
- (BOOL)storeAppliesToObject:(id)object;	// 0x32fc2d0d
@end
