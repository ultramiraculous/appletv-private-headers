/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "RequestQueue.h"


__attribute__((visibility("hidden")))
@interface StoreKitRequestQueue : RequestQueue <ISSingleton> {
}
+ (void)setSharedInstance:(id)instance;	// 0x35f4fe5d
+ (id)sharedInstance;	// 0x35f4fe9d
- (void)cancelRequestWithInfo:(id)info identity:(id)identity;	// 0x35f4fed9
- (void)requestProductsWithInfo:(id)info identity:(id)identity;	// 0x35f4ff8d
- (void)sendError:(id)error forOperation:(id)operation;	// 0x35f50101
- (void)sendResponseForOperation:(id)operation;	// 0x35f50299
@end
