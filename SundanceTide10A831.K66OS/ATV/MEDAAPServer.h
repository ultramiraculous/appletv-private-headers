/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MEDAAPServer : BRSingleton {
	NSMutableArray *_pendingServerRequests;	// 4 = 0x4
	NSMutableDictionary *_inflightArtworkRequests;	// 8 = 0x8
}
+ (id)atvSortStringForDAAPSortType:(int)daapsortType;	// 0xc22e1
+ (unsigned long long)idFromCriteriaList:(SearchCriteriaList *)criteriaList;	// 0xc2351
+ (void)setSingleton:(id)singleton;	// 0xc065d
+ (id)singleton;	// 0xc064d
- (id)init;	// 0xc0681
- (void).cxx_destruct;	// 0xc4095
- (void)_addFiltersToQuery:(id)query serverRequest:(ATVServerRequestRef)request;	// 0xc212d
- (id)_atvPropertyForDAAPProperty:(id)daapproperty;	// 0xc3769
- (void)_cloudDBDataUpdated:(id)updated;	// 0xc2e49
- (void)_dataClientConnectionHandler:(id)handler;	// 0xc3045
- (int)_filterOperatorForMatchType:(unsigned long)matchType;	// 0xc2e01
- (void)_homeShareServersChanged;	// 0xc2f4d
- (void)_homeShareServersChangedHandler:(id)handler;	// 0xc3645
- (void)_imageRequestHandler:(id)handler;	// 0xc1db5
- (id)atvFiltersForCriteriaList:(SearchCriteriaList *)criteriaList queryType:(int)type;	// 0xc23a1
- (void)handleCloudRequest:(ATVServerRequestRef)request;	// 0xc0b09
- (void)handleCompletedQuery:(id)query context:(id)context;	// 0xc1b49
- (void)handleRequest:(ATVServerRequestRef)request;	// 0xc0969
- (id)newATVFilterForCriteria:(CriterionInfo *)criteria queryType:(int)type;	// 0xc25d9
@end

