/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "APSMessage.h"


@interface APSOutgoingMessage : APSMessage {
}
@property(assign, nonatomic, getter=isCritical) BOOL critical;	// G=0x30068271; S=0x300682a1; 
@property(assign) unsigned messageID;	// G=0x30067fd1; S=0x30068005; converted property
@property(assign, nonatomic) int payloadFormat;	// G=0x30068505; S=0x30068539; 
@property(assign, nonatomic) unsigned payloadLength;	// G=0x3006857d; S=0x300685b1; 
@property(assign) int priority;	// G=0x300685f5; S=0x30068629; converted property
@property(assign) int sendInterface;	// G=0x3006839d; S=0x300683d9; converted property
@property(assign, nonatomic) unsigned timeout;	// G=0x30068081; S=0x300680b5; 
@property(retain) id timestamp;	// G=0x30068049; S=0x30068065; converted property
- (unsigned)_effectiveSendTimeout;	// 0x300680f9
- (BOOL)hasTimedOut;	// 0x30068491
// declared property getter: - (BOOL)isCritical;	// 0x30068271
// converted property getter: - (unsigned)messageID;	// 0x30067fd1
// declared property getter: - (int)payloadFormat;	// 0x30068505
// declared property getter: - (unsigned)payloadLength;	// 0x3006857d
// converted property getter: - (int)priority;	// 0x300685f5
- (id)rawTimeoutTime;	// 0x30068221
// converted property getter: - (int)sendInterface;	// 0x3006839d
- (id)sendTimeoutTime;	// 0x30068145
- (void)setCancelled:(BOOL)cancelled;	// 0x3006844d
// declared property setter: - (void)setCritical:(BOOL)critical;	// 0x300682a1
// converted property setter: - (void)setMessageID:(unsigned)anId;	// 0x30068005
// declared property setter: - (void)setPayloadFormat:(int)format;	// 0x30068539
// declared property setter: - (void)setPayloadLength:(unsigned)length;	// 0x300685b1
// converted property setter: - (void)setPriority:(int)priority;	// 0x30068629
// converted property setter: - (void)setSendInterface:(int)interface;	// 0x300683d9
- (void)setSent:(BOOL)sent;	// 0x30068315
- (void)setTimedOut:(BOOL)anOut;	// 0x300684c1
// declared property setter: - (void)setTimeout:(unsigned)timeout;	// 0x300680b5
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x30068065
// declared property getter: - (unsigned)timeout;	// 0x30068081
// converted property getter: - (id)timestamp;	// 0x30068049
- (BOOL)wasCancelled;	// 0x3006841d
- (BOOL)wasSent;	// 0x300682e5
@end

