/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject {
	unsigned long _options;	// 4 = 0x4
	NSString *_dbPath;	// 8 = 0x8
	unsigned _serverPort;	// 12 = 0xc
	unsigned _machPort;	// 16 = 0x10
	unsigned _connectionPort;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_connectionLock;	// 24 = 0x18
	id _delegate;	// 28 = 0x1c
	NSMutableDictionary *_replyHandlers;	// 32 = 0x20
	unsigned _nextID;	// 36 = 0x24
	NSObject<OS_dispatch_source> *_replySource;	// 40 = 0x28
	NSObject<OS_dispatch_queue> *_replyHandlerLock;	// 44 = 0x2c
	BOOL _registeredForStartNote;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x31fa9c7d; S=0x31f57ee5; @synthesize=_delegate
@property(readonly, assign) unsigned port;	// G=0x31f57fdd; 
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x31f57ce9
- (BOOL)_connectToServer;	// 0x31f58051
- (void)_daemonRestarted;	// 0x31fa9415
- (void)_finishAllRepliesOnServerDeath;	// 0x31fa99c9
- (void)_processReplyWithID:(unsigned)anId data:(id)data finished:(BOOL)finished;	// 0x31fa9791
- (id)addReplyHandler:(id)handler;	// 0x31f58bf5
- (void)dealloc;	// 0x31f593a9
// declared property getter: - (id)delegate;	// 0x31fa9c7d
- (void)disconnect;	// 0x31f592dd
// declared property getter: - (unsigned)port;	// 0x31f57fdd
- (void)removeReplyHandler:(id)handler;	// 0x31fa961d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f57ee5
@end
