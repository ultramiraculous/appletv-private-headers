/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVServerRequestHandler : XXUnknownSuperclass {
}
+ (id)sharedInstance;	// 0x25b4e1
- (id)_argumentsForQuery:(id)query;	// 0x262a39
- (void)_executeFavoritesQuery:(id)query path:(id)path urlArguments:(id)arguments withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x26139d
- (void)_executeGenericAuthQuery:(id)query urlArguments:(id)arguments withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x262351
- (void)_executeWatchedStateQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x2601b5
- (void)_handleArtworkRequest:(ATVServerRequestRef)request;	// 0x25ef09
- (void)_handlePlayRequest:(ATVServerRequestRef)request;	// 0x25de51
- (void)_handlePurchasesRequest:(ATVServerRequestRef)request urlArguments:(id)arguments;	// 0x25d56d
- (BOOL)_handlePushRequestWithQuery:(id)query registerRequest:(BOOL)request;	// 0x25cbdd
- (void)_handleRentalsRequest:(ATVServerRequestRef)request urlArguments:(id)arguments;	// 0x25ce0d
- (void)_handleServerRequest:(ATVServerRequestRef)request;	// 0x25b7fd
- (id)_jsonDataForObject:(id)object debugStr:(id)str;	// 0x262ded
- (id)_objectForJsonData:(id)jsonData debugStr:(id)str;	// 0x263021
- (void)_respondToRequest:(ATVServerRequestRef)request httpCode:(unsigned long)code body:(id)body mimeType:(id)type;	// 0x2631c1
- (void)_startPlaybackForDataItem:(id)dataItem;	// 0x25eccd
- (void)concreteDataClientConnect;	// 0x25fc65
- (void)concreteDataClientDisconnect;	// 0x25fc79
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x25fc81
- (void)handleRequest:(ATVServerRequestRef)request;	// 0x25b5c1
- (BOOL)processQueryAsync:(id)async;	// 0x25fc7d
- (id)serverInfo;	// 0x25c421
@end
