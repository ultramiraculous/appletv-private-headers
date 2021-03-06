/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <NSObject.h> // Unknown library
#import "CoreText-Structs.h"

@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {
	TCFRef<const __CFArray *> fDescriptors;	// 4 = 0x4
	TCFRef<const __CFSet *> fMandatoryAttributes;	// 8 = 0x8
	id fProgressCallbackBlock;	// 12 = 0xc
	NSMutableDictionary *fProgressParams;	// 16 = 0x10
	NSMutableDictionary *fDownloadOptions;	// 20 = 0x14
	NSSet *fPreciousFontLanguages;	// 24 = 0x18
}
+ (id)availableFontAttributesArray;	// 0x346c9839
+ (id)displayNameForCurrentUser:(id)currentUser;	// 0x346c96b9
+ (id)enabledKeyboardLanguages;	// 0x346c9481
+ (Class)getASAssetQueryClass;	// 0x346c8f15
+ (BOOL)shouldTryServer;	// 0x346c7999
- (id)initWithDescriptors:(CFArrayRef)descriptors andMandatoryAttributes:(CFSetRef)attributes withBlock:(id)block;	// 0x346c7009
- (id).cxx_construct;	// 0x346c9c99
- (void).cxx_destruct;	// 0x346c9c5d
- (BOOL)activateFontsFromAssetURL:(id)assetURL;	// 0x346c8d91
- (BOOL)assetStalled:(id)stalled;	// 0x346c7ee5
- (id)availableMobileAssets:(BOOL)assets error:(id *)error;	// 0x346c7651
- (unsigned long)calculateDownloadSize:(id)size;	// 0x346c7d4d
- (BOOL)callProgressCallbak:(unsigned)callbak;	// 0x346c721d
- (void)dealloc;	// 0x346c7101
- (id)doFinalMatching;	// 0x346c8ad5
- (void)downloadFontAssets;	// 0x346c7351
- (BOOL)executeDownloadingFontAssets:(id)assets forDescriptors:(id)descriptors andFontFilePaths:(id)paths;	// 0x346c8025
- (id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)descriptor from:(id)from withFailInfo:(BOOL *)failInfo andFontFilePaths:(id)paths;	// 0x346c76e9
- (id)getUnmatchedDescriptors;	// 0x346c7471
- (id)mobileAssetsForUnmatched:(id)unmatched andFontFilePaths:(id)paths;	// 0x346c7a01
- (id)preciousFontLanguages;	// 0x346c9355
- (void)setDownloadOptionsForMobileAsset;	// 0x346c71bd
- (void)setGarbageCollectionBehaviorForAsset:(id)asset;	// 0x346c923d
- (void)setProgressParam:(id)param forKey:(id)key;	// 0x346c731d
@end

