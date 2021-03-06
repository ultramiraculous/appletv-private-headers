/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MSShare : NSObject <NSCoding> {
	NSString *_personID;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_UUID;	// 20 = 0x14
	int _sharingOurStream;	// 24 = 0x18
	int _sharingTheirStream;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *UUID;	// G=0x30754db9; S=0x30754dc9; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x30754d81; S=0x30754d91; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x30754d11; S=0x30754d21; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x307542f5; S=0x307542f1; 
@property(retain, nonatomic) NSString *lastName;	// G=0x30754d49; S=0x30754d59; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x30754cd9; S=0x30754ce9; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x307542b1; S=0x307542c1; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x30754df1; S=0x30754e01; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x307542d1; S=0x307542e1; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x30754e11; S=0x30754e21; @synthesize=_sharingTheirStream
+ (id)share;	// 0x3075430d
- (id)initWithCoder:(id)coder;	// 0x30754b15
- (void).cxx_destruct;	// 0x30754e31
// declared property getter: - (id)UUID;	// 0x30754db9
- (id)description;	// 0x307543d5
// declared property getter: - (id)emailAddress;	// 0x30754d81
- (void)encodeWithCoder:(id)coder;	// 0x30754981
// declared property getter: - (id)firstName;	// 0x30754d11
// declared property getter: - (id)fullName;	// 0x307542f5
- (unsigned)hash;	// 0x30754339
- (BOOL)isEqual:(id)equal;	// 0x30754525
// declared property getter: - (id)lastName;	// 0x30754d49
// declared property getter: - (id)personID;	// 0x30754cd9
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x30754d91
// declared property setter: - (void)setFirstName:(id)name;	// 0x30754d21
// declared property setter: - (void)setFullName:(id)name;	// 0x307542f1
// declared property setter: - (void)setLastName:(id)name;	// 0x30754d59
// declared property setter: - (void)setPersonID:(id)anId;	// 0x30754ce9
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x307542c1
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x30754e01
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x307542e1
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x30754e21
// declared property setter: - (void)setUUID:(id)uuid;	// 0x30754dc9
// declared property getter: - (int)sharingOurPhotostream;	// 0x307542b1
// declared property getter: - (int)sharingOurStream;	// 0x30754df1
// declared property getter: - (int)sharingTheirPhotostream;	// 0x307542d1
// declared property getter: - (int)sharingTheirStream;	// 0x30754e11
@end

