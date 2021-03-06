/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSOperation.h> // Unknown library

@class NSThread, NSArray, NSPredicate;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
	void *_addressBook;	// 12 = 0xc
	NSPredicate *_predicate;	// 16 = 0x10
	NSArray *_prefetchProperties;	// 20 = 0x14
	unsigned _sortOrdering;	// 24 = 0x18
	void *_internalSearchAddressBook;	// 28 = 0x1c
	id<ABSearchOperationDelegate> _delegate;	// 32 = 0x20
	id _progressBlock;	// 36 = 0x24
	NSThread *_progressBlockThread;	// 40 = 0x28
	void *_context;	// 44 = 0x2c
}
@property(assign, nonatomic) void *addressBook;	// G=0x329be77d; S=0x329be091; @synthesize=_addressBook
@property(assign, nonatomic) void *context;	// G=0x329be7e1; S=0x329be7f1; @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// G=0x329be7d1; S=0x329bdf8d; @synthesize=_delegate
@property(assign, nonatomic) void *internalSearchAddressBook;	// G=0x329be0c5; S=0x329be121; @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x329be78d; S=0x329be79d; @synthesize=_predicate
@property(copy, nonatomic) NSArray *prefetchProperties;	// G=0x329be7ad; S=0x329be7c1; @synthesize=_prefetchProperties
@property(copy, nonatomic) id progressBlock;	// G=0x329be821; S=0x329bdfe5; @synthesize=_progressBlock
@property(assign, nonatomic) unsigned sortOrdering;	// G=0x329be801; S=0x329be811; @synthesize=_sortOrdering
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;	// 0x329be735
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;	// 0x329be751
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x329be50d
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x329be529
+ (id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void *)book;	// 0x329be685
+ (id)personPredicateWithNameLike:(id)nameLike inGroup:(void *)group addressBook:(void *)book;	// 0x329be565
+ (id)personPredicateWithNameLike:(id)nameLike inGroups:(id)groups sources:(id)sources addressBook:(void *)book;	// 0x329be6c5
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source addressBook:(void *)book;	// 0x329be5a5
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x329be5e1
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results4 addressBook:(void *)book;	// 0x329be621
+ (id)personPredicateWithNameOnly:(id)nameOnly inAccount:(id)account addressBook:(void *)book;	// 0x329be6fd
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x329be6e1
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void *)book;	// 0x329be719
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;	// 0x329be2d9
// declared property getter: - (void *)addressBook;	// 0x329be77d
- (void)cancel;	// 0x329be155
// declared property getter: - (void *)context;	// 0x329be7e1
- (void)dealloc;	// 0x329bded5
// declared property getter: - (id)delegate;	// 0x329be7d1
// declared property getter: - (void *)internalSearchAddressBook;	// 0x329be0c5
- (BOOL)isConcurrent;	// 0x329bdfbd
- (void)main;	// 0x329be1a9
// declared property getter: - (id)predicate;	// 0x329be78d
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x329be2b5
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x329be3d1
// declared property getter: - (id)prefetchProperties;	// 0x329be7ad
// declared property getter: - (id)progressBlock;	// 0x329be821
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x329be091
// declared property setter: - (void)setContext:(void *)context;	// 0x329be7f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x329bdf8d
// declared property setter: - (void)setInternalSearchAddressBook:(void *)book;	// 0x329be121
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x329be79d
// declared property setter: - (void)setPrefetchProperties:(id)properties;	// 0x329be7c1
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x329bdfe5
// declared property setter: - (void)setSortOrdering:(unsigned)ordering;	// 0x329be811
// declared property getter: - (unsigned)sortOrdering;	// 0x329be801
@end

