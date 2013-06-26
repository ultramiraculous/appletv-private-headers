/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataQuery, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVCupidDataQueryContext : XXUnknownSuperclass {
	ATVDataQuery *_query;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id completionHandler;	// G=0x49718d; @synthesize=_completionHandler
@property(readonly, assign, nonatomic) ATVDataQuery *query;	// G=0x49716d; @synthesize=_query
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *queue;	// G=0x49717d; @synthesize=_queue
- (id)initWithQuery:(id)query queue:(id)queue completionHandler:(id)handler;	// 0x496f6d
- (void).cxx_destruct;	// 0x4971a1
// declared property getter: - (id)completionHandler;	// 0x49718d
- (BOOL)isQueryStillValid;	// 0x497035
- (void)performCompletion;	// 0x497075
// declared property getter: - (id)query;	// 0x49716d
// declared property getter: - (id)queue;	// 0x49717d
- (id)subcontextWithCompletionHandler:(id)completionHandler;	// 0x4970c9
@end
