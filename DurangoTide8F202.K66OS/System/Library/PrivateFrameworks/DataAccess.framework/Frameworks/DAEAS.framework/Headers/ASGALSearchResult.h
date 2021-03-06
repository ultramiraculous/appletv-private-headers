/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableArray, NSString, NSDictionary;

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
@property(copy) NSString *alias;	// G=0x32edfc29; S=0x32edfddd; @synthesize=_alias
@property(retain) NSDictionary *applicationData;	// G=0x32edeecd; S=0x32edfb09; converted property
@property(retain) NSArray *classes;	// G=0x32edfb99; S=0x32edfce5; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x32edfbb1; S=0x32edfd11; @synthesize=_collectionIDs
@property(copy) NSString *company;	// G=0x32edfc11; S=0x32edfdb5; @synthesize=_company
@property(copy) NSString *emailAddress;	// G=0x32edfca1; S=0x32edfea5; @synthesize=_emailAddress
@property(copy) NSString *firstName;	// G=0x32edfc41; S=0x32edfe05; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x32edfc71; S=0x32edfe55; @synthesize=_homePhone
@property(copy) NSString *lastName;	// G=0x32edfc59; S=0x32edfe2d; @synthesize=_lastName
@property(retain) NSString *longID;	// G=0x32edfb81; S=0x32edfcb9; @synthesize=_longID
@property(copy) NSString *mobilePhone;	// G=0x32edfc89; S=0x32edfe7d; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x32edfbe1; S=0x32edfd65; @synthesize=_office
@property(copy) NSString *phone;	// G=0x32edfbc9; S=0x32edfd3d; @synthesize=_phone
@property(copy) NSString *title;	// G=0x32edfbf9; S=0x32edfd8d; @synthesize=_title
+ (BOOL)acceptsTopLevelLeaves;	// 0x32edf915
+ (BOOL)frontingBasicTypes;	// 0x32edf83d
+ (BOOL)notifyOfUnknownTokens;	// 0x32edf7f5
+ (BOOL)parsingLeafNode;	// 0x32edf8cd
+ (BOOL)parsingWithSubItems;	// 0x32edf885
- (void)addClass:(id)aClass;	// 0x32edef39
- (void)addCollectionID:(id)anId;	// 0x32edeedd
// declared property getter: - (id)alias;	// 0x32edfc29
// converted property getter: - (id)applicationData;	// 0x32edeecd
- (id)asParseRules;	// 0x32edf5a1
// declared property getter: - (id)classes;	// 0x32edfb99
// declared property getter: - (id)collectionIDs;	// 0x32edfbb1
// declared property getter: - (id)company;	// 0x32edfc11
- (id)convertToDAContactSearchResultElement;	// 0x32edef95
- (void)dealloc;	// 0x32edf9d5
- (id)description;	// 0x32edf78d
// declared property getter: - (id)emailAddress;	// 0x32edfca1
// declared property getter: - (id)firstName;	// 0x32edfc41
// declared property getter: - (id)homePhone;	// 0x32edfc71
// declared property getter: - (id)lastName;	// 0x32edfc59
// declared property getter: - (id)longID;	// 0x32edfb81
// declared property getter: - (id)mobilePhone;	// 0x32edfc89
// declared property getter: - (id)office;	// 0x32edfbe1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32edf95d
// declared property getter: - (id)phone;	// 0x32edfbc9
- (void)postProcessApplicationData;	// 0x32edf129
// declared property setter: - (void)setAlias:(id)alias;	// 0x32edfddd
// converted property setter: - (void)setApplicationData:(id)data;	// 0x32edfb09
// declared property setter: - (void)setClasses:(id)classes;	// 0x32edfce5
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x32edfd11
// declared property setter: - (void)setCompany:(id)company;	// 0x32edfdb5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x32edfea5
// declared property setter: - (void)setFirstName:(id)name;	// 0x32edfe05
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x32edfe55
// declared property setter: - (void)setLastName:(id)name;	// 0x32edfe2d
// declared property setter: - (void)setLongID:(id)anId;	// 0x32edfcb9
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x32edfe7d
// declared property setter: - (void)setOffice:(id)office;	// 0x32edfd65
// declared property setter: - (void)setPhone:(id)phone;	// 0x32edfd3d
// declared property setter: - (void)setTitle:(id)title;	// 0x32edfd8d
// declared property getter: - (id)title;	// 0x32edfbf9
@end

