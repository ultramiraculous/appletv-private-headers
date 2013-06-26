/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
	NSString *_path;	// 20 = 0x14
	unsigned _lineNumber;	// 24 = 0x18
	unsigned _fileOffset;	// 28 = 0x1c
}
@property(readonly, assign) unsigned fileOffset;	// G=0x35596455; converted property
@property(readonly, assign) unsigned lineNumber;	// G=0x35596445; converted property
@property(readonly, retain) NSString *path;	// G=0x35596415; converted property
+ (id)sourceInfoWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x3559630d
- (id)initWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x3559636d
- (VMURange)addressRange;	// 0x35596465
- (int)compare:(id)compare;	// 0x3559648d
- (id)copyWithZone:(NSZone *)zone;	// 0x355966dd
- (void)dealloc;	// 0x3559668d
- (id)description;	// 0x355965f5
- (id)fileName;	// 0x35596425
// converted property getter: - (unsigned)fileOffset;	// 0x35596455
- (BOOL)isEqualToSourceInfo:(id)sourceInfo;	// 0x355964ed
// converted property getter: - (unsigned)lineNumber;	// 0x35596445
// converted property getter: - (id)path;	// 0x35596415
@end
