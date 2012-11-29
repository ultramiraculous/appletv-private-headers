/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {
	NSMutableSet *_emailAddresses;	// 40 = 0x28
	NSString *_primarySMTPAddress;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSArray *emailAddresses;	// G=0x36e29451; 
@property(readonly, assign) NSString *primarySMTPAddress;	// G=0x36e298a5; @synthesize=_primarySMTPAddress
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e292ad
+ (id)asParseRules;	// 0x36e29609
+ (BOOL)frontingBasicTypes;	// 0x36e293a9
+ (BOOL)notifyOfUnknownTokens;	// 0x36e293fd
+ (BOOL)parsingLeafNode;	// 0x36e29301
+ (BOOL)parsingWithSubItems;	// 0x36e29355
- (void)addEmailAddress:(id)address;	// 0x36e29471
- (void)dealloc;	// 0x36e29535
- (id)description;	// 0x36e29599
// declared property getter: - (id)emailAddresses;	// 0x36e29451
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e297fd
// declared property getter: - (id)primarySMTPAddress;	// 0x36e298a5
- (void)setPrimarySMTPAddress:(id)address;	// 0x36e294dd
@end
