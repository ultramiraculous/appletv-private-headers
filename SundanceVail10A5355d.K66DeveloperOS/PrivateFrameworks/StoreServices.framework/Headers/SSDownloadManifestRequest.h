/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {
	int _manifestFormat;	// 28 = 0x1c
	BOOL _shouldHideUserPrompts;	// 32 = 0x20
	NSURLRequest *_urlRequest;	// 36 = 0x24
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x31903d1d; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign) int manifestFormat;	// G=0x31903d55; S=0x31903e25; 
@property(assign) BOOL shouldHideUserPrompts;	// G=0x319039cd; S=0x31903949; 
- (id)init;	// 0x31903815
- (id)initWithURLRequest:(id)urlrequest;	// 0x31903829
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x31904211
// declared property getter: - (id)URLRequest;	// 0x31903d1d
- (id)copyXPCEncoding;	// 0x319040f5
- (void)dealloc;	// 0x319038fd
// declared property getter: - (int)manifestFormat;	// 0x31903d55
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x31903e25
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x31903949
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x319039cd
- (BOOL)start;	// 0x31903ea5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3190407d
- (void)startWithManifestResponseBlock:(id)manifestResponseBlock;	// 0x31903aa1
@end

