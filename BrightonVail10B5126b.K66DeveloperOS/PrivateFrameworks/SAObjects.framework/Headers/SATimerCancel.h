/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerCancel : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353cbc25; S=0x353cbca1; 
+ (id)cancel;	// 0x353cbb95
+ (id)cancelWithDictionary:(id)dictionary context:(id)context;	// 0x353cbbd9
- (id)encodedClassName;	// 0x353cbb89
- (id)groupIdentifier;	// 0x353cbb79
- (BOOL)requiresResponse;	// 0x353cbd01
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353cbca1
// declared property getter: - (id)targetAppId;	// 0x353cbc25
@end
