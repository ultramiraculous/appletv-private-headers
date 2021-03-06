/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSMutableArray;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x339afc19; S=0x339afc2d; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x339afb89; S=0x339afb9d; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x339af97d; 
@property(retain) NSArray *emailAddresses;	// G=0x339afbd1; S=0x339afbe5; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x339afb41; S=0x339afb55; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x339afb65; S=0x339afb79; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x339af82d; 
@property(retain) NSString *principalPath;	// G=0x339afbf5; S=0x339afc09; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x339afbad; S=0x339afbc1; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x339af75d
- (id)init;	// 0x339af131
- (id)initWithResponse:(id)response;	// 0x339af2f9
- (void)addCUAddress:(id)address;	// 0x339af7a5
- (void)addEmail:(id)email;	// 0x339af7e9
- (id)convertToDAContactSearchResultElement;	// 0x3398c3f1
// declared property getter: - (id)cuAddresses;	// 0x339afc19
- (void)dealloc;	// 0x339af231
- (id)description;	// 0x339afaa5
// declared property getter: - (id)displayName;	// 0x339afb89
// declared property getter: - (id)emailAddress;	// 0x339af97d
// declared property getter: - (id)emailAddresses;	// 0x339afbd1
// declared property getter: - (id)firstName;	// 0x339afb41
// declared property getter: - (id)lastName;	// 0x339afb65
// declared property getter: - (id)preferredCUAddress;	// 0x339af82d
// declared property getter: - (id)principalPath;	// 0x339afbf5
// declared property getter: - (id)resultType;	// 0x339afbad
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x339afc2d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x339afb9d
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x339afbe5
// declared property setter: - (void)setFirstName:(id)name;	// 0x339afb55
// declared property setter: - (void)setLastName:(id)name;	// 0x339afb79
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x339afc09
// declared property setter: - (void)setResultType:(id)type;	// 0x339afbc1
@end

