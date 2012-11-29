/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVDataQueryProcessor : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 4 = 0x4
	NSMutableDictionary *_dataClientQueryRecords;	// 8 = 0x8
}
+ (void)initialize;	// 0xbc3a1
- (id)initWithQueueName:(id)queueName;	// 0xbc431
- (void)executeFirstQuery:(id)query dataClient:(id)client;	// 0xbc7d5
- (void)executeQuery:(id)query andProcessNextWithDataClient:(id)dataClient;	// 0xbc4bd
- (void)processQuery:(id)query concurrentCount:(int)count dataClient:(id)client priority:(int)priority withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xbc8d9
- (void)shutdownClient:(id)client;	// 0xbce11
@end
