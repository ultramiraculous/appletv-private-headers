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
@property(copy, nonatomic) id callEventHandler;	// G=0x310606bd; S=0x310606cd; 
@property(retain) NSSet *currentCalls;	// G=0x31060c71; S=0x31060cc9; @dynamic
- (id)init;	// 0x310604ed
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)failureLogMessage;	// 0x31061059
- (BOOL)calculateCallStateChanges:(id)changes;	// 0x3106087d
// declared property getter: - (id)callEventHandler;	// 0x310606bd
- (void)cleanUpServerConnection;	// 0x3106049d
- (void)cleanUpServerConnectionNoLock;	// 0x3106045d
// declared property getter: - (id)currentCalls;	// 0x31060c71
- (void)dealloc;	// 0x31060611
- (id)description;	// 0x31061201
- (BOOL)getCurrentCallSetFromServer:(id)server;	// 0x31060781
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x31060d09
- (void)reestablishServerConnectionIfNeeded;	// 0x31060291
// declared property setter: - (void)setCallEventHandler:(id)handler;	// 0x310606cd
// declared property setter: - (void)setCurrentCalls:(id)calls;	// 0x31060cc9
- (BOOL)setUpServerConnection;	// 0x3106007d
@end

