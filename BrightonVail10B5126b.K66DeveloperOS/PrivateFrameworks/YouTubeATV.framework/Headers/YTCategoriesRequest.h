/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_categories;	// 160 = 0xa0
}
- (id)init;	// 0x3670f8b5
- (id)_categoriesURL;	// 0x3670fb51
- (void)clearDelegate;	// 0x3670fcb9
- (void)dealloc;	// 0x3670f93d
- (void)didAuthenticate:(id)authenticate;	// 0x3670fa89
- (void)didParseData;	// 0x3670fa01
- (void)failWithError:(id)error;	// 0x3670fc45
- (void)loadRequest:(id)request;	// 0x3670fb09
- (int)parseData:(id)data;	// 0x3670f989
- (void)requestCategoriesWithDelegate:(id)delegate;	// 0x3670fbc5
@end

