/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSNumber, NSDictionary, SALocalSearchRating, NSString, NSArray, NSURL;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *businessId;	// G=0x304e0e55; S=0x304e0e71; 
@property(copy, nonatomic) NSDictionary *businessIds;	// G=0x304e0ec1; S=0x304e0edd; 
@property(copy, nonatomic) NSURL *businessUrl;	// G=0x304e0f2d; S=0x304e0fa9; 
@property(copy, nonatomic) NSArray *categories;	// G=0x304e1009; S=0x304e1025; 
@property(copy, nonatomic) NSString *extSessionGuid;	// G=0x304e1075; S=0x304e1091; 
@property(copy, nonatomic) NSString *name;	// G=0x304e10e1; S=0x304e10fd; 
@property(copy, nonatomic) NSString *openingHours;	// G=0x304e114d; S=0x304e1169; 
@property(copy, nonatomic) NSArray *phoneNumbers;	// G=0x304e11b9; S=0x304e1235; 
@property(copy, nonatomic) NSURL *photo;	// G=0x304e129d; S=0x304e1319; 
@property(retain, nonatomic) SALocalSearchRating *rating;	// G=0x304e1379; S=0x304e13cd; 
@property(copy, nonatomic) NSArray *reviews;	// G=0x304e1409; S=0x304e1485; 
@property(assign, nonatomic) int totalNumberOfReviews;	// G=0x304e14ed; S=0x304e155d; 
+ (id)business;	// 0x304e0dc5
+ (id)businessWithDictionary:(id)dictionary context:(id)context;	// 0x304e0e09
// declared property getter: - (id)businessId;	// 0x304e0e55
// declared property getter: - (id)businessIds;	// 0x304e0ec1
// declared property getter: - (id)businessUrl;	// 0x304e0f2d
// declared property getter: - (id)categories;	// 0x304e1009
- (id)encodedClassName;	// 0x304e0db9
// declared property getter: - (id)extSessionGuid;	// 0x304e1075
- (id)groupIdentifier;	// 0x304e0da9
// declared property getter: - (id)name;	// 0x304e10e1
// declared property getter: - (id)openingHours;	// 0x304e114d
// declared property getter: - (id)phoneNumbers;	// 0x304e11b9
// declared property getter: - (id)photo;	// 0x304e129d
// declared property getter: - (id)rating;	// 0x304e1379
// declared property getter: - (id)reviews;	// 0x304e1409
// declared property setter: - (void)setBusinessId:(id)anId;	// 0x304e0e71
// declared property setter: - (void)setBusinessIds:(id)ids;	// 0x304e0edd
// declared property setter: - (void)setBusinessUrl:(id)url;	// 0x304e0fa9
// declared property setter: - (void)setCategories:(id)categories;	// 0x304e1025
// declared property setter: - (void)setExtSessionGuid:(id)guid;	// 0x304e1091
// declared property setter: - (void)setName:(id)name;	// 0x304e10fd
// declared property setter: - (void)setOpeningHours:(id)hours;	// 0x304e1169
// declared property setter: - (void)setPhoneNumbers:(id)numbers;	// 0x304e1235
// declared property setter: - (void)setPhoto:(id)photo;	// 0x304e1319
// declared property setter: - (void)setRating:(id)rating;	// 0x304e13cd
// declared property setter: - (void)setReviews:(id)reviews;	// 0x304e1485
// declared property setter: - (void)setTotalNumberOfReviews:(int)reviews;	// 0x304e155d
// declared property getter: - (int)totalNumberOfReviews;	// 0x304e14ed
@end
