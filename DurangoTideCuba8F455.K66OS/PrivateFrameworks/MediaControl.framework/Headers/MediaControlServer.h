/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

#import "MediaControl-Structs.h"
#import <NSObject.h> // Unknown library

@class AirPlayLocalSlideshow;
@protocol MediaControlServerDelegate;

@interface MediaControlServer : NSObject {
	MediaControlServerImp *_server;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id<MediaControlServerDelegate> _delegate;	// 12 = 0xc
	AirPlayLocalSlideshow *_slideshow;	// 16 = 0x10
}
@property(assign, nonatomic) id<MediaControlServerDelegate> delegate;	// G=0x30065b79; S=0x30066079; @synthesize=_delegate
@property(assign, nonatomic) unsigned supportedFeatures;	// G=0x30065b39; S=0x30065b4d; 
- (id)init;	// 0x30066191
- (void)dealloc;	// 0x30066d61
// declared property getter: - (id)delegate;	// 0x30065b79
- (void)postEvent:(id)event;	// 0x30066fc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30066079
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x30066f11
- (long)setPassword:(id)password;	// 0x30066f51
// declared property setter: - (void)setSupportedFeatures:(unsigned)features;	// 0x30065b4d
- (void)slideshowRequestAssetWithInfo:(id)info sessionUUID:(const char *)uuid completion:(id)completion;	// 0x30066fdd
- (long)start;	// 0x30066f7d
- (void)stop;	// 0x30066fad
// declared property getter: - (unsigned)supportedFeatures;	// 0x30065b39
@end
