/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject {
@private
	NSMutableDictionary *_entriesByURL;	// 4 = 0x4
	HashMap<long long int,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *_entriesByDate;	// 8 = 0x8
	NSMutableArray *_orderedLastVisitedDays;	// 12 = 0xc
	BOOL itemLimitSet;	// 16 = 0x10
	int itemLimit;	// 20 = 0x14
	BOOL ageInDaysLimitSet;	// 24 = 0x18
	int ageInDaysLimit;	// 28 = 0x1c
}
@property(assign) int historyAgeInDaysLimit;	// G=0x345183ed; S=0x34564619; converted property
@property(assign) int historyItemLimit;	// G=0x34518331; S=0x3456463d; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x3453311d; converted property
+ (void)initialize;	// 0x3450d341
- (id)init;	// 0x3450d3cd
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x34519869
- (void)addItemToDateCaches:(id)dateCaches;	// 0x345199b1
- (void)addItems:(id)items;	// 0x34564725
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x34525599
- (id)ageLimitDate;	// 0x3451838d
- (id)allItems;	// 0x345647bd
- (BOOL)containsURL:(id)url;	// 0x34564781
- (id)data;	// 0x34529d3d
- (void)dealloc;	// 0x34564bfd
- (void)finalize;	// 0x34564b7d
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x34519bd9
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x345183ed
// converted property getter: - (int)historyItemLimit;	// 0x34518331
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x34519d9d
- (id)itemForURL:(id)url;	// 0x34524619
- (id)itemForURLString:(id)urlstring;	// 0x3452464d
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x34517f31
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x34517f61
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x3453308d
// converted property getter: - (id)orderedLastVisitedDays;	// 0x3453311d
- (BOOL)removeAllItems;	// 0x34564a5d
- (BOOL)removeItem:(id)item;	// 0x34564661
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x34564b05
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x345223a5
- (BOOL)removeItems:(id)items;	// 0x345646bd
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x345647dd
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x34564619
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3456463d
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x34522275
@end
