/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
 */

#import "MediaControlReceiver-Structs.h"
#import <NSObject.h> // Unknown library

@class AirPlayLocalSlideshow;
@protocol MediaControlServerDelegate;

@interface MediaControlServer : NSObject {
	MediaControlServerImp *_server;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id<MediaControlServerDelegate> _delegate;	// 12 = 0xc
	AirPlayLocalSlideshow *_slideshow;	// 16 = 0x10
	double _lastActivity;	// 20 = 0x14
}
@property(assign, nonatomic) id<MediaControlServerDelegate> delegate;	// G=0x30dacd1d; S=0x30dacd2d; @synthesize=_delegate
@property(assign, nonatomic) unsigned supportedFeatures;	// G=0x30daccc9; S=0x30dad5b1; 
- (id)init;	// 0x30dad6ad
- (void)dealloc;	// 0x30dad3d9
// declared property getter: - (id)delegate;	// 0x30dacd1d
- (void)invalidate;	// 0x30dad639
- (void)postEvent:(id)event;	// 0x30dad539
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30dacd2d
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x30dad5f9
- (long)setPassword:(id)password;	// 0x30dad5c5
// declared property setter: - (void)setSupportedFeatures:(unsigned)features;	// 0x30dad5b1
- (void)slideshowRequestAssetWithInfo:(id)info sessionUUID:(const char *)uuid completion:(id)completion;	// 0x30dad435
- (long)start;	// 0x30dad569
// declared property getter: - (unsigned)supportedFeatures;	// 0x30daccc9
@end

