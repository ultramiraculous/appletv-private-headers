/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
@private
	NSString *_removalPasscode;	// 40 = 0x28
}
@property(retain) NSString *removalPasscode;	// G=0x3655c981; S=0x3655c95d; @synthesize=_removalPasscode
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3655c925
+ (id)typeStrings;	// 0x3655c935
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3655c9f9
- (void)dealloc;	// 0x3655c8d9
// declared property getter: - (id)removalPasscode;	// 0x3655c981
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x3655c95d
- (id)stubDictionary;	// 0x3655c999
@end
