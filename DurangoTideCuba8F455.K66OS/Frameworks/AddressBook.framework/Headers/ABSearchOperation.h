/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSOperation.h> // Unknown library

@class NSPredicate, NSArray;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
@private
	void *_addressBook;	// 12 = 0xc
	NSPredicate *_predicate;	// 16 = 0x10
	NSArray *_prefetchProperties;	// 20 = 0x14
	unsigned _sortOrdering;	// 24 = 0x18
	void *_internalSearchAddressBook;	// 28 = 0x1c
	id<ABSearchOperationDelegate> _delegate;	// 32 = 0x20
	void *_context;	// 36 = 0x24
}
@property(assign, nonatomic) void *addressBook;	// G=0x34830de9; S=0x348310f5; @synthesize=_addressBook
@property(assign, nonatomic) void *context;	// G=0x34830d89; S=0x34830d99; @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// G=0x34830da9; S=0x34830db9; @synthesize=_delegate
@property(assign, nonatomic) void *internalSearchAddressBook;	// G=0x34831135; S=0x348310b5; @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x34830dd9; S=0x348312dd; @synthesize=_predicate
@property(copy, nonatomic) NSArray *prefetchProperties;	// G=0x34830dc9; S=0x34831305; @synthesize=_prefetchProperties
@property(assign, nonatomic) unsigned sortOrdering;	// G=0x34830d69; S=0x34830d79; @synthesize=_sortOrdering
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;	// 0x34830e21
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;	// 0x34830df9
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x34830f1d
+ (id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void *)book;	// 0x34830e6d
+ (id)personPredicateWithNameLike:(id)nameLike inGroup:(void *)group addressBook:(void *)book;	// 0x34830ee1
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source addressBook:(void *)book;	// 0x34830ead
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void *)book;	// 0x34830e41
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;	// 0x348311d1
// declared property getter: - (void *)addressBook;	// 0x34830de9
- (void)cancel;	// 0x34831185
// declared property getter: - (void *)context;	// 0x34830d89
- (void)dealloc;	// 0x34831035
// declared property getter: - (id)delegate;	// 0x34830da9
// declared property getter: - (void *)internalSearchAddressBook;	// 0x34831135
- (void)main;	// 0x34830f75
// declared property getter: - (id)predicate;	// 0x34830dd9
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x34830f55
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x34831279
// declared property getter: - (id)prefetchProperties;	// 0x34830dc9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x348310f5
// declared property setter: - (void)setContext:(void *)context;	// 0x34830d99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34830db9
// declared property setter: - (void)setInternalSearchAddressBook:(void *)book;	// 0x348310b5
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x348312dd
// declared property setter: - (void)setPrefetchProperties:(id)properties;	// 0x34831305
// declared property setter: - (void)setSortOrdering:(unsigned)ordering;	// 0x34830d79
// declared property getter: - (unsigned)sortOrdering;	// 0x34830d69
@end
