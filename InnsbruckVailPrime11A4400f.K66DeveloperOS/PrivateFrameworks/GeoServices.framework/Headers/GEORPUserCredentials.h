/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEORPUserCredentials : PBCodable {
	NSString *_iCloudUserMapsAuthToken;	// 4 = 0x4
	NSString *_iCloudUserPersonID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasICloudUserMapsAuthToken;	// G=0x30f8a371; 
@property(readonly, assign, nonatomic) BOOL hasICloudUserPersonID;	// G=0x30f8a359; 
@property(retain, nonatomic) NSString *iCloudUserMapsAuthToken;	// G=0x30f8a815; S=0x30f8a825; @synthesize=_iCloudUserMapsAuthToken
@property(retain, nonatomic) NSString *iCloudUserPersonID;	// G=0x30f8a7f5; S=0x30f8a805; @synthesize=_iCloudUserPersonID
- (void)copyTo:(id)to;	// 0x30f8a689
- (void)dealloc;	// 0x30f8a301
- (id)description;	// 0x30f8a389
- (id)dictionaryRepresentation;	// 0x30f8a3f9
// declared property getter: - (BOOL)hasICloudUserMapsAuthToken;	// 0x30f8a371
// declared property getter: - (BOOL)hasICloudUserPersonID;	// 0x30f8a359
- (unsigned)hash;	// 0x30f8a7b5
// declared property getter: - (id)iCloudUserMapsAuthToken;	// 0x30f8a815
// declared property getter: - (id)iCloudUserPersonID;	// 0x30f8a7f5
- (BOOL)isEqual:(id)equal;	// 0x30f8a715
- (BOOL)readFrom:(id)from;	// 0x30f8a625
// declared property setter: - (void)setICloudUserMapsAuthToken:(id)token;	// 0x30f8a825
// declared property setter: - (void)setICloudUserPersonID:(id)anId;	// 0x30f8a805
- (void)writeTo:(id)to;	// 0x30f8a631
@end
