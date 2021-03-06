/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x324f2bad; S=0x324f2f81; 
@property(readonly, assign, nonatomic) int height;	// G=0x324f28c1; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x324f31ed; S=0x324f31fd; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x324f296d; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x324f2a2d; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x324f2e6d; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x324f2a99; 
@property(readonly, assign, nonatomic) int width;	// G=0x324f2b01; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x324f2e19
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324f3059
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324f30f9
// declared property getter: - (id)URL;	// 0x324f2bad
- (void)_setValue:(id)value forKey:(id)key;	// 0x324f2fcd
- (id)copyPropertyListEncoding;	// 0x324f3135
- (id)copyWithZone:(NSZone *)zone;	// 0x324f2835
- (void *)copyXPCEncoding;	// 0x324f31b9
- (void)dealloc;	// 0x324f27d5
- (id)description;	// 0x324f2c81
- (unsigned)hash;	// 0x324f2d71
// declared property getter: - (int)height;	// 0x324f28c1
// declared property getter: - (id)imageKind;	// 0x324f31ed
// declared property getter: - (int)imageOrientation;	// 0x324f296d
// declared property getter: - (float)imageScale;	// 0x324f2a2d
// declared property getter: - (CGSize)imageSize;	// 0x324f2e6d
- (BOOL)isEqual:(id)equal;	// 0x324f2d99
// declared property getter: - (BOOL)isPrerendered;	// 0x324f2a99
// declared property setter: - (void)setImageKind:(id)kind;	// 0x324f31fd
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x324f2eb9
// declared property setter: - (void)setURL:(id)url;	// 0x324f2f81
- (void)setValue:(id)value forProperty:(id)property;	// 0x324f2fbd
- (id)valueForProperty:(id)property;	// 0x324f2c39
// declared property getter: - (int)width;	// 0x324f2b01
@end

