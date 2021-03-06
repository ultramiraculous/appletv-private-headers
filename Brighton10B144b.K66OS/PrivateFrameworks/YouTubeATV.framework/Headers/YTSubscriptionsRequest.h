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
+ (id)URLForSubscription:(id)subscription;	// 0x3670fdad
+ (id)displayStringForSubscription:(id)subscription;	// 0x3670fc91
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x3670fd2d
+ (unsigned)resultsPerRequest;	// 0x3670fc8d
- (id)init;	// 0x3670fdcd
- (void)_doRequestWithURL:(id)url;	// 0x3671006d
- (void)createPlaylistNamed:(id)named;	// 0x367102c5
- (void)dealloc;	// 0x3670fe4d
- (void)didAuthenticate:(id)authenticate;	// 0x3670ffed
- (void)didParseData;	// 0x3670ff5d
- (void)failWithError:(id)error;	// 0x367105fd
- (int)parseData:(id)data;	// 0x3670fe99
- (void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;	// 0x36710215
- (void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x36710169
- (void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x367100bd
- (void)setDelegate:(id)delegate;	// 0x36710671
- (void)subscribeToUser:(id)user;	// 0x36710489
@end

