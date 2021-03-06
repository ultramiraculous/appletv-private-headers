/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <NSObject.h> // Unknown library

@class MediaControlClient;
@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	NSObject<OS_dispatch_queue> *_internalQueue;	// 4 = 0x4
	MediaControlClient *_client;	// 8 = 0x8
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_userQueue;	// 16 = 0x10
	BOOL _started;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x311e6091; S=0x311e5705; @synthesize=_delegate
- (id)init;	// 0x311e5309
- (void)_configureEventHandler;	// 0x311e5971
- (void)dealloc;	// 0x311e5689
// declared property getter: - (id)delegate;	// 0x311e6091
- (void)getFeaturesWithCompletion:(id)completion;	// 0x311e5c2d
- (void)getFeaturesWithOptions:(unsigned)options completion:(id)completion;	// 0x311e5af5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x311e5705
- (void)setDispatchQueue:(id)queue;	// 0x311e5725
- (void)setHost:(id)host;	// 0x311e57f9
- (void)setPassword:(id)password;	// 0x311e58b5
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x311e5c41
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x311e5e59
@end

