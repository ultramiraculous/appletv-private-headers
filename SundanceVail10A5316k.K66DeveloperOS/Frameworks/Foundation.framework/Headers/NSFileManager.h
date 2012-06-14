/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x31a0c251; S=0x31a51fad; converted property
+ (id)defaultManager;	// 0x319e6921
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x31a51089
- (id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id *)date error:(id *)error;	// 0x31a545dd
- (id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;	// 0x31a542ad
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x31a30e89
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x31a50da1
- (id)_URLForTrashingItemAtURL:(id)url create:(BOOL)create error:(id *)error;	// 0x31a51085
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x31a53309
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x31a53339
- (id)_displayPathForPath:(id)path;	// 0x31a513e5
- (id)_info;	// 0x31a0c279
- (void)_performRemoveFileAtPath:(id)path;	// 0x31a9c6a9
- (BOOL)_processHasUbiquityContainerEntitlement;	// 0x31a548f1
- (void)_registerForUbiquityAccountChangeNotifications;	// 0x31a54975
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x31a9c6f1
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x31a9c7e5
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x31a9cbd5
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x31a9cec5
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x31a9c65d
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x31a103c5
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x31a9c661
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x31a9c5cd
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x31a9cc25
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x31a9ca9d
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x31a9cec1
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x31a9c8fd
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x31a10f41
- (id)_web_startupVolumeName_nowarn;	// 0x31a9cbd9
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x31a9c8e9
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x31a07db9
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x31a19999
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x31a5167d
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x31a516fd
- (id)componentsToDisplayForPath:(id)path;	// 0x31a51d11
- (id)contentsAtPath:(id)path;	// 0x31a27311
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x31a51955
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x31a10401
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x31a50a21
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x31a521e1
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x31a52301
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x31a518e1
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x319ea66d
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x31a53179
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x31a26afd
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x31a51931
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x31a53369
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id *)error;	// 0x31a53445
- (id)currentDirectoryPath;	// 0x31a51619
- (void)dealloc;	// 0x31a0849d
// converted property getter: - (id)delegate;	// 0x31a0c251
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x31a28b71
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x31a515b5
- (id)directoryContentsAtPath:(id)path;	// 0x31a51891
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x31a51865
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x31a10435
- (id)displayNameAtPath:(id)path;	// 0x31a517fd
- (id)enumeratorAtPath:(id)path;	// 0x31a28a25
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x31a31055
- (BOOL)evictUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x31a54071
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x31a51d49
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x31a51d25
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x31a516e1
- (BOOL)fileExistsAtPath:(id)path;	// 0x319e6979
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x319ea8d5
- (id)fileSystemAttributesAtPath:(id)path;	// 0x31a51cf9
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x319eaaa9
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x31a51fd5
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x31a520d9
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x31a5292d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x31a52a31
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x31a52481
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x31a52585
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x31a0c621
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x31a0c179
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x319e6bd5
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x31a51731
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x31a51721
- (BOOL)isReadableFileAtPath:(id)path;	// 0x31a149b9
- (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x31a53e95
- (BOOL)isWritableFileAtPath:(id)path;	// 0x31a08869
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x31a52b39
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x31a52c59
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x31a50a19
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x31a5268d
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x31a527ad
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x31a5191d
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x31a51e41
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x31a5184d
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x31a0ab95
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x31a52ddd
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x31a535a9
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x31a2f401
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a51fad
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x31a51ecd
- (BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id *)error;	// 0x31a539bd
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x31a536b9
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x319ea4d5
- (id)subpathsAtPath:(id)path;	// 0x31a518b9
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x31a53239
- (BOOL)trashItemAtURL:(id)url resultingItemURL:(id *)url2 error:(id *)error;	// 0x31a52e5d
- (id)ubiquityIdentityToken;	// 0x31a54925
@end
