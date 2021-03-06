/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface SFUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	id mFirst;	// 4 = 0x4
	id mSecond;	// 8 = 0x8
}
+ (id)pair;	// 0x32d8c981
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x32cc1511
+ (id)pairWithPair:(id)pair;	// 0x32d8c9b1
- (id)init;	// 0x32d8c91d
- (id)initWithCoder:(id)coder;	// 0x32d8c8d9
- (id)initWithFirst:(id)first second:(id)second;	// 0x32cc1549
- (id)initWithPair:(id)pair;	// 0x32d8c935
- (id)copyWithZone:(NSZone *)zone;	// 0x32d8c6bd
- (void)dealloc;	// 0x32cc184d
- (id)description;	// 0x32d8c75d
- (void)encodeWithCoder:(id)coder;	// 0x32d8c891
- (id)first;	// 0x32cc1629
- (BOOL)isEqual:(id)equal;	// 0x32d8c7d9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32d8c615
- (void)p_SetFirst:(id)first;	// 0x32cc15a1
- (void)p_SetSecond:(id)second;	// 0x32cc15dd
- (id)second;	// 0x32cc1619
@end

