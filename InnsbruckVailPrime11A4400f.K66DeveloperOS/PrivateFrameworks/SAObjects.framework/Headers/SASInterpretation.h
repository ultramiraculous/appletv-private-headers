/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SASInterpretation : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *tokens;	// G=0x326bd95d; S=0x326bd9c5; 
+ (id)interpretation;	// 0x326bd8cd
+ (id)interpretationWithDictionary:(id)dictionary context:(id)context;	// 0x326bd911
- (id)encodedClassName;	// 0x326bd8c1
- (id)groupIdentifier;	// 0x326bd8b1
// declared property setter: - (void)setTokens:(id)tokens;	// 0x326bd9c5
// declared property getter: - (id)tokens;	// 0x326bd95d
@end

