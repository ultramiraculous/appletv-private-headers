/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject {
@private
	unsigned long _options;	// 4 = 0x4
	NSString *_dbPath;	// 8 = 0x8
	unsigned _serverPort;	// 12 = 0xc
	unsigned _machPort;	// 16 = 0x10
	unsigned _connectionPort;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	NSMutableDictionary *_replyHandlers;	// 28 = 0x1c
	unsigned _nextID;	// 32 = 0x20
	dispatch_source_s *_replySource;	// 36 = 0x24
	dispatch_queue_s *_replyHandlerLock;	// 40 = 0x28
	BOOL _registeredForStartNote;	// 44 = 0x2c
}
@property(assign) id delegate;	// G=0x31f2d351; S=0x31ee20b9; @synthesize=_delegate
@property(readonly, assign) unsigned port;	// G=0x31ee2405; 
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x31ee1ed1
- (BOOL)_connectToServer;	// 0x31ee247d
- (void)_daemonRestarted;	// 0x31f2cd19
- (void)_finishAllRepliesOnServerDeath;	// 0x31f2d0ed
- (void)_processReplyWithID:(unsigned)anId data:(id)data;	// 0x31ee36f5
- (id)addReplyHandler:(id)handler;	// 0x31ee33e5
- (void)dealloc;	// 0x31ee3f09
// declared property getter: - (id)delegate;	// 0x31f2d351
- (void)disconnect;	// 0x31ee3e59
// declared property getter: - (unsigned)port;	// 0x31ee2405
- (void)removeReplyHandler:(id)handler;	// 0x31f2cec5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ee20b9
@end

