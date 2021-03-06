/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSBundle : NSObject {
	unsigned _flags;	// 4 = 0x4
	id _cfBundle;	// 8 = 0x8
	unsigned _reserved2;	// 12 = 0xc
	Class _principalClass;	// 16 = 0x10
	id _tmp1;	// 20 = 0x14
	id _tmp2;	// 24 = 0x18
	void *_reserved1;	// 28 = 0x1c
	void *_reserved0;	// 32 = 0x20
}
@property(readonly, assign) Class principalClass;	// G=0x373330ed; converted property
+ (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x37362aad
+ (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x37362ba9
+ (id)allBundles;	// 0x37346625
+ (id)allFrameworks;	// 0x37346289
+ (id)bundleForClass:(Class)aClass;	// 0x3730fc21
+ (id)bundleWithIdentifier:(id)identifier;	// 0x3732edd5
+ (id)bundleWithPath:(id)path;	// 0x3732dd8d
+ (id)bundleWithURL:(id)url;	// 0x37363159
+ (id)debugDescription;	// 0x373639c9
+ (id)findBundleResourceURLs:(id)urls callingMethod:(SEL)method bundleURL:(id)url languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x37362539
+ (id)findBundleResourceURLsCallingMethod:(SEL)method baseURL:(id)url passingTest:(id)test;	// 0x373628e1
+ (id)findBundleResources:(id)resources callingMethod:(SEL)method directory:(id)directory languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x373623a1
+ (id)loadedBundles;	// 0x373637e5
+ (id)mainBundle;	// 0x373067a9
+ (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x37362a59
+ (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x37362ae5
+ (id)preferredLocalizationsFromArray:(id)array;	// 0x37363b51
+ (id)preferredLocalizationsFromArray:(id)array forPreferences:(id)preferences;	// 0x37363b81
+ (void)setSystemLanguages:(id)languages;	// 0x37362e81
- (id)initWithPath:(id)path;	// 0x37316bfd
- (id)initWithURL:(id)url;	// 0x3736307d
- (id)URLForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x373633b9
- (id)URLForResource:(id)resource withExtension:(id)extension;	// 0x3733eda9
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory;	// 0x37362c2d
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x37362bd9
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory;	// 0x37362e35
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x37362d31
- (CFBundleRef)_cfBundle;	// 0x373069c1
- (id)_compatibility_bundleURL;	// 0x37363209
- (id)_compatility_bundlePath;	// 0x37363199
- (id)_computeExecutablePath;	// 0x37333a7d
- (void)_initInfoDictionary;	// 0x37314b25
- (id)_pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x37363a91
- (id)_pathsForResourcesOfType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x37363aa1
- (id)_regionsArray;	// 0x37363a81
- (id)appStoreReceiptURL;	// 0x3736333d
- (id)builtInPlugInsPath;	// 0x37363555
- (id)builtInPlugInsURL;	// 0x37363595
- (id)bundleIdentifier;	// 0x37309f21
- (id)bundleLanguages;	// 0x373635fd
- (id)bundlePath;	// 0x3730a28d
- (id)bundleURL;	// 0x373460a5
- (Class)classNamed:(id)named;	// 0x3735523d
- (void)dealloc;	// 0x37316c61
- (id)defaultsDictionary;	// 0x37363725
- (id)description;	// 0x373639f1
- (id)developmentLocalization;	// 0x37363b09
- (id)executableArchitectures;	// 0x37363ca1
- (id)executablePath;	// 0x3734a8f1
- (id)executableURL;	// 0x373632f9
- (void)finalize;	// 0x37362f05
- (id)findBundleResourceURLsCallingMethod:(SEL)method passingTest:(id)test;	// 0x37362779
- (id)infoDictionary;	// 0x37309f59
- (void)invalidateResourceCache;	// 0x373636f1
- (BOOL)isLoaded;	// 0x37345f6d
- (BOOL)load;	// 0x3733313d
- (BOOL)loadAndReturnError:(id *)error;	// 0x37333155
- (id)localizations;	// 0x37345961
- (id)localizationsToSearch;	// 0x37363b2d
- (id)localizedInfoDictionary;	// 0x373314a5
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x37306975
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey;	// 0x37331451
- (id)pathForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x3736336d
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x373110f5
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x37349921
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x37363ab1
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x3734fded
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x37362d7d
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x37363ac1
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x37362c79
- (id)preferredLocalizations;	// 0x37363ad1
- (BOOL)preflightAndReturnError:(id *)error;	// 0x37363bb5
// converted property getter: - (Class)principalClass;	// 0x373330ed
- (id)privateFrameworksPath;	// 0x37336d31
- (id)privateFrameworksURL;	// 0x37363409
- (oneway void)release;	// 0x3731afb1
- (id)resourcePath;	// 0x3732ddcd
- (id)resourceURL;	// 0x373632b5
- (id)sharedFrameworksPath;	// 0x3736344d
- (id)sharedFrameworksURL;	// 0x3736348d
- (id)sharedSupportPath;	// 0x373634d1
- (id)sharedSupportURL;	// 0x37363511
- (BOOL)unload;	// 0x37362e95
- (unsigned)versionNumber;	// 0x373635d9
@end

