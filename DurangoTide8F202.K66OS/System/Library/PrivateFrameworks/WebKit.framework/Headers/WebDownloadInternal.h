/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSURLDownloadDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
@private
	id realDelegate;	// 4 = 0x4
}
- (void)dealloc;	// 0x32c465f9
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;	// 0x32c463d1
- (void)download:(id)download didBeginChildDownload:(id)download2;	// 0x32c4648d
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;	// 0x32c462d5
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x32c463f5
- (void)download:(id)download didFailWithError:(id)error;	// 0x32c46439
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;	// 0x32c462d1
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x32c46389
- (void)download:(id)download didReceiveResponse:(id)response;	// 0x32c46365
- (id)download:(id)download shouldBeginChildDownloadOfSource:(id)source delegate:(id *)delegate;	// 0x32c4645d
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x32c463ad
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x32c46335
- (void)downloadDidBegin:(id)download;	// 0x32c46315
- (void)downloadDidFinish:(id)download;	// 0x32c46419
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32c46511
- (void)setRealDelegate:(id)delegate;	// 0x32c462dd
@end

