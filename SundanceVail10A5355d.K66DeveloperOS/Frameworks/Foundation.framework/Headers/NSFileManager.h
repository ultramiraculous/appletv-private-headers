/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x34662669; S=0x346a83cd; converted property
+ (id)defaultManager;	// 0x3463cc89
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x346a74a9
- (id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id *)date error:(id *)error;	// 0x346aabad
- (id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;	// 0x346aa87d
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x34687289
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x346a71c1
- (id)_URLForTrashingItemAtURL:(id)url create:(BOOL)create error:(id *)error;	// 0x346a74a5
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x346a9725
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x346a9755
- (id)_displayPathForPath:(id)path;	// 0x346a7805
- (id)_info;	// 0x34662691
- (void)_performRemoveFileAtPath:(id)path;	// 0x346f2c81
- (BOOL)_processHasUbiquityContainerEntitlement;	// 0x346aaec5
- (void)_registerForUbiquityAccountChangeNotifications;	// 0x346aaf49
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x346f2cc9
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x346f2dbd
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x346f31ad
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x346f349d
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x346f2c35
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x34666791
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x346f2c39
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x346f2ba5
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x346f31fd
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x346f3075
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x346f3499
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x346f2ed5
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x34667309
- (id)_web_startupVolumeName_nowarn;	// 0x346f31b1
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x346f2ec1
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x3465e1d5
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x3466fd7d
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x346a7a9d
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x346a7b1d
- (id)componentsToDisplayForPath:(id)path;	// 0x346a8131
- (id)contentsAtPath:(id)path;	// 0x3467d711
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x346a7d75
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x346667cd
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x346a6e41
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x346a8601
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x346a8721
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x346a7d01
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x346409d5
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x346a9595
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x3467cefd
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x346a7d51
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x346a9785
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id *)error;	// 0x346a9861
- (id)currentDirectoryPath;	// 0x346a7a39
- (void)dealloc;	// 0x3465e8b5
// converted property getter: - (id)delegate;	// 0x34662669
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x3467ef75
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x346a79d5
- (id)directoryContentsAtPath:(id)path;	// 0x346a7cb1
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x346a7c85
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x346667fd
- (id)displayNameAtPath:(id)path;	// 0x346a7c1d
- (id)enumeratorAtPath:(id)path;	// 0x3467ee25
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x34687455
- (BOOL)evictUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x346aa629
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x346a8169
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x346a8145
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x346a7b01
- (BOOL)fileExistsAtPath:(id)path;	// 0x3463cce1
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x34640c75
- (id)fileSystemAttributesAtPath:(id)path;	// 0x346a8119
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x34640e49
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x346a83f5
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x346a84f9
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x346a8d4d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x346a8e51
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x346a88a1
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x346a89a5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x34662a39
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x34662591
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x3463cf3d
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x346a7b51
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x346a7b41
- (BOOL)isReadableFileAtPath:(id)path;	// 0x3466ad99
- (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x346aa44d
- (BOOL)isWritableFileAtPath:(id)path;	// 0x3465ec81
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x346a8f59
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x346a9079
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x346a6e39
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x346a8aad
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x346a8bcd
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x346a7d3d
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x346a8261
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x346a7c6d
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x34660fad
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x346a91fd
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x346a99c5
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x34685801
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x346a83cd
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x346a82ed
- (BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id *)error;	// 0x346a9f4d
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x346a9ad5
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x3464083d
- (id)subpathsAtPath:(id)path;	// 0x346a7cd9
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x346a9655
- (BOOL)trashItemAtURL:(id)url resultingItemURL:(id *)url2 error:(id *)error;	// 0x346a927d
- (id)ubiquityIdentityToken;	// 0x346aaef9
@end

