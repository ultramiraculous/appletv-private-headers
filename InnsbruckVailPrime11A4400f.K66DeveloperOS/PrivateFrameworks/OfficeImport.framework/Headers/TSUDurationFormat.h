/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "TSUDataFormat.h"

@class NSString;

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x3198d5cd; S=0x3198d5dd; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x3198d301
- (id)initWithFormat:(id)format name:(id)name;	// 0x3198d341
- (id)copyWithZone:(NSZone *)zone;	// 0x3198d3b9
- (void)dealloc;	// 0x3198d415
- (id)description;	// 0x3198d569
- (id)format;	// 0x3198d5bd
// converted property getter: - (id)formatName;	// 0x3198d5cd
- (unsigned)hash;	// 0x3198d529
- (BOOL)isEqual:(id)equal;	// 0x3198d48d
// converted property setter: - (void)setFormatName:(id)name;	// 0x3198d5dd
@end

