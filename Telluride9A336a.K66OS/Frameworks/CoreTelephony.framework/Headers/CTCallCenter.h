/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CTCallCenter : NSObject {
@private
	void *_internal;	// 4 = 0x4
	NSSet *_currentCalls;	// 8 = 0x8
	id _callEventHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id callEventHandler;	// G=0x324d66bd; S=0x324d66cd; 
@property(retain) NSSet *currentCalls;	// G=0x324d6c71; S=0x324d6cc9; @dynamic
- (id)init;	// 0x324d64ed
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)failureLogMessage;	// 0x324d7059
- (BOOL)calculateCallStateChanges:(id)changes;	// 0x324d687d
// declared property getter: - (id)callEventHandler;	// 0x324d66bd
- (void)cleanUpServerConnection;	// 0x324d649d
- (void)cleanUpServerConnectionNoLock;	// 0x324d645d
// declared property getter: - (id)currentCalls;	// 0x324d6c71
- (void)dealloc;	// 0x324d6611
- (id)description;	// 0x324d7201
- (BOOL)getCurrentCallSetFromServer:(id)server;	// 0x324d6781
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x324d6d09
- (void)reestablishServerConnectionIfNeeded;	// 0x324d6291
// declared property setter: - (void)setCallEventHandler:(id)handler;	// 0x324d66cd
// declared property setter: - (void)setCurrentCalls:(id)calls;	// 0x324d6cc9
- (BOOL)setUpServerConnection;	// 0x324d607d
@end

