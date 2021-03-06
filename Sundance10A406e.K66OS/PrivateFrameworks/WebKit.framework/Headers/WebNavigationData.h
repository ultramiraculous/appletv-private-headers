/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
	WebNavigationDataPrivate *_private;	// 4 = 0x4
}
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x30839919
- (id)clientRedirectSource;	// 0x30839ad9
- (void)dealloc;	// 0x30839af9
- (BOOL)hasSubstituteData;	// 0x30839ab9
- (id)originalRequest;	// 0x30839a79
- (id)response;	// 0x30839a99
- (id)title;	// 0x30839a59
- (id)url;	// 0x30839a39
@end

