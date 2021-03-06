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
@property(readonly, retain) NSString *name;	// G=0x32cae03d; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x32cae02d; S=0x32cae7d5; converted property
+ (id)regionWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x32cae171
- (id)initWithCoder:(id)coder;	// 0x32cae4d9
- (id)initWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x32cae0d5
- (VMURange)addressRange;	// 0x32cae04d
- (int)compare:(id)compare;	// 0x32cae075
- (id)copyWithZone:(NSZone *)zone;	// 0x32cae1cd
- (void)dealloc;	// 0x32cae251
- (id)description;	// 0x32cae2a5
- (void)encodeWithCoder:(id)coder;	// 0x32cae489
- (unsigned)hash;	// 0x32cae335
- (BOOL)isEqual:(id)equal;	// 0x32cae379
- (BOOL)isEqualToRegion:(id)region;	// 0x32cae3ed
// converted property getter: - (id)name;	// 0x32cae03d
// converted property getter: - (id)owner;	// 0x32cae02d
// converted property setter: - (void)setOwner:(id)owner;	// 0x32cae7d5
@end

