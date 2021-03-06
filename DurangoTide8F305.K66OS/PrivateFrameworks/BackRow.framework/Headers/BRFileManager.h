/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"


@interface BRFileManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x329dfbd5
+ (id)singleton;	// 0x329dfbc9
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x329dfd3d
- (id)cachePath;	// 0x329e003d
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x329dfd71
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x329dfc91
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes error:(id *)error;	// 0x329dfddd
- (BOOL)fileExistsAtPath:(id)path;	// 0x329dfd09
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x329dfcd1
- (id)modDateOfFileAtPath:(id)path error:(id *)error;	// 0x329dfc0d
- (id)mostRecentModDateInDirectoryAtPath:(id)path error:(id *)error;	// 0x329dfe21
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x329dfc51
- (void)removeContentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x329dff51
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x329dfda5
- (id)videoCachePath;	// 0x329dfbe1
@end

