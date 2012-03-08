/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSMutableArray, SSURLBagContext, NSDictionary, SSXPCConnection;

@interface SSURLBag : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x30ed9f49; 
+ (id)URLBagForContext:(id)context;	// 0x30ed9bf9
- (id)init;	// 0x30ed99b9
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x30ed9a19
// declared property getter: - (id)URLBagContext;	// 0x30ed9f49
- (id)_connection;	// 0x30eda1b5
- (void)_drainPendingLookupsWithError:(id)error;	// 0x30eda215
- (void)_loadURLBag;	// 0x30eda405
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x30eda795
- (void)dealloc;	// 0x30ed9af1
- (void)invalidate;	// 0x30ed9d75
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x30ed9e7d
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x30eda1a5
- (id)valueForKey:(id)key error:(id *)error;	// 0x30ed9f81
@end
