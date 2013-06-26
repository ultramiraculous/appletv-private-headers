/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocol.h"
#import "CoreMediaStream-Structs.h"

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
	MSPSPCContext _context;	// 12 = 0xc
	NSArray *_assetCollectionsInFlight;	// 96 = 0x60
	MSPSPCUCContext _UCContext;	// 100 = 0x64
}
@property(assign) id delegate;	// G=0x304df8f5; S=0x304df921; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x304df94d
- (void).cxx_destruct;	// 0x304e140d
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x304e1255
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x304e1129
- (void)_coreProtocolDidFinishUCResults:(id)_coreProtocol error:(id)error;	// 0x304e1339
- (BOOL)_insertInfoAboutAsset:(id)asset intoDictionary:(id)dictionary outError:(id *)error;	// 0x304dfc21
- (id)_metadataDictForAsset:(id)asset outError:(id *)error;	// 0x304dff81
- (id)_metadataDictForAssetCollection:(id)assetCollection outError:(id *)error;	// 0x304e0609
- (id)_missingAssetFieldErrorWithFieldName:(id)fieldName;	// 0x304dfb75
- (void)_resetConnectionVariables;	// 0x304dff69
- (void)abort;	// 0x304e10f9
- (void)dealloc;	// 0x304dfb0d
// converted property getter: - (id)delegate;	// 0x304df8f5
- (void)sendMetadataForAssetCollections:(id)assetCollections;	// 0x304e0a11
- (void)sendUploadCompleteForAssetCollections:(id)assetCollections;	// 0x304e0f19
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x304df921
@end
