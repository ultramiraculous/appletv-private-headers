/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import "MediaControlSender-Structs.h"
#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MediaControlClient : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	MediaControlClientImp *_client;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_eventHandlerQueue;	// 12 = 0xc
	id _eventHandlerBlock;	// 16 = 0x10
}
- (id)init;	// 0x345267e1
- (void)activateResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x34528231
- (void)addResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x34527e69
- (void)addResourceData:(id)data mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;	// 0x345278c9
- (void)addResourceFile:(id)file mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;	// 0x34527c09
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;	// 0x34528a9d
- (void)checkAuthentication;	// 0x34526981
- (void)dealloc;	// 0x3452685d
- (void)ensureConnected;	// 0x34526b3d
- (void)ensureDisconnected;	// 0x34526bb9
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x3452993d
- (void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x34529b29
- (void)getProperty:(id)property qualifier:(id)qualifier completionQueue:(id)queue completionBlock:(id)block;	// 0x345274c5
- (void)getSlideshowFeaturesWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x34528429
- (void)getSlideshowInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x34528699
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x3452a061
- (MediaControlClientImp *)internalClient;	// 0x3450a475
- (void)invalidate;	// 0x345268f1
- (void)performRemoteAction:(id)action withParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x34526c39
- (void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x34529265
- (void)playWithLocalFilePath:(id)localFilePath params:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x34528dc5
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x34528fc1
- (void)playWithRemoteURL:(id)remoteURL startPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x34529435
- (void)removeResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x34528039
- (void)sendPhotoData:(id)data completionQueue:(id)queue completionBlock:(id)block;	// 0x34527291
- (void)sendPhotoData:(id)data options:(id)options completionQueue:(id)queue completionBlock:(id)block;	// 0x345272b5
- (void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;	// 0x34526ead
- (void)setHost:(id)host;	// 0x345269a5
- (void)setPassword:(id)password;	// 0x34526a71
- (void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x34529ce1
- (void)setProperty:(id)property qualifier:(id)qualifier value:(id)value completionQueue:(id)queue completionBlock:(id)block;	// 0x345276c1
- (void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;	// 0x34529ea1
- (void)setSlideshowInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x34528889
- (void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;	// 0x3452a20d
- (void)startPresentation:(id)presentation completionQueue:(id)queue completionBlock:(id)block;	// 0x3452706d
- (void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x34529685
@end
