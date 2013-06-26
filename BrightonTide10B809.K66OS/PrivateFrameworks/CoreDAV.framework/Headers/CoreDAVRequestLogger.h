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
@property(retain) NSArray *headerSortDescriptors;	// G=0x3371087d; S=0x33710891; @synthesize=_headerSortDescriptors
- (id)initWithProvider:(id)provider;	// 0x3370f87d
- (id)_inflateRequestBody:(id)body;	// 0x3370f9e5
- (void)dealloc;	// 0x3370f981
- (void)finishCoreDAVResponse;	// 0x33710735
// declared property getter: - (id)headerSortDescriptors;	// 0x3371087d
- (void)logCoreDAVRequest:(id)request;	// 0x3370fb45
- (void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;	// 0x33710251
- (void)logCoreDAVResponseSnippet:(id)snippet;	// 0x33710621
// declared property setter: - (void)setHeaderSortDescriptors:(id)descriptors;	// 0x33710891
@end
