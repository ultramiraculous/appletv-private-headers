/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class NSArray, NSString, SSURLRequestProperties, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x32cab23d; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x32cab301; 
@property(readonly, assign) int assetType;	// G=0x32cab8d9; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x32cab8e9; 
@property(readonly, assign) NSString *downloadPath;	// G=0x32cab91d; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x32cab979; 
@property(readonly, assign) long long fileSize;	// G=0x32cab93d; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x32cab939; 
@property(readonly, assign) NSArray *sinfs;	// G=0x32cab221; 
+ (long long)_existsMessage;	// 0x32cab291
+ (long long)_getExternalValuesMessage;	// 0x32cab299
+ (long long)_getValueMessage;	// 0x32cab2a1
+ (long long)_setValuesMessage;	// 0x32cab2a9
+ (id)assetWithURL:(id)url type:(int)type;	// 0x32cab82d
- (id)initWithURLRequest:(id)urlrequest;	// 0x32cab125
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x32cab8ad
// declared property getter: - (id)URLRequest;	// 0x32cab23d
// declared property getter: - (id)URLRequestProperties;	// 0x32cab301
- (id)_copyURLRequestProperties;	// 0x32cab9a9
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x32cab329
- (int)_legacyAssetType;	// 0x32cab705
- (void)_resetLocalIVars;	// 0x32cab2b1
// converted property getter: - (int)assetType;	// 0x32cab8d9
- (long long)bytesDownloaded;	// 0x32cab1e5
- (id)copyXPCEncoding;	// 0x32cab715
- (void)dealloc;	// 0x32cab199
// declared property getter: - (id)downloadFileName;	// 0x32cab8e9
// declared property getter: - (id)downloadPath;	// 0x32cab91d
// declared property getter: - (long long)fileSize;	// 0x32cab93d
// declared property getter: - (id)finalizedPath;	// 0x32cab939
// declared property getter: - (BOOL)isExternal;	// 0x32cab979
// declared property getter: - (id)sinfs;	// 0x32cab221
@end
