/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *sources;	// G=0x304d7bc9; S=0x304d7be5; 
+ (id)getAnchors;	// 0x304d7b39
+ (id)getAnchorsWithDictionary:(id)dictionary context:(id)context;	// 0x304d7b7d
- (id)encodedClassName;	// 0x304d7b2d
- (id)groupIdentifier;	// 0x304d7b1d
// declared property setter: - (void)setSources:(id)sources;	// 0x304d7be5
// declared property getter: - (id)sources;	// 0x304d7bc9
@end

