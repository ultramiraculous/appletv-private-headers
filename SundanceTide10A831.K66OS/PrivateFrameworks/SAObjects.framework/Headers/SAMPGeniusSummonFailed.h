/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x304d92e9; S=0x304d9359; 
@property(copy, nonatomic) NSString *reason;	// G=0x304d939d; S=0x304d93b9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)geniusSummonFailed;	// 0x304d9161
+ (id)geniusSummonFailedWithDictionary:(id)dictionary context:(id)context;	// 0x304d91a5
+ (id)geniusSummonFailedWithErrorCode:(int)errorCode;	// 0x304d91f1
+ (id)geniusSummonFailedWithReason:(id)reason;	// 0x304d9239
- (id)initWithErrorCode:(int)errorCode;	// 0x304d9281
- (id)initWithReason:(id)reason;	// 0x304d92b5
- (id)encodedClassName;	// 0x304d9155
// declared property getter: - (int)errorCode;	// 0x304d92e9
- (id)groupIdentifier;	// 0x304d9145
// declared property getter: - (id)reason;	// 0x304d939d
// declared property setter: - (void)setErrorCode:(int)code;	// 0x304d9359
// declared property setter: - (void)setReason:(id)reason;	// 0x304d93b9
@end

