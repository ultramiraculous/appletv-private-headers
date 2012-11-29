/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAMPSearchCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x303a47e5; S=0x303a4861; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303a4709; S=0x303a4785; 
+ (id)searchCompleted;	// 0x303a4679
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x303a46bd
- (id)encodedClassName;	// 0x303a466d
- (id)groupIdentifier;	// 0x303a465d
- (BOOL)requiresResponse;	// 0x303a48c9
// declared property getter: - (id)results;	// 0x303a47e5
// declared property setter: - (void)setResults:(id)results;	// 0x303a4861
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303a4785
// declared property getter: - (id)targetAppId;	// 0x303a4709
@end
