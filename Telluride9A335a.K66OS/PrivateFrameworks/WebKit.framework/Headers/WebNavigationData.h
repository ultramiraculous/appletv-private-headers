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
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x347d6439
- (id)clientRedirectSource;	// 0x347d637d
- (void)dealloc;	// 0x347d656d
- (BOOL)hasSubstituteData;	// 0x347d635d
- (id)originalRequest;	// 0x347d631d
- (id)response;	// 0x347d633d
- (id)title;	// 0x347d62fd
- (id)url;	// 0x347d62dd
@end

