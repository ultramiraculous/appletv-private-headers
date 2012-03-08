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
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_UUID;	// 20 = 0x14
	int _sharingOurStream;	// 24 = 0x18
	int _sharingTheirStream;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *UUID;	// G=0x36fe89c1; S=0x36fe89d1; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x36fe898d; S=0x36fe899d; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x36fe8925; S=0x36fe8935; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x36fe80c5; S=0x36fe80c1; 
@property(retain, nonatomic) NSString *lastName;	// G=0x36fe8959; S=0x36fe8969; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x36fe88f1; S=0x36fe8901; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x36fe8081; S=0x36fe8091; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x36fe89f5; S=0x36fe8a05; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x36fe80a1; S=0x36fe80b1; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x36fe8a15; S=0x36fe8a25; @synthesize=_sharingTheirStream
+ (id)share;	// 0x36fe80d1
- (id)initWithCoder:(id)coder;	// 0x36fe8779
// declared property getter: - (id)UUID;	// 0x36fe89c1
- (void)dealloc;	// 0x36fe8109
- (id)description;	// 0x36fe823d
// declared property getter: - (id)emailAddress;	// 0x36fe898d
- (void)encodeWithCoder:(id)coder;	// 0x36fe860d
// declared property getter: - (id)firstName;	// 0x36fe8925
// declared property getter: - (id)fullName;	// 0x36fe80c5
- (unsigned)hash;	// 0x36fe81a5
- (BOOL)isEqual:(id)equal;	// 0x36fe8381
// declared property getter: - (id)lastName;	// 0x36fe8959
// declared property getter: - (id)personID;	// 0x36fe88f1
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x36fe899d
// declared property setter: - (void)setFirstName:(id)name;	// 0x36fe8935
// declared property setter: - (void)setFullName:(id)name;	// 0x36fe80c1
// declared property setter: - (void)setLastName:(id)name;	// 0x36fe8969
// declared property setter: - (void)setPersonID:(id)anId;	// 0x36fe8901
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x36fe8091
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x36fe8a05
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x36fe80b1
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x36fe8a25
// declared property setter: - (void)setUUID:(id)uuid;	// 0x36fe89d1
// declared property getter: - (int)sharingOurPhotostream;	// 0x36fe8081
// declared property getter: - (int)sharingOurStream;	// 0x36fe89f5
// declared property getter: - (int)sharingTheirPhotostream;	// 0x36fe80a1
// declared property getter: - (int)sharingTheirStream;	// 0x36fe8a15
@end
