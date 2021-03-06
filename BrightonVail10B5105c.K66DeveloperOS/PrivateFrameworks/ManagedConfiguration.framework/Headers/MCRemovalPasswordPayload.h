/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
	NSString *_removalPasscode;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *removalPasscode;	// G=0x344f4559; S=0x344f4569; @synthesize=_removalPasscode
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344f41e9
+ (id)typeStrings;	// 0x344f41c1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344f41f9
- (void).cxx_destruct;	// 0x344f4591
// declared property getter: - (id)removalPasscode;	// 0x344f4559
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x344f4569
- (id)stubDictionary;	// 0x344f44ed
@end

