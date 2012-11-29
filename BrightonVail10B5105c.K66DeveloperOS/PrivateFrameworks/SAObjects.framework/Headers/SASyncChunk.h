/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *key;	// G=0x303a1125; S=0x303a1141; 
@property(copy, nonatomic) NSString *postGen;	// G=0x303a1191; S=0x303a11ad; 
@property(copy, nonatomic) NSString *preGen;	// G=0x303a11fd; S=0x303a1219; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *toAdd;	// G=0x303a1269; S=0x303a12e5; 
@property(copy, nonatomic) NSArray *toRemove;	// G=0x303a134d; S=0x303a13c9; 
@property(copy, nonatomic) NSString *validity;	// G=0x303a1431; S=0x303a144d; 
+ (id)chunk;	// 0x303a1095
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;	// 0x303a10d9
- (id)encodedClassName;	// 0x303a1089
- (id)groupIdentifier;	// 0x303a1079
// declared property getter: - (id)key;	// 0x303a1125
// declared property getter: - (id)postGen;	// 0x303a1191
// declared property getter: - (id)preGen;	// 0x303a11fd
// declared property setter: - (void)setKey:(id)key;	// 0x303a1141
// declared property setter: - (void)setPostGen:(id)gen;	// 0x303a11ad
// declared property setter: - (void)setPreGen:(id)gen;	// 0x303a1219
// declared property setter: - (void)setToAdd:(id)add;	// 0x303a12e5
// declared property setter: - (void)setToRemove:(id)remove;	// 0x303a13c9
// declared property setter: - (void)setValidity:(id)validity;	// 0x303a144d
// declared property getter: - (id)toAdd;	// 0x303a1269
// declared property getter: - (id)toRemove;	// 0x303a134d
// declared property getter: - (id)validity;	// 0x303a1431
@end
