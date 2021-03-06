/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSDictionary, NSArray, NSMutableArray, NSString;

@interface ASGALSearchResult : ASItem {
	NSDictionary *_applicationData;	// 40 = 0x28
	NSString *_longID;	// 44 = 0x2c
	NSMutableArray *_classes;	// 48 = 0x30
	NSMutableArray *_collectionIDs;	// 52 = 0x34
	NSString *_phone;	// 56 = 0x38
	NSString *_office;	// 60 = 0x3c
	NSString *_title;	// 64 = 0x40
	NSString *_company;	// 68 = 0x44
	NSString *_alias;	// 72 = 0x48
	NSString *_firstName;	// 76 = 0x4c
	NSString *_lastName;	// 80 = 0x50
	NSString *_homePhone;	// 84 = 0x54
	NSString *_mobilePhone;	// 88 = 0x58
	NSString *_emailAddress;	// 92 = 0x5c
}
@property(copy) NSString *alias;	// G=0x32199f45; S=0x32199f59; @synthesize=_alias
@property(retain) NSDictionary *applicationData;	// G=0x32199245; S=0x321991c1; converted property
@property(retain) NSArray *classes;	// G=0x32199df5; S=0x32199e09; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x32199e2d; S=0x32199e41; @synthesize=_collectionIDs
@property(copy) NSString *company;	// G=0x32199f0d; S=0x32199f21; @synthesize=_company
@property(copy) NSString *emailAddress;	// G=0x3219a05d; S=0x3219a071; @synthesize=_emailAddress
@property(copy) NSString *firstName;	// G=0x32199f7d; S=0x32199f91; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x32199fed; S=0x3219a001; @synthesize=_homePhone
@property(copy) NSString *lastName;	// G=0x32199fb5; S=0x32199fc9; @synthesize=_lastName
@property(retain) NSString *longID;	// G=0x32199dbd; S=0x32199dd1; @synthesize=_longID
@property(copy) NSString *mobilePhone;	// G=0x3219a025; S=0x3219a039; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x32199e9d; S=0x32199eb1; @synthesize=_office
@property(copy) NSString *phone;	// G=0x32199e65; S=0x32199e79; @synthesize=_phone
@property(copy) NSString *title;	// G=0x32199ed5; S=0x32199ee9; @synthesize=_title
+ (BOOL)acceptsTopLevelLeaves;	// 0x32198e65
+ (BOOL)frontingBasicTypes;	// 0x32198f61
+ (BOOL)notifyOfUnknownTokens;	// 0x32198fb5
+ (BOOL)parsingLeafNode;	// 0x32198eb9
+ (BOOL)parsingWithSubItems;	// 0x32198f0d
- (void)addClass:(id)aClass;	// 0x32199cf5
- (void)addCollectionID:(id)anId;	// 0x32199d59
// declared property getter: - (id)alias;	// 0x32199f45
// converted property getter: - (id)applicationData;	// 0x32199245
- (id)asParseRules;	// 0x32199255
// declared property getter: - (id)classes;	// 0x32199df5
// declared property getter: - (id)collectionIDs;	// 0x32199e2d
// declared property getter: - (id)company;	// 0x32199f0d
- (id)convertToDAContactSearchResultElement;	// 0x32199a1d
- (void)dealloc;	// 0x32199009
- (id)description;	// 0x32199159
// declared property getter: - (id)emailAddress;	// 0x3219a05d
// declared property getter: - (id)firstName;	// 0x32199f7d
// declared property getter: - (id)homePhone;	// 0x32199fed
// declared property getter: - (id)lastName;	// 0x32199fb5
// declared property getter: - (id)longID;	// 0x32199dbd
// declared property getter: - (id)mobilePhone;	// 0x3219a025
// declared property getter: - (id)office;	// 0x32199e9d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32199999
// declared property getter: - (id)phone;	// 0x32199e65
- (void)postProcessApplicationData;	// 0x321994f9
// declared property setter: - (void)setAlias:(id)alias;	// 0x32199f59
// converted property setter: - (void)setApplicationData:(id)data;	// 0x321991c1
// declared property setter: - (void)setClasses:(id)classes;	// 0x32199e09
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x32199e41
// declared property setter: - (void)setCompany:(id)company;	// 0x32199f21
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3219a071
// declared property setter: - (void)setFirstName:(id)name;	// 0x32199f91
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x3219a001
// declared property setter: - (void)setLastName:(id)name;	// 0x32199fc9
// declared property setter: - (void)setLongID:(id)anId;	// 0x32199dd1
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x3219a039
// declared property setter: - (void)setOffice:(id)office;	// 0x32199eb1
// declared property setter: - (void)setPhone:(id)phone;	// 0x32199e79
// declared property setter: - (void)setTitle:(id)title;	// 0x32199ee9
// declared property getter: - (id)title;	// 0x32199ed5
@end

