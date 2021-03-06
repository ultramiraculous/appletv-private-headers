/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, SAStockObject, NSString, NSArray;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAStockObject *aceStock;	// G=0x326b62d1; S=0x326b6315; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x326b6351; S=0x326b63cd; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x326b642d; S=0x326b64cd; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x326b654d; S=0x326b65b5; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x326b661d; S=0x326b6685; 
+ (id)addCompleted;	// 0x326b6241
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326b6285
// declared property getter: - (id)aceStock;	// 0x326b62d1
- (id)encodedClassName;	// 0x326b6235
- (id)groupIdentifier;	// 0x326b6225
// declared property getter: - (id)identifier;	// 0x326b6351
// declared property getter: - (id)results;	// 0x326b642d
// declared property setter: - (void)setAceStock:(id)stock;	// 0x326b6315
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326b63cd
// declared property setter: - (void)setResults:(id)results;	// 0x326b64cd
// declared property setter: - (void)setStockReferences:(id)references;	// 0x326b65b5
// declared property setter: - (void)setStocks:(id)stocks;	// 0x326b6685
// declared property getter: - (id)stockReferences;	// 0x326b654d
// declared property getter: - (id)stocks;	// 0x326b661d
@end

