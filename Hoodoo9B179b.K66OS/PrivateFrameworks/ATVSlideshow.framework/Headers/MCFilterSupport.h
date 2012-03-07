/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */


@class NSSet, NSArray;

@protocol MCFilterSupport
@property(readonly, assign, nonatomic) unsigned countOfFilters;
@property(readonly, assign) NSSet *filters;
@property(readonly, assign) NSArray *orderedFilters;
- (void)initFiltersWithImprints:(id)imprints;
- (id)addFilterWithFilterID:(id)filterID;
// declared property getter: - (unsigned)countOfFilters;
- (void)demolishFilters;
- (id)filterAtIndex:(unsigned)index;
// declared property getter: - (id)filters;
- (id)imprintsForFilters;
- (id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;
- (void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;
- (void)observeFilter:(id)filter;
// declared property getter: - (id)orderedFilters;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)indices;
- (void)unobserveFilter:(id)filter;
@end

