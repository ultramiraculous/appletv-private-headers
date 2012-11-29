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
	NSArray *_headerSortDescriptors;	// 8 = 0x8
	int _snippetsLogged;	// 12 = 0xc
}
@property(retain) NSArray *headerSortDescriptors;	// G=0x303c68ed; S=0x303c6901; @synthesize=_headerSortDescriptors
- (id)initWithProvider:(id)provider;	// 0x303c58ed
- (id)_inflateRequestBody:(id)body;	// 0x303c5a55
- (void)dealloc;	// 0x303c59f1
- (void)finishCoreDAVResponse;	// 0x303c67a5
// declared property getter: - (id)headerSortDescriptors;	// 0x303c68ed
- (void)logCoreDAVRequest:(id)request;	// 0x303c5bb5
- (void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;	// 0x303c62c1
- (void)logCoreDAVResponseSnippet:(id)snippet;	// 0x303c6691
// declared property setter: - (void)setHeaderSortDescriptors:(id)descriptors;	// 0x303c6901
@end
