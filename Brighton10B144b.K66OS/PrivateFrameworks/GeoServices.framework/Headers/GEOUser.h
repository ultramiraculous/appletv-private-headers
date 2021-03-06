/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable {
	GEOPhoto *_image;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasImage;	// G=0x33ff39d5; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x33ff39bd; 
@property(retain, nonatomic) GEOPhoto *image;	// G=0x33ff3f5d; S=0x33ff3f6d; @synthesize=_image
@property(retain, nonatomic) NSString *name;	// G=0x33ff3f3d; S=0x33ff3f4d; @synthesize=_name
- (void)copyTo:(id)to;	// 0x33ff3dd1
- (void)dealloc;	// 0x33ff3965
- (id)description;	// 0x33ff39ed
- (id)dictionaryRepresentation;	// 0x33ff3a5d
// declared property getter: - (BOOL)hasImage;	// 0x33ff39d5
// declared property getter: - (BOOL)hasName;	// 0x33ff39bd
- (unsigned)hash;	// 0x33ff3efd
// declared property getter: - (id)image;	// 0x33ff3f5d
- (BOOL)isEqual:(id)equal;	// 0x33ff3e5d
// declared property getter: - (id)name;	// 0x33ff3f3d
- (BOOL)readFrom:(id)from;	// 0x33ff3cf9
// declared property setter: - (void)setImage:(id)image;	// 0x33ff3f6d
// declared property setter: - (void)setName:(id)name;	// 0x33ff3f4d
- (void)writeTo:(id)to;	// 0x33ff3d05
@end

