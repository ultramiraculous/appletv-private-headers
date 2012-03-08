/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStorageProtocol.h"
#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_MMCSDirPath;	// 8 = 0x8
	MMCSEngineRef _engine;	// 12 = 0xc
	NSString *_engineDirPath;	// 16 = 0x10
}
@property(readonly, assign) MMCSEngineRef engine;	// G=0x36a5d839; @synthesize=_engine
@property(readonly, assign) NSString *personID;	// G=0x36a5d829; @synthesize=_personID
+ (id)computeItemIDForAsset:(id)asset;	// 0x36a5d5f5
- (id)initWithPersonID:(id)personID path:(id)path;	// 0x36a5cf6d
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x36a5d551
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x36a5d57d
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x36a5d579
- (void)_putItemDone:(unsigned long long)done error:(id)error;	// 0x36a5d5a5
- (void)_requestCompleted;	// 0x36a5d5cd
- (void)abort;	// 0x36a5d455
- (void)deactivate;	// 0x36a5d315
- (void)deactivateRemoveAllFiles:(BOOL)files;	// 0x36a5d329
- (void)dealloc;	// 0x36a5d415
- (void)didFinishUsingAssets:(id)assets;	// 0x36a5d469
// declared property getter: - (MMCSEngineRef)engine;	// 0x36a5d839
// declared property getter: - (id)personID;	// 0x36a5d829
@end
