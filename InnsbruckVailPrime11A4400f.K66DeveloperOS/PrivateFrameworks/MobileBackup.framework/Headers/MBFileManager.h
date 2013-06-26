/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import </libobjc.A.h>


@interface MBFileManager : NSObject {
}
+ (id)defaultManager;	// 0x3148c785
- (BOOL)copyPath:(id)path toPath:(id)path2;	// 0x3148c83d
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x3148c93d
- (id)directoryContentsAtPath:(id)path;	// 0x3148c8c5
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x3148c901
- (BOOL)fileExistsAtPath:(id)path;	// 0x3148c7cd
- (BOOL)movePath:(id)path toPath:(id)path2;	// 0x3148c881
- (BOOL)removeFileAtPath:(id)path;	// 0x3148c805
@end
