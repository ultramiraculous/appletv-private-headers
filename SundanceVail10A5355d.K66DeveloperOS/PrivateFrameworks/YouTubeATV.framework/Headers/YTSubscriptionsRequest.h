/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTSubscriptionsRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_subscriptions;	// 160 = 0xa0
	int _mode;	// 164 = 0xa4
	int _startIndex;	// 168 = 0xa8
	int _totalResults;	// 172 = 0xac
	int _resultsPerPage;	// 176 = 0xb0
}
+ (id)URLForSubscription:(id)subscription;	// 0x33367da5
+ (id)displayStringForSubscription:(id)subscription;	// 0x33367c89
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x33367d25
+ (unsigned)resultsPerRequest;	// 0x33367c85
- (id)init;	// 0x33367dc5
- (void)_doRequestWithURL:(id)url;	// 0x33368065
- (void)createPlaylistNamed:(id)named;	// 0x333682bd
- (void)dealloc;	// 0x33367e45
- (void)didAuthenticate:(id)authenticate;	// 0x33367fe5
- (void)didParseData;	// 0x33367f55
- (void)failWithError:(id)error;	// 0x333685f5
- (int)parseData:(id)data;	// 0x33367e91
- (void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;	// 0x3336820d
- (void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x33368161
- (void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x333680b5
- (void)setDelegate:(id)delegate;	// 0x33368669
- (void)subscribeToUser:(id)user;	// 0x33368481
@end

