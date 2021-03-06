/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, MZKeyValueStoreSerializer, MZKeyValueStoreTransaction;
@protocol MZKeyValueStoreOperationDelegate;

@interface MZKeyValueStoreRequest : NSObject {
	NSString *_domain;	// 4 = 0x4
	MZKeyValueStoreTransaction *_transaction;	// 8 = 0x8
	NSString *_DSID;	// 12 = 0xc
	id<MZKeyValueStoreOperationDelegate> _delegate;	// 16 = 0x10
	BOOL _shouldAuthenticate;	// 20 = 0x14
	MZKeyValueStoreSerializer *_serializer;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *DSID;	// G=0x35f834f9; S=0x35f8350d; @synthesize=_DSID
@property(assign, nonatomic) id<MZKeyValueStoreOperationDelegate> delegate;	// G=0x35f8351d; S=0x35f8352d; @synthesize=_delegate
@property(copy, nonatomic) NSString *domain;	// G=0x35f834b5; S=0x35f834c9; @synthesize=_domain
@property(retain, nonatomic) MZKeyValueStoreSerializer *serializer;	// G=0x35f83445; S=0x35f8355d; @synthesize=_serializer
@property(assign, nonatomic) BOOL shouldAuthenticate;	// G=0x35f8353d; S=0x35f8354d; @synthesize=_shouldAuthenticate
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x35f834d9; S=0x35f834e9; @synthesize=_transaction
- (id)initWithTransaction:(id)transaction;	// 0x35f82d95
// declared property getter: - (id)DSID;	// 0x35f834f9
- (void)dealloc;	// 0x35f82de9
// declared property getter: - (id)delegate;	// 0x35f8351d
// declared property getter: - (id)domain;	// 0x35f834b5
- (void)postData:(id)data;	// 0x35f82edd
- (void)scheduleStoreURLOperation:(id)operation data:(id)data;	// 0x35f83371
// declared property getter: - (id)serializer;	// 0x35f83445
// declared property setter: - (void)setDSID:(id)dsid;	// 0x35f8350d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35f8352d
// declared property setter: - (void)setDomain:(id)domain;	// 0x35f834c9
// declared property setter: - (void)setSerializer:(id)serializer;	// 0x35f8355d
// declared property setter: - (void)setShouldAuthenticate:(BOOL)authenticate;	// 0x35f8354d
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x35f834e9
// declared property getter: - (BOOL)shouldAuthenticate;	// 0x35f8353d
- (void)start;	// 0x35f82e9d
// declared property getter: - (id)transaction;	// 0x35f834d9
@end

