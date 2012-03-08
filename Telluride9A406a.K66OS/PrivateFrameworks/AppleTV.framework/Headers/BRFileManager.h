/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface BRFileManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x3313907d
+ (id)singleton;	// 0x3313906d
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x33139399
- (id)cachePath;	// 0x3313951d
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3313910d
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x33139449
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes error:(id *)error;	// 0x3313908d
- (BOOL)fileExistsAtPath:(id)path;	// 0x331393d5
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3313940d
- (id)modDateOfFileAtPath:(id)path error:(id *)error;	// 0x331394d1
- (id)mostRecentModDateInDirectoryAtPath:(id)path error:(id *)error;	// 0x33139265
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3313948d
- (unsigned long long)onDiskFileSizeOfFileAtPath:(id)path status:(int *)status;	// 0x331395d5
- (BOOL)removeContentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x33139149
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x331390d1
- (id)videoCachePath;	// 0x331395a1
@end
