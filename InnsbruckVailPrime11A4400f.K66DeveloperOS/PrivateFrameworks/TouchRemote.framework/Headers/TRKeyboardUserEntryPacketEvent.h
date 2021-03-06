/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "TRPacketEvent.h"

@class NSString;

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent {
	int _commandType;	// 20 = 0x14
	NSString *_text;	// 24 = 0x18
	unsigned long long _sessionID;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int commandType;	// G=0x32c184c9; @synthesize=_commandType
@property(readonly, assign, nonatomic) unsigned long long sessionID;	// G=0x32c184d9; @synthesize=_sessionID
@property(readonly, assign, nonatomic) NSString *text;	// G=0x32c184f1; @synthesize=_text
+ (unsigned)_packetEventType;	// 0x32c182a1
- (id)initWithCommandType:(int)commandType sessionID:(unsigned long long)anId text:(id)text;	// 0x32c18031
- (void).cxx_destruct;	// 0x32c18501
- (id)_initWithVersion:(unsigned)version payloadDictionary:(id)dictionary;	// 0x32c182ad
// declared property getter: - (int)commandType;	// 0x32c184c9
- (id)description;	// 0x32c181e1
// declared property getter: - (unsigned long long)sessionID;	// 0x32c184d9
// declared property getter: - (id)text;	// 0x32c184f1
@end

