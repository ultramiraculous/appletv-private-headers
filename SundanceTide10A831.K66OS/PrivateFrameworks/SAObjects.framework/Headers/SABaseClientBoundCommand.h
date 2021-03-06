/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAClientBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// G=0x304fca8d; S=0x304fcaa9; 
@property(copy, nonatomic) NSArray *callbacks;	// G=0x304fcaf9; S=0x304fcb75; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)baseClientBoundCommand;	// 0x304fc9fd
+ (id)baseClientBoundCommandWithDictionary:(id)dictionary context:(id)context;	// 0x304fca41
// declared property getter: - (id)appId;	// 0x304fca8d
// declared property getter: - (id)callbacks;	// 0x304fcaf9
- (id)encodedClassName;	// 0x304fc9f1
- (id)groupIdentifier;	// 0x304fc9e1
- (BOOL)requiresResponse;	// 0x304fcbdd
// declared property setter: - (void)setAppId:(id)anId;	// 0x304fcaa9
// declared property setter: - (void)setCallbacks:(id)callbacks;	// 0x304fcb75
@end

