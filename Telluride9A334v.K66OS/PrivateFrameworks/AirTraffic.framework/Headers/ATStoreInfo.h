/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSMutableDictionary, NSDictionary;

@interface ATStoreInfo : NSObject {
	NSMutableDictionary *_downloadDictionary;	// 4 = 0x4
	NSMutableDictionary *_assetDictionary;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *DSID;	// G=0x32273a95; S=0x32273a3d; 
@property(retain, nonatomic) NSString *XID;	// G=0x32273ca5; S=0x32273c4d; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x32273a11; S=0x322739b9; 
@property(retain, nonatomic) NSString *appleID;	// G=0x32273d29; S=0x32273cd1; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x32274169; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x32273b19; S=0x32273ac1; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x32273fbd; S=0x32273f65; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x32274159; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x32274041; S=0x32273fe9; 
@property(retain, nonatomic) NSString *flavor;	// G=0x32273f39; S=0x32273ee1; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x32273e31; S=0x32273dd9; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x32273eb5; S=0x32273e5d; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x32273dad; S=0x32273d55; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x32273c21; S=0x32273bc9; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x32273b9d; S=0x32273b45; 
- (id)init;	// 0x3227406d
// declared property getter: - (id)DSID;	// 0x32273a95
// declared property getter: - (id)XID;	// 0x32273ca5
// declared property getter: - (id)adamID;	// 0x32273a11
// declared property getter: - (id)appleID;	// 0x32273d29
// declared property getter: - (id)assetDictionary;	// 0x32274169
// declared property getter: - (id)collectionID;	// 0x32273b19
- (void)dealloc;	// 0x322740f9
// declared property getter: - (id)dimensions;	// 0x32273fbd
// declared property getter: - (id)downloadDictionary;	// 0x32274159
// declared property getter: - (id)drmFree;	// 0x32274041
// declared property getter: - (id)flavor;	// 0x32273f39
// declared property getter: - (id)matchStatus;	// 0x32273e31
// declared property getter: - (id)redownloadStatus;	// 0x32273eb5
// declared property getter: - (id)sagaID;	// 0x32273dad
// declared property setter: - (void)setAdamID:(id)anId;	// 0x322739b9
// declared property setter: - (void)setAppleID:(id)anId;	// 0x32273cd1
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x32273ac1
// declared property setter: - (void)setDSID:(id)dsid;	// 0x32273a3d
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x32273f65
// declared property setter: - (void)setDrmFree:(id)free;	// 0x32273fe9
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x32273ee1
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x32273dd9
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x32273e5d
// declared property setter: - (void)setSagaID:(id)anId;	// 0x32273d55
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x32273bc9
// declared property setter: - (void)setVersionID:(id)anId;	// 0x32273b45
// declared property setter: - (void)setXID:(id)xid;	// 0x32273c4d
// declared property getter: - (id)storefrontID;	// 0x32273c21
// declared property getter: - (id)versionID;	// 0x32273b9d
@end

