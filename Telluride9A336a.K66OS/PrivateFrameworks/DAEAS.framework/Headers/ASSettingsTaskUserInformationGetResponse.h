/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {
	NSArray *_emailAddresses;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *emailAddresses;	// G=0x31556c0d; S=0x31556c1d; @synthesize=_emailAddresses
+ (BOOL)acceptsTopLevelLeaves;	// 0x31556799
+ (BOOL)frontingBasicTypes;	// 0x31556895
+ (BOOL)notifyOfUnknownTokens;	// 0x315568e9
+ (BOOL)parsingLeafNode;	// 0x315567ed
+ (BOOL)parsingWithSubItems;	// 0x31556841
- (id)asParseRules;	// 0x315569f1
- (void)dealloc;	// 0x3155693d
- (id)description;	// 0x31556989
// declared property getter: - (id)emailAddresses;	// 0x31556c0d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31556b61
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x31556c1d
@end

