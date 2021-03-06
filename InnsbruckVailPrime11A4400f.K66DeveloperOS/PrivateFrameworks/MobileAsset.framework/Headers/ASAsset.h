/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import </libobjc.A.h>
#import "MobileAsset-Structs.h"

@class NSURL, NSString, NSDictionary;

@interface ASAsset : NSObject {
	NSString *_assetType;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSDictionary *_downloadOptions;	// 12 = 0xc
	NSString *_clientName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	MobileAsset *_cfAsset;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *assetType;	// G=0x3146f481; @synthesize=_assetType
@property(readonly, assign, nonatomic) NSDictionary *attributes;	// G=0x3146e659; 
@property(retain, nonatomic) NSString *clientName;	// G=0x3146f5b5; S=0x3146f5ed; 
@property(retain, nonatomic) NSDictionary *downloadOptions;	// G=0x3146f4b5; S=0x3146f4c5; @synthesize=_downloadOptions
@property(readonly, assign, nonatomic) NSDictionary *fullAttributes;	// G=0x3146f631; 
@property(assign, nonatomic) int garbageCollectionBehavior;	// G=0x3146e891; S=0x3146e96d; 
@property(readonly, retain) NSString *identifier;	// G=0x3146f6bd; converted property
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x3146e63d; 
@property(copy, nonatomic) id progressHandler;	// G=0x3146f491; S=0x3146f4a5; @synthesize=_progressHandler
@property(readonly, assign, nonatomic) int state;	// G=0x3146e799; 
- (id)initWithAssetType:(id)assetType attributes:(id)attributes;	// 0x3146f4d5
- (void)_downloadWithOptions:(id)options shouldFireCallback:(BOOL)callback;	// 0x3146ea1d
- (id)_getLocalAttribute:(id)attribute;	// 0x3146f3a5
- (void)adjustDownloadOptions:(id)options completion:(id)completion;	// 0x3146e9f9
// declared property getter: - (id)assetType;	// 0x3146f481
// declared property getter: - (id)attributes;	// 0x3146e659
- (void)beginDownloadWithOptions:(id)options;	// 0x3146eef1
- (void)cancelDownload:(id)download;	// 0x3146f14d
- (BOOL)cancelDownloadAndReturnError:(id *)error;	// 0x3146f20d
// declared property getter: - (id)clientName;	// 0x3146f5b5
- (void)dealloc;	// 0x3146e471
- (id)description;	// 0x3146e5e5
// declared property getter: - (id)downloadOptions;	// 0x3146f4b5
// declared property getter: - (id)fullAttributes;	// 0x3146f631
// declared property getter: - (int)garbageCollectionBehavior;	// 0x3146e891
- (unsigned)hash;	// 0x3146e53d
// converted property getter: - (id)identifier;	// 0x3146f6bd
- (BOOL)isEqual:(id)equal;	// 0x3146e565
- (BOOL)isPresentOnDisk;	// 0x3146f7e9
// declared property getter: - (id)localURL;	// 0x3146e63d
- (MobileAsset *)mobileAsset;	// 0x3146f395
- (void)pauseDownload:(id)download;	// 0x3146ef05
- (BOOL)pauseDownloadAndReturnError:(id *)error;	// 0x3146efc5
// declared property getter: - (id)progressHandler;	// 0x3146f491
- (void)purge:(id)purge;	// 0x3146f271
- (BOOL)purgeAndReturnError:(id *)error;	// 0x3146f331
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)available error:(id *)error;	// 0x3146e9b9
- (void)resumeDownload:(id)download;	// 0x3146f029
- (BOOL)resumeDownloadAndReturnError:(id *)error;	// 0x3146f0e9
// declared property setter: - (void)setClientName:(id)name;	// 0x3146f5ed
// declared property setter: - (void)setDownloadOptions:(id)options;	// 0x3146f4c5
// declared property setter: - (void)setGarbageCollectionBehavior:(int)behavior;	// 0x3146e96d
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x3146f4a5
// declared property getter: - (int)state;	// 0x3146e799
@end

