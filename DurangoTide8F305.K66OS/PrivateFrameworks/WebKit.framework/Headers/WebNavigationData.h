/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNavigationDataPrivate;

__attribute__((visibility("hidden")))
@interface WebNavigationData : NSObject {
@private
	WebNavigationDataPrivate *_private;	// 4 = 0x4
}
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x3401c461
- (id)clientRedirectSource;	// 0x3401c445
- (void)dealloc;	// 0x3401c5f9
- (BOOL)hasSubstituteData;	// 0x3401c429
- (id)originalRequest;	// 0x3401c3f1
- (id)response;	// 0x3401c40d
- (id)title;	// 0x3401c3d5
- (id)url;	// 0x3401c3b9
@end

