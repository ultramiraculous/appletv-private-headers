/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"
#import "SAAceCommand.h"

@class NSString;

@interface SABaseCommand : AceObject <SAAceSerializable, SAAceCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// G=0x355b8edd; S=0x355b8ef9; @dynamic
@property(copy, nonatomic) NSString *refId;	// G=0x355b8f49; S=0x355b8f65; @dynamic
+ (id)baseCommand;	// 0x355b8e4d
+ (id)baseCommandWithDictionary:(id)dictionary context:(id)context;	// 0x355b8e91
// declared property getter: - (id)aceId;	// 0x355b8edd
- (id)encodedClassName;	// 0x355b8e41
- (id)groupIdentifier;	// 0x355b8e31
// declared property getter: - (id)refId;	// 0x355b8f49
// declared property setter: - (void)setAceId:(id)anId;	// 0x355b8ef9
// declared property setter: - (void)setRefId:(id)anId;	// 0x355b8f65
@end

