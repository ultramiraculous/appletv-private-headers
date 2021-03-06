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
+ (id)enabledKeyboardLanguages;	// 0x315c8d01
- (id)initWithDescriptors:(CFArrayRef)descriptors andMandatoryAttributes:(CFSetRef)attributes withBlock:(id)block;	// 0x315c6a61
- (id).cxx_construct;	// 0x315c8f71
- (void).cxx_destruct;	// 0x315c8f39
- (BOOL)activateFontsFromAssetURL:(id)assetURL;	// 0x315c8611
- (BOOL)assetStalled:(id)stalled;	// 0x315c782d
- (id)availableMobileAssets:(BOOL)assets error:(id *)error;	// 0x315c70a9
- (unsigned long)calculateDownloadSize:(id)size;	// 0x315c7695
- (BOOL)callProgressCallbak:(unsigned)callbak;	// 0x315c6c75
- (void)dealloc;	// 0x315c6b59
- (id)doFinalMatching;	// 0x315c8355
- (void)downloadFontAssets;	// 0x315c6da9
- (BOOL)executeDownloadingFontAssets:(id)assets forDescriptors:(id)descriptors andFontFilePaths:(id)paths;	// 0x315c78b5
- (id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)descriptor from:(id)from withFailInfo:(BOOL *)failInfo andFontFilePaths:(id)paths;	// 0x315c7135
- (Class)getASAssetQueryClass;	// 0x315c8795
- (id)getUnmatchedDescriptors;	// 0x315c6ec9
- (id)mobileAssetsForUnmatched:(id)unmatched andFontFilePaths:(id)paths;	// 0x315c7399
- (id)preciousFontLanguages;	// 0x315c8bd5
- (void)setDownloadOptionsForMobileAsset;	// 0x315c6c15
- (void)setGarbageCollectionBehaviorForAsset:(id)asset;	// 0x315c8abd
- (void)setProgressParam:(id)param forKey:(id)key;	// 0x315c6d75
- (BOOL)shoudTryServer;	// 0x315c7395
@end

