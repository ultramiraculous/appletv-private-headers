/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class SFUZipEntry;

__attribute__((visibility("hidden")))
@interface CPBundleResourcePackageEntry : NSObject {
@private
	SFUZipEntry *mZipEntry;	// 4 = 0x4
	xmlDoc *mXmlDocument;	// 8 = 0x8
}
- (id)initWithZipEntry:(id)zipEntry;	// 0x3113db35
- (id)data;	// 0x311fb2c1
- (void)dealloc;	// 0x311fb25d
- (xmlDoc *)xmlDocument;	// 0x3113db89
@end

