/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAClockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353cad05; S=0x353cad81; 
+ (id)searchCompleted;	// 0x353cabf9
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353cac3d
+ (id)searchCompletedWithResults:(id)results;	// 0x353cac89
- (id)initWithResults:(id)results;	// 0x353cacd1
- (id)encodedClassName;	// 0x353cabed
- (id)groupIdentifier;	// 0x353cabdd
// declared property getter: - (id)results;	// 0x353cad05
// declared property setter: - (void)setResults:(id)results;	// 0x353cad81
@end

