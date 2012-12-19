/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSURL, NSMutableDictionary, NSString;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x354e0e1d; S=0x354e1221; 
@property(readonly, assign, nonatomic) NSString *URLString;	// G=0x354e126d; 
@property(readonly, assign, nonatomic) int height;	// G=0x354e0b39; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x354e1441; S=0x354e1455; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x354e0be1; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x354e0ca1; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x354e110d; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x354e0d09; 
@property(readonly, assign, nonatomic) int width;	// G=0x354e0d75; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x354e10b9
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e1319
// declared property getter: - (id)URL;	// 0x354e0e1d
// declared property getter: - (id)URLString;	// 0x354e126d
- (void)_setValue:(id)value forKey:(id)key;	// 0x354e1289
- (id)copyWithZone:(NSZone *)zone;	// 0x354e0ab9
- (id)copyXPCEncoding;	// 0x354e13ed
- (void)dealloc;	// 0x354e0a55
- (id)description;	// 0x354e0ef1
- (unsigned)hash;	// 0x354e0fe1
// declared property getter: - (int)height;	// 0x354e0b39
// declared property getter: - (id)imageKind;	// 0x354e1441
// declared property getter: - (int)imageOrientation;	// 0x354e0be1
// declared property getter: - (float)imageScale;	// 0x354e0ca1
// declared property getter: - (CGSize)imageSize;	// 0x354e110d
- (BOOL)isEqual:(id)equal;	// 0x354e1021
// declared property getter: - (BOOL)isPrerendered;	// 0x354e0d09
// declared property setter: - (void)setImageKind:(id)kind;	// 0x354e1455
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x354e1159
// declared property setter: - (void)setURL:(id)url;	// 0x354e1221
- (void)setValue:(id)value forProperty:(id)property;	// 0x354e125d
- (id)valueForProperty:(id)property;	// 0x354e0ea9
// declared property getter: - (int)width;	// 0x354e0d75
@end
