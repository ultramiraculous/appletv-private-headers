/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject {
@private
	NSString *mCreator;	// 4 = 0x4
	NSString *mDescription;	// 8 = 0x8
	NSString *mKeywords;	// 12 = 0xc
	NSString *mTitle;	// 16 = 0x10
}
- (id)initWithXml:(xmlDoc *)xml;	// 0x34505a6d
- (id)creator;	// 0x3451d535
- (void)dealloc;	// 0x3451de9d
- (id)description;	// 0x3451d555
- (id)keywords;	// 0x3451d545
- (void)readFromXml:(xmlDoc *)xml;	// 0x34505b31
- (id)title;	// 0x3451d525
@end

