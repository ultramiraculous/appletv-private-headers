/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAClockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x353c9f59; S=0x353c9ff9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c9e7d; S=0x353c9ef9; 
+ (id)delete;	// 0x353c9ded
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x353c9e31
// declared property getter: - (id)clockIds;	// 0x353c9f59
- (id)encodedClassName;	// 0x353c9de1
- (id)groupIdentifier;	// 0x353c9dd1
- (BOOL)requiresResponse;	// 0x353ca079
// declared property setter: - (void)setClockIds:(id)ids;	// 0x353c9ff9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c9ef9
// declared property getter: - (id)targetAppId;	// 0x353c9e7d
@end
