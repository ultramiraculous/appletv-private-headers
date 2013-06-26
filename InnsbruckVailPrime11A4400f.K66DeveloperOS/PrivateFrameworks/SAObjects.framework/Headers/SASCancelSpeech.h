/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SASCancelSpeech : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)cancelSpeech;	// 0x326a4ca5
+ (id)cancelSpeechWithDictionary:(id)dictionary context:(id)context;	// 0x326a4ce9
- (id)encodedClassName;	// 0x326a4c99
- (id)groupIdentifier;	// 0x326a4c89
@end
