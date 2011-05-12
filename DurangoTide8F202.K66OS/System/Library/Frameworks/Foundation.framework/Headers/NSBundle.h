/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSBundle : NSObject {
@private
	unsigned _flags;	// 4 = 0x4
	id _cfBundle;	// 8 = 0x8
	unsigned _refCount;	// 12 = 0xc
	Class _principalClass;	// 16 = 0x10
	id _tmp1;	// 20 = 0x14
	id _tmp2;	// 24 = 0x18
	void *_reserved1;	// 28 = 0x1c
	void *_reserved0;	// 32 = 0x20
}
@property(readonly, assign) Class principalClass;	// G=0x3242c065; converted property
+ (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x32457b79
+ (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x32457aa9
+ (id)allBundles;	// 0x3244e391
+ (id)allFrameworks;	// 0x3244e001
+ (id)bundleForClass:(Class)aClass;	// 0x3241ee45
+ (id)bundleWithIdentifier:(id)identifier;	// 0x324303c1
+ (id)bundleWithPath:(id)path;	// 0x3242b1e5
+ (id)bundleWithURL:(id)url;	// 0x32456b61
+ (id)debugDescription;	// 0x3245694d
+ (id)findBundleResourceURLs:(id)urls callingMethod:(SEL)method bundleURL:(id)url languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x32457389
+ (id)findBundleResources:(id)resources callingMethod:(SEL)method directory:(id)directory languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x324576e1
+ (id)loadedBundles;	// 0x32456971
+ (id)mainBundle;	// 0x324109a1
+ (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x32457ba1
+ (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x32457acd
+ (id)preferredLocalizationsFromArray:(id)array;	// 0x324575d5
+ (id)preferredLocalizationsFromArray:(id)array forPreferences:(id)preferences;	// 0x324575f9
+ (void)setSystemLanguages:(id)languages;	// 0x32456825
- (id)initWithPath:(id)path;	// 0x3242b21d
- (id)initWithURL:(id)url;	// 0x32456efd
- (id)URLForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x3245748d
- (id)URLForResource:(id)resource withExtension:(id)extension;	// 0x324579a5
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory;	// 0x324579e1
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x32457a61
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory;	// 0x324577ed
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x324578c9
- (CFBundleRef)_cfBundle;	// 0x32410b81
- (id)_computeExecutablePath;	// 0x3242bc75
- (void)_initInfoDictionary;	// 0x32428a45
- (id)_pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x3245690d
- (id)_pathsForResourcesOfType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x324568e9
- (id)_regionsArray;	// 0x32456939
- (id)builtInPlugInsPath;	// 0x324572a1
- (id)builtInPlugInsURL;	// 0x32457571
- (id)bundleIdentifier;	// 0x32418acd
- (id)bundleLanguages;	// 0x32456a91
- (id)bundlePath;	// 0x32418d05
- (id)bundleURL;	// 0x3242ad5d
- (Class)classNamed:(id)named;	// 0x32446999
- (void)dealloc;	// 0x324310a5
- (id)defaultsDictionary;	// 0x324569dd
- (id)description;	// 0x32457151
- (id)developmentLocalization;	// 0x32457321
- (id)executableArchitectures;	// 0x32457359
- (id)executablePath;	// 0x32448b7d
- (id)executableURL;	// 0x32457459
- (void)finalize;	// 0x32456fd9
- (id)infoDictionary;	// 0x32418afd
- (void)invalidateResourceCache;	// 0x324572f9
- (BOOL)isLoaded;	// 0x3242b2a1
- (BOOL)load;	// 0x3242d3a9
- (BOOL)loadAndReturnError:(id *)error;	// 0x3242b2dd
- (id)localizations;	// 0x324575a5
- (id)localizationsToSearch;	// 0x3245733d
- (id)localizedInfoDictionary;	// 0x3243d2e5
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x32410b49
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey;	// 0x3243d2a1
- (id)pathForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x324571d9
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x32417459
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x32457a1d
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x324568bd
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x3244a3d5
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x32457825
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x32456899
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x32457901
- (id)preferredLocalizations;	// 0x32456865
- (BOOL)preflightAndReturnError:(id *)error;	// 0x3245761d
// converted property getter: - (Class)principalClass;	// 0x3242c065
- (id)privateFrameworksPath;	// 0x32442bed
- (id)privateFrameworksURL;	// 0x324574d5
- (oneway void)release;	// 0x3242d3c1
- (id)resourcePath;	// 0x32432989
- (id)resourceURL;	// 0x32457425
- (id)retain;	// 0x3241fe49
- (unsigned)retainCount;	// 0x32456d55
- (id)sharedFrameworksPath;	// 0x32457229
- (id)sharedFrameworksURL;	// 0x32457509
- (id)sharedSupportPath;	// 0x32457265
- (id)sharedSupportURL;	// 0x3245753d
- (BOOL)unload;	// 0x32456d0d
- (unsigned)versionNumber;	// 0x324572dd
@end
