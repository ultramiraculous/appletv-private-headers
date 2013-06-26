/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "SKPaymentTransactionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, SKPaymentQueue, NSMutableSet;

__attribute__((visibility("hidden")))
@interface JSSKPaymentQueueTransactionObserver : XXUnknownSuperclass <SKPaymentTransactionObserver> {
	ATVJSContext *_atvContext;	// 4 = 0x4
	NSMutableSet *_jsObservers;	// 8 = 0x8
	SKPaymentQueue *_paymentQueue;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) SKPaymentQueue *paymentQueue;	// G=0x135861; @synthesize=_paymentQueue
- (id)initWithContext:(id)context thisObject:(OpaqueJSValue *)object;	// 0x134fa1
- (void)_callObserversUsingFunctionName:(id)name withOptionalArgument:(id)optionalArgument;	// 0x135525
- (void)addJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x1350d1
- (void)dealloc;	// 0x135059
// declared property getter: - (id)paymentQueue;	// 0x135861
- (void)paymentQueue:(id)queue removedTransactions:(id)transactions;	// 0x1357a9
- (void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;	// 0x135829
- (void)paymentQueue:(id)queue updatedTransactions:(id)transactions;	// 0x135729
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;	// 0x135845
- (void)removeJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x1352fd
@end
