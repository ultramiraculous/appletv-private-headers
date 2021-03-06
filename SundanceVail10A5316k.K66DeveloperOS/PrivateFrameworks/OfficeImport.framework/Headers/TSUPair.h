/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	id mFirst;	// 4 = 0x4
	id mSecond;	// 8 = 0x8
}
+ (id)pair;	// 0x312e19f5
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x311ca011
+ (id)pairWithPair:(id)pair;	// 0x312e19b9
- (id)init;	// 0x312e1a75
- (id)initWithCoder:(id)coder;	// 0x312e1a89
- (id)initWithFirst:(id)first second:(id)second;	// 0x311ca051
- (id)initWithPair:(id)pair;	// 0x312e1a2d
- (id)copyWithZone:(NSZone *)zone;	// 0x312e1ca9
- (void)dealloc;	// 0x311ca705
- (id)description;	// 0x312e1c29
- (void)encodeWithCoder:(id)coder;	// 0x312e1ad1
- (id)first;	// 0x311ca139
- (unsigned)hash;	// 0x312e1be1
- (BOOL)isEqual:(id)equal;	// 0x312e1b21
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x312e1d59
- (void)p_SetFirst:(id)first;	// 0x311ca0b1
- (void)p_SetSecond:(id)second;	// 0x311ca0f5
- (id)second;	// 0x311ca149
@end

