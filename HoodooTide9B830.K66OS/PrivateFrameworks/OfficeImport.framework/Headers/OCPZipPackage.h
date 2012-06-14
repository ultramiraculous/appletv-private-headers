/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackage.h"

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage {
@private
	SFUZipArchive *mArchive;	// 20 = 0x14
	NSMutableDictionary *mParts;	// 24 = 0x18
}
- (id)initWithArchive:(id)archive;	// 0x312677e1
- (id)initWithData:(id)data;	// 0x312c1989
- (id)initWithPath:(id)path;	// 0x31265139
- (void)dealloc;	// 0x31284575
- (id)partForLocation:(id)location;	// 0x3126ad05
- (void)resetPartForLocation:(id)location;	// 0x3128a75d
@end
