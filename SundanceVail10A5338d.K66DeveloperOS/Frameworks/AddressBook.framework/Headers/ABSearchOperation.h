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
@property(assign, nonatomic) void *addressBook;	// G=0x31b4e555; S=0x31b4de69; @synthesize=_addressBook
@property(assign, nonatomic) void *context;	// G=0x31b4e5b9; S=0x31b4e5c9; @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// G=0x31b4e5a9; S=0x31b4dd65; @synthesize=_delegate
@property(assign, nonatomic) void *internalSearchAddressBook;	// G=0x31b4de9d; S=0x31b4def9; @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x31b4e565; S=0x31b4e575; @synthesize=_predicate
@property(copy, nonatomic) NSArray *prefetchProperties;	// G=0x31b4e585; S=0x31b4e599; @synthesize=_prefetchProperties
@property(copy, nonatomic) id progressBlock;	// G=0x31b4e5f9; S=0x31b4ddbd; @synthesize=_progressBlock
@property(assign, nonatomic) unsigned sortOrdering;	// G=0x31b4e5d9; S=0x31b4e5e9; @synthesize=_sortOrdering
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;	// 0x31b4e50d
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;	// 0x31b4e529
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x31b4e2e5
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x31b4e301
+ (id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void *)book;	// 0x31b4e45d
+ (id)personPredicateWithNameLike:(id)nameLike inGroup:(void *)group addressBook:(void *)book;	// 0x31b4e33d
+ (id)personPredicateWithNameLike:(id)nameLike inGroups:(id)groups sources:(id)sources addressBook:(void *)book;	// 0x31b4e49d
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source addressBook:(void *)book;	// 0x31b4e37d
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x31b4e3b9
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results4 addressBook:(void *)book;	// 0x31b4e3f9
+ (id)personPredicateWithNameOnly:(id)nameOnly inAccount:(id)account addressBook:(void *)book;	// 0x31b4e4d5
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x31b4e4b9
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void *)book;	// 0x31b4e4f1
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;	// 0x31b4e0b1
// declared property getter: - (void *)addressBook;	// 0x31b4e555
- (void)cancel;	// 0x31b4df2d
// declared property getter: - (void *)context;	// 0x31b4e5b9
- (void)dealloc;	// 0x31b4dcad
// declared property getter: - (id)delegate;	// 0x31b4e5a9
// declared property getter: - (void *)internalSearchAddressBook;	// 0x31b4de9d
- (BOOL)isConcurrent;	// 0x31b4dd95
- (void)main;	// 0x31b4df81
// declared property getter: - (id)predicate;	// 0x31b4e565
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x31b4e08d
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x31b4e1a9
// declared property getter: - (id)prefetchProperties;	// 0x31b4e585
// declared property getter: - (id)progressBlock;	// 0x31b4e5f9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x31b4de69
// declared property setter: - (void)setContext:(void *)context;	// 0x31b4e5c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31b4dd65
// declared property setter: - (void)setInternalSearchAddressBook:(void *)book;	// 0x31b4def9
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x31b4e575
// declared property setter: - (void)setPrefetchProperties:(id)properties;	// 0x31b4e599
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x31b4ddbd
// declared property setter: - (void)setSortOrdering:(unsigned)ordering;	// 0x31b4e5e9
// declared property getter: - (unsigned)sortOrdering;	// 0x31b4e5d9
@end
