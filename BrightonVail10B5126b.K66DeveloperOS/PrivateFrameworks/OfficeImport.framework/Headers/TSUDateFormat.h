/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x34ad1ee1; S=0x34ad1ef1; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x34ad1c19
- (id)initWithFormat:(id)format name:(id)name;	// 0x34ad1c59
- (id)copyWithZone:(NSZone *)zone;	// 0x34ad1cd1
- (void)dealloc;	// 0x34ad1d29
- (id)description;	// 0x34ad1e7d
- (id)format;	// 0x34ad1ed1
// converted property getter: - (id)formatName;	// 0x34ad1ee1
- (unsigned)hash;	// 0x34ad1e3d
- (BOOL)isEqual:(id)equal;	// 0x34ad1da1
// converted property setter: - (void)setFormatName:(id)name;	// 0x34ad1ef1
@end
