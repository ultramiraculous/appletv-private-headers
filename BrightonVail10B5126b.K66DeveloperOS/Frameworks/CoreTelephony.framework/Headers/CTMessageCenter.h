/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x31734891
- (id)init;	// 0x317348d9
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x317368e5
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x31736bb1
- (void)addMessageOfType:(int)type toArray:(id)array withIdsFromArray:(id)array3;	// 0x317364cd
- (id)allIncomingMessages;	// 0x317365a1
- (void)dealloc;	// 0x31734979
- (id)decodeMessage:(id)message;	// 0x31736f09
- (id)deferredMessageWithId:(unsigned)anId;	// 0x31736bcd
- (id)encodeMessage:(id)message;	// 0x31736eed
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x31737309
- (int)incomingMessageCount;	// 0x317362e1
- (id)incomingMessageWithId:(unsigned)anId;	// 0x31736bb9
- (id)incomingMessageWithId:(unsigned)anId isDeferred:(BOOL)deferred;	// 0x31735b31
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x31736f25
- (BOOL)isMmsConfigured;	// 0x31736f51
- (BOOL)isMmsEnabled;	// 0x31736f39
- (XXStruct_K5nmsA)send:(id)send;	// 0x31735989
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x317359b5
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x3173574d
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x31734f9d
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x31735385
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x317349b9
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x31737141
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withID:(unsigned)anId;	// 0x31737169
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x31737199
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow withID:(unsigned)anId;	// 0x317371c9
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x31736f35
- (id)statusOfOutgoingMessages;	// 0x31736be1
@end
