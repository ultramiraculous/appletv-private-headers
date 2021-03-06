/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "CoreImage-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x36b274e9; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x36b28ab1
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x36b28401
+ (id)_filterFromProperties:(id)properties;	// 0x36b28c65
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36b27cc9
+ (id)customAttributes;	// 0x36b27ba1
+ (id)filterArrayFromSerializedXMP:(id)serializedXMP inputImageExtent:(CGRect)extent error:(id *)error;	// 0x36b27c5d
+ (id)filterNamesInCategories:(id)categories;	// 0x36b26c21
+ (id)filterNamesInCategory:(id)category;	// 0x36b26be1
+ (id)filterWithName:(id)name;	// 0x36b26ae5
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x36b26b7d
+ (id)serializedXMPFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36b27be5
- (id)initWithCoder:(id)coder;	// 0x36b276e9
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x36b278c9
- (id)_filterClassDescription;	// 0x36b27ba5
- (id)_initFromProperties:(id)properties;	// 0x36b28ca1
- (BOOL)_isIdentity;	// 0x36b27bdd
- (id)_outputProperties;	// 0x36b27be1
- (id)attributes;	// 0x36b274ed
- (id)copyWithZone:(NSZone *)zone;	// 0x36b27905
- (void)dealloc;	// 0x36b273a9
- (id)description;	// 0x36b27a45
- (void)encodeWithCoder:(id)coder;	// 0x36b27519
- (unsigned)hash;	// 0x36b26909
- (id)inputKeys;	// 0x36b27499
- (BOOL)isEqual:(id)equal;	// 0x36b267c1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36b27a35
- (id)name;	// 0x36b2738d
// declared property getter: - (id)outputImage;	// 0x36b274e9
- (id)outputKeys;	// 0x36b274c1
- (void)setDefaults;	// 0x36b27515
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x36b269ed
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x36b26a7d
@end

