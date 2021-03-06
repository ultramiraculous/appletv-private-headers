/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, CPDistributedMessagingCenter;
@protocol MSSearchDelegate;

@interface MSSearch : NSObject {
@private
	NSLock *_lock;	// 4 = 0x4
	CPDistributedMessagingCenter *_server;	// 8 = 0x8
	CPDistributedMessagingCenter *_search;	// 12 = 0xc
	NSObject<MSSearchDelegate> *_delegate;	// 16 = 0x10
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x322f8ce1; S=0x322f8c91; 
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x322f8d65
- (id)init;	// 0x322f9231
- (id)_activeSearch;	// 0x322f8ae1
- (id)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error;	// 0x322f9409
- (id)_copyServer;	// 0x322f8c3d
- (id)_didFindMessageData:(id)data userInfo:(id)info;	// 0x322f83e1
- (id)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server;	// 0x322f87bd
- (id)_initWithDelegate:(id)delegate;	// 0x322f8d41
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x322f85dd
- (void)_setActiveSearch:(id)search;	// 0x322f89d5
- (void)_setServer:(id)server;	// 0x322f8b41
- (void)cancel;	// 0x322f87a5
- (void)dealloc;	// 0x322f91b9
// declared property getter: - (id)delegate;	// 0x322f8ce1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322f8c91
@end

