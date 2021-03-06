/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *aceVersion;	// G=0x34253235; S=0x34253251; 
@property(copy, nonatomic) NSString *commandId;	// G=0x342532a1; S=0x342532bd; 
@property(retain, nonatomic) SAObjectSupport *resultSupport;	// G=0x3425330d; S=0x34253361; 
@property(copy, nonatomic) NSURL *serverEndpoint;	// G=0x3425339d; S=0x34253419; 
@property(copy, nonatomic) NSArray *supportedConstraints;	// G=0x34253479; S=0x342534f5; 
@property(assign, nonatomic) int weight;	// G=0x3425355d; S=0x342535cd; 
+ (id)commandSupport;	// 0x342531a5
+ (id)commandSupportWithDictionary:(id)dictionary context:(id)context;	// 0x342531e9
// declared property getter: - (id)aceVersion;	// 0x34253235
// declared property getter: - (id)commandId;	// 0x342532a1
- (id)encodedClassName;	// 0x34253199
- (id)groupIdentifier;	// 0x34253189
// declared property getter: - (id)resultSupport;	// 0x3425330d
// declared property getter: - (id)serverEndpoint;	// 0x3425339d
// declared property setter: - (void)setAceVersion:(id)version;	// 0x34253251
// declared property setter: - (void)setCommandId:(id)anId;	// 0x342532bd
// declared property setter: - (void)setResultSupport:(id)support;	// 0x34253361
// declared property setter: - (void)setServerEndpoint:(id)endpoint;	// 0x34253419
// declared property setter: - (void)setSupportedConstraints:(id)constraints;	// 0x342534f5
// declared property setter: - (void)setWeight:(int)weight;	// 0x342535cd
// declared property getter: - (id)supportedConstraints;	// 0x34253479
// declared property getter: - (int)weight;	// 0x3425355d
@end

