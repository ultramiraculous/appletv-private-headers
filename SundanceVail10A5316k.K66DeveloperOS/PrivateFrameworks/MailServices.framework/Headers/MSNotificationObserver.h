/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSNotificationDelegate;

@interface MSNotificationObserver : MSMailDefaultService {
@private
	NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
	NSObject<MSNotificationDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSNotificationDelegate> *delegate;	// G=0x3444d489; S=0x3444cb99; @synthesize=_delegate
+ (id)registerNotificationObserver:(id)observer shouldLaunchMobileMail:(BOOL)mail queue:(id)queue;	// 0x3444ca41
- (void)_delegateDidShutdownWithError:(id)_delegate;	// 0x3444cbf1
- (void)_didReceiveNotificationData:(id)data;	// 0x3444d271
- (id)_initWithDelegate:(id)delegate queue:(id)queue;	// 0x3444cad5
- (void)_registerObserverClient;	// 0x3444d0bd
- (id)copyActiveAccounts;	// 0x3444cee5
- (void)dealloc;	// 0x3444cb45
// declared property getter: - (id)delegate;	// 0x3444d489
- (id)messagesForAccountIDs:(id)accountIDs count:(unsigned)count cutOffDates:(id)dates;	// 0x3444cc55
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x3444d1e5
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x3444d239
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3444cb99
@end
