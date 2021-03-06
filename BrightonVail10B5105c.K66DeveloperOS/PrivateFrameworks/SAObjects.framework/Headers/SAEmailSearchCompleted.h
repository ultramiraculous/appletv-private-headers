/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *emailResults;	// G=0x303b5bf9; S=0x303b5c75; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x303b5cdd; S=0x303b5d7d; 
+ (id)searchCompleted;	// 0x303b5a71
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x303b5ab5
+ (id)searchCompletedWithEmailResults:(id)emailResults;	// 0x303b5b01
+ (id)searchCompletedWithResults:(id)results;	// 0x303b5b49
- (id)initWithEmailResults:(id)emailResults;	// 0x303b5b91
- (id)initWithResults:(id)results;	// 0x303b5bc5
// declared property getter: - (id)emailResults;	// 0x303b5bf9
- (id)encodedClassName;	// 0x303b5a65
- (id)groupIdentifier;	// 0x303b5a55
// declared property getter: - (id)results;	// 0x303b5cdd
// declared property setter: - (void)setEmailResults:(id)results;	// 0x303b5c75
// declared property setter: - (void)setResults:(id)results;	// 0x303b5d7d
@end

