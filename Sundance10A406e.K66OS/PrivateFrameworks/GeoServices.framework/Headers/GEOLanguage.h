/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOLanguage : PBCodable {
	unsigned _identifier;	// 4 = 0x4
	NSMutableArray *_languages;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned identifier;	// G=0x379da3c1; S=0x379da3d1; @synthesize=_identifier
@property(retain, nonatomic) NSMutableArray *languages;	// G=0x379da3e1; S=0x379da3f1; @synthesize=_languages
- (void)addLanguage:(id)language;	// 0x379d9dcd
- (void)clearLanguages;	// 0x379d9dad
- (void)copyTo:(id)to;	// 0x379da24d
- (void)dealloc;	// 0x379d9d69
- (id)description;	// 0x379d9e79
- (id)dictionaryRepresentation;	// 0x379d9ee9
- (unsigned)hash;	// 0x379da379
// declared property getter: - (unsigned)identifier;	// 0x379da3c1
- (BOOL)isEqual:(id)equal;	// 0x379da2f1
- (id)languageAtIndex:(unsigned)index;	// 0x379d9e59
// declared property getter: - (id)languages;	// 0x379da3e1
- (unsigned)languagesCount;	// 0x379d9e39
- (BOOL)readFrom:(id)from;	// 0x379da159
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x379da3d1
// declared property setter: - (void)setLanguages:(id)languages;	// 0x379da3f1
- (void)writeTo:(id)to;	// 0x379da165
@end

