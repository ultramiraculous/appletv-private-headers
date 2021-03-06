/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject {
	id<CoreDAVAccountInfoProvider> _provider;	// 4 = 0x4
	NSArray *_responseHeadersSortDescriptors;	// 8 = 0x8
	int _snippetsLogged;	// 12 = 0xc
}
@property(retain) NSArray *responseHeadersSortDescriptors;	// G=0x32c4d299; S=0x32c4d2ad; @synthesize=_responseHeadersSortDescriptors
- (id)initWithProvider:(id)provider;	// 0x32c4c591
- (id)_inflateRequestBody:(id)body;	// 0x32c4c6f1
- (void)dealloc;	// 0x32c4c691
- (void)finishCoreDAVResponse;	// 0x32c4d185
- (void)logCoreDAVRequest:(id)request;	// 0x32c4c819
- (void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;	// 0x32c4cda5
- (void)logCoreDAVResponseSnippet:(id)snippet;	// 0x32c4d09d
// declared property getter: - (id)responseHeadersSortDescriptors;	// 0x32c4d299
// declared property setter: - (void)setResponseHeadersSortDescriptors:(id)descriptors;	// 0x32c4d2ad
@end

