/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteCreate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contents;	// G=0x353cb501; S=0x353cb51d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353cb425; S=0x353cb4a1; 
+ (id)create;	// 0x353cb395
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x353cb3d9
// declared property getter: - (id)contents;	// 0x353cb501
- (id)encodedClassName;	// 0x353cb389
- (id)groupIdentifier;	// 0x353cb379
- (BOOL)requiresResponse;	// 0x353cb56d
// declared property setter: - (void)setContents:(id)contents;	// 0x353cb51d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353cb4a1
// declared property getter: - (id)targetAppId;	// 0x353cb425
@end

