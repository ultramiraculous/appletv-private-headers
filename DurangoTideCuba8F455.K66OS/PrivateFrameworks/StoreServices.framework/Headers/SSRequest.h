/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSLock, SSRequestGroup;
@protocol SSRequestDelegate;

@interface SSRequest : NSObject {
@private
	int _backgroundTaskIdentifier;	// 4 = 0x4
	BOOL _cancelAfterTaskExpiration;	// 8 = 0x8
	id<SSRequestDelegate> _delegate;	// 12 = 0xc
	SSRequestGroup *_group;	// 16 = 0x10
	NSString *_groupIdentifier;	// 20 = 0x14
	NSString *_identifier;	// 24 = 0x18
	NSLock *_lock;	// 28 = 0x1c
	int _state;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSRequestDelegate> delegate;	// G=0x32724ca1; S=0x32724cb1; @synthesize=_delegate
@property(assign, nonatomic) SSRequestGroup *requestGroup;	// G=0x32725101; S=0x327250c1; 
@property(retain, nonatomic) NSString *requestGroupIdentifier;	// G=0x32724c91; S=0x32725a91; @synthesize=_groupIdentifier
@property(retain, nonatomic) NSString *requestIdentifier;	// G=0x32724c81; S=0x32725ab9; @synthesize=_identifier
@property(readonly, assign) int requestState;	// G=0x32725199; 
@property(assign, nonatomic) BOOL shouldCancelAfterTaskExpiration;	// G=0x32724c61; S=0x32724c71; @synthesize=_cancelAfterTaskExpiration
- (id)init;	// 0x327252d1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327251dd
- (void)_beginBackgroundTask;	// 0x327254c1
- (void)_daemonExited:(id)exited;	// 0x32725969
- (void)_endBackgroundTask;	// 0x32725409
- (void)_failWithError:(id)error;	// 0x32724e01
- (void)_finish;	// 0x32724d45
- (id)_initSSRequest;	// 0x327252e5
- (void)_mainThreadDaemonExited:(id)exited;	// 0x3272562d
- (id)_newIdentifier;	// 0x32725a69
- (void)_requestFailedNotification:(id)notification;	// 0x32724fad
- (void)_requestFinishedNotification:(id)notification;	// 0x32724efd
- (void)_setRequestState:(int)state;	// 0x32724cc1
- (void)awakeFromDaemonInRequestGroup:(id)requestGroup;	// 0x32725151
- (void)cancel;	// 0x3272570d
- (id)copyPropertyListEncoding;	// 0x3272525d
- (void)dealloc;	// 0x3272535d
// declared property getter: - (id)delegate;	// 0x32724ca1
- (void)disconnect;	// 0x3272568d
- (void)handleBackgroundTaskExpiration;	// 0x32724c45
- (void)handleDaemonExit;	// 0x32724c49
- (id)handleFailureResponse:(id)response;	// 0x32725861
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x32724c4d
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x32725131
- (void)registerForDaemonNotifications;	// 0x327258a5
// declared property getter: - (id)requestGroup;	// 0x32725101
// declared property getter: - (id)requestGroupIdentifier;	// 0x32724c91
// declared property getter: - (id)requestIdentifier;	// 0x32724c81
// declared property getter: - (int)requestState;	// 0x32725199
- (void)sendDidFailWithError:(id)send;	// 0x32724c59
- (void)sendDidFinish;	// 0x32724c5d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32724cb1
// declared property setter: - (void)setRequestGroup:(id)group;	// 0x327250c1
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x32725a91
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x32725ab9
// declared property setter: - (void)setShouldCancelAfterTaskExpiration:(BOOL)cancelAfterTaskExpiration;	// 0x32724c71
// declared property getter: - (BOOL)shouldCancelAfterTaskExpiration;	// 0x32724c61
- (BOOL)start;	// 0x3272578d
- (void)unregisterForDaemonNotifications;	// 0x32725035
@end

