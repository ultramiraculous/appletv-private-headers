/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import "PLBasebandMessage.h"
#import "PowerlogCoreLoggers-Structs.h"

@class NSData;

@interface PLBasebandEurekaLogMessage : PLBasebandMessage {
	PLBasebandLogHeader *_header;	// 32 = 0x20
	NSData *_payload;	// 36 = 0x24
}
@property(assign, nonatomic) PLBasebandLogHeader *header;	// G=0x32421315; S=0x32421325; @synthesize=_header
@property(assign, nonatomic) NSData *payload;	// G=0x32421335; S=0x32421345; @synthesize=_payload
- (id)initWithData:(id)data;	// 0x32420d69
- (id)eventCodeString:(unsigned)string;	// 0x324211a9
// declared property getter: - (PLBasebandLogHeader *)header;	// 0x32421315
- (void)logWithLogger:(id)logger;	// 0x32420e65
- (void)parseData:(id)data;	// 0x32420ddd
// declared property getter: - (id)payload;	// 0x32421335
// declared property setter: - (void)setHeader:(PLBasebandLogHeader *)header;	// 0x32421325
// declared property setter: - (void)setPayload:(id)payload;	// 0x32421345
- (id)stringForUnknownBytes:(unsigned)unknownBytes;	// 0x3242129d
- (id)tooShortErrorString;	// 0x324212d1
@end
