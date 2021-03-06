/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocation : NSObject {
@private
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
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x32397bc9; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *filename;	// G=0x32397b99; @synthesize=_filename
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x32397b89; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x32397ba9; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *otherPathComponents;	// G=0x32397b79; @synthesize=_otherPathComponents
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x32397bb9; @synthesize=_storeName
@property(readonly, assign, nonatomic) int ubiquityLocationType;	// G=0x32397bd9; @synthesize=_ubiquityLocationType
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32399d51; 
@property(readonly, assign, nonatomic) NSString *ubiquityRootLocationPath;	// G=0x32397be9; @synthesize=_ubiquityRootLocationPath
@property(readonly, assign, nonatomic) BOOL usesBaselineDirectory;	// G=0x3239acf5; 
@property(readonly, assign, nonatomic) BOOL usesBaselineStagingDirectory;	// G=0x3239ad75; 
@property(readonly, assign, nonatomic) BOOL usesCurrentBaselineDirectory;	// G=0x3239ada5; 
@property(readonly, assign, nonatomic) BOOL usesStagingLogDirectory;	// G=0x3239ae3d; 
@property(readonly, assign, nonatomic) BOOL usesTemporaryLogDirectory;	// G=0x3239adf1; 
+ (id)createArrayOfSubLocationsAtLocation:(id)location error:(id *)error;	// 0x32397c9d
+ (id)createBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32398d01
+ (id)createBaselineStagingLocation:(int)location forStoreName:(id)storeName modelVersionHash:(id)hash andFilename:(id)filename withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32398be5
+ (id)createCurrentBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash forFileNamed:(id)fileNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32398ae1
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)oldManagedObjectModel andNewManagedObjectModel:(id)model inUbiquityPeerStoreLocation:(id)ubiquityPeerStoreLocation;	// 0x32397fd5
+ (id)createMetadataPeerLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32398f81
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x32398f09
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32399051
+ (id)createMetadataStoreLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32398fd9
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)localPeerID storeName:(id)name UUID:(id)uuid andUbiquityRootLocation:(id)location;	// 0x32398e15
+ (id)createPeerRootLocationForPeerID:(id)peerID withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x323988e9
+ (id)createPeerStoreLocationForPeerID:(id)peerID andStoreName:(id)name withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3239887d
+ (id)createPeerStoreVersionLocationForPeerID:(id)peerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x323987fd
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)exportingPeerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32398941
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x32398a21
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x32398a61
+ (id)createTransactionLogLocationForPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash logFilename:(id)filename andUbiquityRootLocation:(id)location;	// 0x3239898d
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)temporaryOrStagingLogLocation;	// 0x32398aa1
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andLog:(id)log;	// 0x323986ad
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andStore:(id)store;	// 0x32398729
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x32398601
+ (id)createUbiquityLocationForPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x323990cd
+ (id)createUbiquityLocationForRootPath:(id)rootPath;	// 0x32399bf9
+ (id)createUbiquityLocationForRootURL:(id)rootURL;	// 0x32399be5
+ (id)createUbiquityLocationForSubpath:(id)subpath ofPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x3239998d
+ (id)createUbiquityLocationForSubpath:(id)subpath ofUbiquityRootPath:(id)ubiquityRootPath;	// 0x32399a65
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32399bad
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootPath:(id)ubiquityRootPath;	// 0x32399b39
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootURL:(id)ubiquityRootURL;	// 0x32399b75
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)anId storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x3239859d
+ (id)createVersionHashStringForModel:(id)model;	// 0x32399095
+ (BOOL)isUbiquityLocationPath:(id)path equalToPath:(id)path2;	// 0x32397ee1
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)documents;	// 0x32397f25
- (id)init;	// 0x32397bf9
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x3239b1e9
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x3239b1b5
- (id)copyWithZone:(NSZone *)zone;	// 0x3239b015
- (id)createFullPath;	// 0x3239a019
- (id)createFullURL;	// 0x32399fbd
- (void)dealloc;	// 0x3239af19
- (id)description;	// 0x3239ae89
// declared property getter: - (id)exportingPeerID;	// 0x32397bc9
- (BOOL)fileExistsAtLocation;	// 0x3239ab15
// declared property getter: - (id)filename;	// 0x32397b99
// declared property getter: - (unsigned)hash;	// 0x32397b89
- (BOOL)isEqual:(id)equal;	// 0x32399cd9
- (BOOL)isEqualToURL:(id)url;	// 0x32399c31
// declared property getter: - (id)modelVersionHash;	// 0x32397ba9
// declared property getter: - (id)otherPathComponents;	// 0x32397b79
- (void)setExportingPeerID:(id)anId;	// 0x32399f7d
- (void)setFilename:(id)filename;	// 0x32399ebd
- (void)setHash:(unsigned)hash;	// 0x32397b69
- (void)setModelVersionHash:(id)hash;	// 0x32399efd
- (void)setOtherPathComponents:(id)components;	// 0x32399e7d
- (void)setStoreName:(id)name;	// 0x32399f3d
- (void)setUbiquityLocationType:(int)type;	// 0x32397b59
- (void)setUbiquityRootLocation:(id)location;	// 0x32399dfd
- (void)setUbiquityRootLocationPath:(id)path;	// 0x32399e3d
// declared property getter: - (id)storeName;	// 0x32397bb9
// declared property getter: - (int)ubiquityLocationType;	// 0x32397bd9
// declared property getter: - (id)ubiquityRootLocation;	// 0x32399d51
// declared property getter: - (id)ubiquityRootLocationPath;	// 0x32397be9
- (void)updateHash;	// 0x32399d7d
// declared property getter: - (BOOL)usesBaselineDirectory;	// 0x3239acf5
// declared property getter: - (BOOL)usesBaselineStagingDirectory;	// 0x3239ad75
// declared property getter: - (BOOL)usesCurrentBaselineDirectory;	// 0x3239ada5
// declared property getter: - (BOOL)usesStagingLogDirectory;	// 0x3239ae3d
// declared property getter: - (BOOL)usesTemporaryLogDirectory;	// 0x3239adf1
@end

