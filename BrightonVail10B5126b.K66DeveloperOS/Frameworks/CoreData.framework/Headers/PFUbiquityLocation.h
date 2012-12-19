/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	NSString *_ubiquityRootLocationPath;	// 8 = 0x8
	int _ubiquityLocationType;	// 12 = 0xc
	NSString *_exportingPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	NSString *_modelVersionHash;	// 24 = 0x18
	NSString *_filename;	// 28 = 0x1c
	NSArray *_otherPathComponents;	// 32 = 0x20
	unsigned _hash;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x30fce8ed; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *filename;	// G=0x30fce91d; @synthesize=_filename
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x30fce92d; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x30fce90d; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *otherPathComponents;	// G=0x30fce93d; @synthesize=_otherPathComponents
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x30fce8fd; @synthesize=_storeName
@property(readonly, assign, nonatomic) int ubiquityLocationType;	// G=0x30fce8dd; @synthesize=_ubiquityLocationType
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x30fcc2d9; 
@property(readonly, assign, nonatomic) NSString *ubiquityRootLocationPath;	// G=0x30fce8cd; @synthesize=_ubiquityRootLocationPath
@property(readonly, assign, nonatomic) BOOL usesBaselineDirectory;	// G=0x30fcb0f5; 
@property(readonly, assign, nonatomic) BOOL usesBaselineStagingDirectory;	// G=0x30fcb08d; 
@property(readonly, assign, nonatomic) BOOL usesCurrentBaselineDirectory;	// G=0x30fcb035; 
@property(readonly, assign, nonatomic) BOOL usesStagingLogDirectory;	// G=0x30fcaf85; 
@property(readonly, assign, nonatomic) BOOL usesTemporaryLogDirectory;	// G=0x30fcafdd; 
+ (id)createArrayOfSubLocationsAtLocation:(id)location error:(id *)error;	// 0x30fce619
+ (id)createBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd4f9
+ (id)createBaselineStagingLocation:(int)location forStoreName:(id)storeName modelVersionHash:(id)hash andFilename:(id)filename withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd60d
+ (id)createCurrentBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash forFileNamed:(id)fileNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd729
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)oldManagedObjectModel andNewManagedObjectModel:(id)model inUbiquityPeerStoreLocation:(id)ubiquityPeerStoreLocation;	// 0x30fcde61
+ (id)createMetadataPeerLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x30fcd2ed
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x30fcd349
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd22d
+ (id)createMetadataStoreLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x30fcd271
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)localPeerID storeName:(id)name UUID:(id)uuid andUbiquityRootLocation:(id)location;	// 0x30fcd3c5
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)localPeerID andBaselineFileLocation:(id)location;	// 0x30fcd4b5
+ (id)createPeerRootLocationForPeerID:(id)peerID withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd9dd
+ (id)createPeerStoreLocationForPeerID:(id)peerID andStoreName:(id)name withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcda35
+ (id)createPeerStoreVersionLocationForPeerID:(id)peerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcdaa5
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)exportingPeerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcd991
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x30fcd8b5
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x30fcd871
+ (id)createTransactionLogLocationForPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash logFilename:(id)filename andUbiquityRootLocation:(id)location;	// 0x30fcd8f9
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)temporaryOrStagingLogLocation;	// 0x30fcd82d
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andLog:(id)log;	// 0x30fcdc39
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andStore:(id)store;	// 0x30fcdb29
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x30fcdcb5
+ (id)createUbiquityLocationForPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x30fcc5ad
+ (id)createUbiquityLocationForRootPath:(id)rootPath;	// 0x30fcc309
+ (id)createUbiquityLocationForRootURL:(id)rootURL;	// 0x30fcc355
+ (id)createUbiquityLocationForSubpath:(id)subpath ofPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x30fcc4dd
+ (id)createUbiquityLocationForSubpath:(id)subpath ofUbiquityRootPath:(id)ubiquityRootPath;	// 0x30fcc40d
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcc369
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootPath:(id)ubiquityRootPath;	// 0x30fcc3d1
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootURL:(id)ubiquityRootURL;	// 0x30fcc39d
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)anId storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x30fcdd41
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)receiptFileLocation;	// 0x30fcdda5
+ (id)createVersionHashStringForModel:(id)model;	// 0x30fcd1f5
+ (void)initialize;	// 0x30fcab25
+ (BOOL)isUbiquityLocationPath:(id)path equalToPath:(id)path2;	// 0x30fce5d1
+ (id)locationSentinel;	// 0x30fce881
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)documents;	// 0x30fce4a5
+ (void)setLocationSentinel:(id)sentinel;	// 0x30fce891
- (id)init;	// 0x30fcab65
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x30fcac0d
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x30fcac51
- (id)copyWithZone:(NSZone *)zone;	// 0x30fcac81
- (id)createFullPath;	// 0x30fcb4d9
- (id)createFullURL;	// 0x30fcc039
- (void)dealloc;	// 0x30fcae11
- (id)description;	// 0x30fcaf01
// declared property getter: - (id)exportingPeerID;	// 0x30fce8ed
- (BOOL)fileExistsAtLocation;	// 0x30fcb191
- (BOOL)fileExistsAtLocationWithLocalPeerID:(id)localPeerID error:(id *)error;	// 0x30fcb1ad
// declared property getter: - (id)filename;	// 0x30fce91d
// declared property getter: - (unsigned)hash;	// 0x30fce92d
- (BOOL)isEqual:(id)equal;	// 0x30fcd0d9
- (BOOL)isEqualToURL:(id)url;	// 0x30fcd14d
// declared property getter: - (id)modelVersionHash;	// 0x30fce90d
// declared property getter: - (id)otherPathComponents;	// 0x30fce93d
- (void)setExportingPeerID:(id)anId;	// 0x30fcc0a5
- (void)setFilename:(id)filename;	// 0x30fcc159
- (void)setHash:(unsigned)hash;	// 0x30fcc249
- (void)setModelVersionHash:(id)hash;	// 0x30fcc11d
- (void)setOtherPathComponents:(id)components;	// 0x30fcc195
- (void)setStoreName:(id)name;	// 0x30fcc0e1
- (void)setUbiquityLocationType:(int)type;	// 0x30fcc095
- (void)setUbiquityRootLocation:(id)location;	// 0x30fcc20d
- (void)setUbiquityRootLocationPath:(id)path;	// 0x30fcc1d1
// declared property getter: - (id)storeName;	// 0x30fce8fd
// declared property getter: - (int)ubiquityLocationType;	// 0x30fce8dd
// declared property getter: - (id)ubiquityRootLocation;	// 0x30fcc2d9
// declared property getter: - (id)ubiquityRootLocationPath;	// 0x30fce8cd
- (void)updateHash;	// 0x30fcc259
// declared property getter: - (BOOL)usesBaselineDirectory;	// 0x30fcb0f5
// declared property getter: - (BOOL)usesBaselineStagingDirectory;	// 0x30fcb08d
// declared property getter: - (BOOL)usesCurrentBaselineDirectory;	// 0x30fcb035
// declared property getter: - (BOOL)usesStagingLogDirectory;	// 0x30fcaf85
// declared property getter: - (BOOL)usesTemporaryLogDirectory;	// 0x30fcafdd
@end
