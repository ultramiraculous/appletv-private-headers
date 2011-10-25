/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRImageManager, NSMutableData, BRImageLoadJob;

__attribute__((visibility("hidden")))
@interface BRImageLoadDelegate : NSObject {
@private
	BRImageManager *_manager;	// 4 = 0x4
	BRImageLoadJob *_job;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
}
@property(readonly, retain) BRImageLoadJob *job;	// G=0x33b58589; converted property
+ (id)imageLoadDelegateForManager:(id)manager withJob:(id)job;	// 0x33b58385
- (id)initForManager:(id)manager withJob:(id)job;	// 0x33b583c5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33b584e5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33b58521
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33b58489
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x33b58585
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x33b584e1
- (void)connectionDidFinishLoading:(id)connection;	// 0x33b58565
- (id)content;	// 0x33b58599
- (void)dealloc;	// 0x33b58429
// converted property getter: - (id)job;	// 0x33b58589
@end

