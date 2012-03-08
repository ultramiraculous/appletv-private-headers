/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebCorePluginInfo.h"
#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSBundle;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : NSObject <WebCorePluginInfo> {
@private
	NSMutableSet *pluginDatabases;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSString *pluginDescription;	// 16 = 0x10
	NSBundle *bundle;	// 20 = 0x14
	CFBundleRef cfBundle;	// 24 = 0x18
	NSDictionary *MIMEToDescription;	// 28 = 0x1c
	NSDictionary *MIMEToExtensions;	// 32 = 0x20
	NSMutableDictionary *extensionToMIME;	// 36 = 0x24
	/*function-pointer*/ void *BP_CreatePluginMIMETypesPreferences;	// 40 = 0x28
}
@property(readonly, retain) NSBundle *bundle;	// G=0x304fb9ed; converted property
@property(retain) NSString *name;	// G=0x304fc5a9; S=0x304fb651; converted property
@property(retain) NSString *path;	// G=0x304fb70d; S=0x3050e961; converted property
@property(retain) NSString *pluginDescription;	// G=0x304fc5b9; S=0x304fb689; converted property
+ (void)initialize;	// 0x304e1d7d
+ (id)pluginWithPath:(id)path;	// 0x304faa5d
+ (id)preferredLocalizationName;	// 0x3050ea59
- (id)initWithPath:(id)path;	// 0x304fac0d
- (id)MIMETypeEnumerator;	// 0x304fb779
- (id)MIMETypeForExtension:(id)extension;	// 0x3050e941
// converted property getter: - (id)bundle;	// 0x304fb9ed
- (void)createPropertyListFile;	// 0x3050e879
- (void)dealloc;	// 0x3050eafd
- (id)description;	// 0x3050e999
- (id)descriptionForMIMEType:(id)mimetype;	// 0x304fc5e9
- (id)extensionEnumerator;	// 0x3050e921
- (id)extensionsForMIMEType:(id)mimetype;	// 0x304fc5c9
- (id)filename;	// 0x304fb631
- (void)finalize;	// 0x3050ea9d
- (BOOL)getPluginInfoFromBundleAndMIMEDictionary:(id)bundleAndMIMEDictionary;	// 0x304fb1a9
- (BOOL)getPluginInfoFromPLists;	// 0x304fb05d
- (BOOL)isJavaPlugIn;	// 0x304fb9fd
- (BOOL)isNativeLibraryData:(id)data;	// 0x304fad51
- (BOOL)isQuickTimePlugIn;	// 0x304fb985
- (BOOL)load;	// 0x304fd8c5
// converted property getter: - (id)name;	// 0x304fc5a9
- (id)pListForPath:(id)path createFile:(BOOL)file;	// 0x3050e8b9
// converted property getter: - (id)path;	// 0x304fb70d
- (id)pathByResolvingSymlinksAndAliasesInPath:(id)path;	// 0x304fad39
// converted property getter: - (id)pluginDescription;	// 0x304fc5b9
- (void)setMIMEToDescriptionDictionary:(id)descriptionDictionary;	// 0x304fb5f9
- (void)setMIMEToExtensionsDictionary:(id)extensionsDictionary;	// 0x304fb4d1
// converted property setter: - (void)setName:(id)name;	// 0x304fb651
// converted property setter: - (void)setPath:(id)path;	// 0x3050e961
// converted property setter: - (void)setPluginDescription:(id)description;	// 0x304fb689
- (void)unload;	// 0x3050e875
- (unsigned long)versionNumber;	// 0x3050ea85
- (void)wasAddedToPluginDatabase:(id)pluginDatabase;	// 0x304fb71d
- (void)wasRemovedFromPluginDatabase:(id)pluginDatabase;	// 0x3050ea39
@end
