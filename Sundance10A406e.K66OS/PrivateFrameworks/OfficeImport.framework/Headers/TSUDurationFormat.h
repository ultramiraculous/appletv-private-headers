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

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x3514bd3d; S=0x3514bd4d; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x3514ba75
- (id)initWithFormat:(id)format name:(id)name;	// 0x3514bab5
- (id)copyWithZone:(NSZone *)zone;	// 0x3514bb2d
- (void)dealloc;	// 0x3514bb85
- (id)description;	// 0x3514bcd9
- (id)format;	// 0x3514bd2d
// converted property getter: - (id)formatName;	// 0x3514bd3d
- (unsigned)hash;	// 0x3514bc99
- (BOOL)isEqual:(id)equal;	// 0x3514bbfd
// converted property setter: - (void)setFormatName:(id)name;	// 0x3514bd4d
@end
