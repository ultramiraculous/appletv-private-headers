/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {
	VMUSymbolOwner *_owner;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x34d23031; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x34d23021; S=0x34d237c9; converted property
+ (id)regionWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x34d23165
- (id)initWithCoder:(id)coder;	// 0x34d234cd
- (id)initWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x34d230c9
- (VMURange)addressRange;	// 0x34d23041
- (int)compare:(id)compare;	// 0x34d23069
- (id)copyWithZone:(NSZone *)zone;	// 0x34d231c1
- (void)dealloc;	// 0x34d23245
- (id)description;	// 0x34d23299
- (void)encodeWithCoder:(id)coder;	// 0x34d2347d
- (unsigned)hash;	// 0x34d23329
- (BOOL)isEqual:(id)equal;	// 0x34d2336d
- (BOOL)isEqualToRegion:(id)region;	// 0x34d233e1
// converted property getter: - (id)name;	// 0x34d23031
// converted property getter: - (id)owner;	// 0x34d23021
// converted property setter: - (void)setOwner:(id)owner;	// 0x34d237c9
@end
