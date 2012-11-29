/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOTileGroup : PBCodable {
	XXStruct_3azwpD *_regionalResourceIndexs;	// 4 = 0x4
	unsigned _regionalResourceIndexsCount;	// 8 = 0x8
	unsigned _regionalResourceIndexsSpace;	// 12 = 0xc
	XXStruct_stqouA _attributionIndexs;	// 16 = 0x10
	XXStruct_stqouA _fontIndexs;	// 28 = 0x1c
	XXStruct_stqouA _iconIndexs;	// 40 = 0x28
	XXStruct_stqouA _styleSheetIndexs;	// 52 = 0x34
	XXStruct_stqouA _textureIndexs;	// 64 = 0x40
	XXStruct_stqouA _xmlIndexs;	// 76 = 0x4c
	NSRange *_tileSets;	// 88 = 0x58
	unsigned _tileSetsCount;	// 92 = 0x5c
	unsigned _tileSetsSpace;	// 96 = 0x60
	unsigned _attributionBadgeIndex;	// 100 = 0x64
	unsigned _identifier;	// 104 = 0x68
	XXStruct_ec15KC _has;	// 108 = 0x6c
}
@property(assign, nonatomic) unsigned attributionBadgeIndex;	// G=0x3455cc1d; S=0x3455b081; @synthesize=_attributionBadgeIndex
@property(readonly, assign, nonatomic) unsigned *attributionIndexs;	// G=0x3455b0ed; 
@property(readonly, assign, nonatomic) unsigned attributionIndexsCount;	// G=0x3455b0d9; 
@property(readonly, assign, nonatomic) unsigned *fontIndexs;	// G=0x3455ab05; 
@property(readonly, assign, nonatomic) unsigned fontIndexsCount;	// G=0x3455aaf1; 
@property(assign, nonatomic) BOOL hasAttributionBadgeIndex;	// G=0x3455b0c5; S=0x3455b0a9; 
@property(readonly, assign, nonatomic) unsigned *iconIndexs;	// G=0x3455ac0d; 
@property(readonly, assign, nonatomic) unsigned iconIndexsCount;	// G=0x3455abf9; 
@property(assign, nonatomic) unsigned identifier;	// G=0x3455cbfd; S=0x3455cc0d; @synthesize=_identifier
@property(readonly, assign, nonatomic) XXStruct_3azwpD *regionalResourceIndexs;	// G=0x3455ad11; 
@property(readonly, assign, nonatomic) unsigned regionalResourceIndexsCount;	// G=0x3455ad01; 
@property(readonly, assign, nonatomic) unsigned *styleSheetIndexs;	// G=0x3455a8f5; 
@property(readonly, assign, nonatomic) unsigned styleSheetIndexsCount;	// G=0x3455a8e1; 
@property(readonly, assign, nonatomic) unsigned *textureIndexs;	// G=0x3455a9fd; 
@property(readonly, assign, nonatomic) unsigned textureIndexsCount;	// G=0x3455a9e9; 
@property(readonly, assign, nonatomic) NSRange *tileSets;	// G=0x3455a6b5; 
@property(readonly, assign, nonatomic) unsigned tileSetsCount;	// G=0x3455a6a5; 
@property(readonly, assign, nonatomic) unsigned *xmlIndexs;	// G=0x3455af8d; 
@property(readonly, assign, nonatomic) unsigned xmlIndexsCount;	// G=0x3455af79; 
- (void)addAttributionIndex:(unsigned)index;	// 0x3455b111
- (void)addFontIndex:(unsigned)index;	// 0x3455ab29
- (void)addIconIndex:(unsigned)index;	// 0x3455ac31
- (void)addRegionalResourceIndex:(XXStruct_3azwpD)index;	// 0x3455ad5d
- (void)addStyleSheetIndex:(unsigned)index;	// 0x3455a919
- (void)addTextureIndex:(unsigned)index;	// 0x3455aa21
- (void)addTileSet:(NSRange)set;	// 0x3455a701
- (void)addXmlIndex:(unsigned)index;	// 0x3455afb1
// declared property getter: - (unsigned)attributionBadgeIndex;	// 0x3455cc1d
- (unsigned)attributionIndexAtIndex:(unsigned)index;	// 0x3455b125
// declared property getter: - (unsigned *)attributionIndexs;	// 0x3455b0ed
// declared property getter: - (unsigned)attributionIndexsCount;	// 0x3455b0d9
- (void)clearAttributionIndexs;	// 0x3455b0fd
- (void)clearFontIndexs;	// 0x3455ab15
- (void)clearIconIndexs;	// 0x3455ac1d
- (void)clearRegionalResourceIndexs;	// 0x3455ad21
- (void)clearStyleSheetIndexs;	// 0x3455a905
- (void)clearTextureIndexs;	// 0x3455aa0d
- (void)clearTileSets;	// 0x3455a6c5
- (void)clearXmlIndexs;	// 0x3455af9d
- (void)copyTo:(id)to;	// 0x3455c4b9
- (void)dealloc;	// 0x3455a5e5
- (id)description;	// 0x3455b1e1
- (id)dictionaryRepresentation;	// 0x3455b251
- (unsigned)fontIndexAtIndex:(unsigned)index;	// 0x3455ab3d
// declared property getter: - (unsigned *)fontIndexs;	// 0x3455ab05
// declared property getter: - (unsigned)fontIndexsCount;	// 0x3455aaf1
// declared property getter: - (BOOL)hasAttributionBadgeIndex;	// 0x3455b0c5
- (unsigned)hash;	// 0x3455cab1
- (unsigned)iconIndexAtIndex:(unsigned)index;	// 0x3455ac45
// declared property getter: - (unsigned *)iconIndexs;	// 0x3455ac0d
// declared property getter: - (unsigned)iconIndexsCount;	// 0x3455abf9
// declared property getter: - (unsigned)identifier;	// 0x3455cbfd
- (BOOL)isEqual:(id)equal;	// 0x3455c8f9
- (BOOL)readFrom:(id)from;	// 0x3455c179
- (XXStruct_3azwpD)regionalResourceIndexAtIndex:(unsigned)index;	// 0x3455ae61
// declared property getter: - (XXStruct_3azwpD *)regionalResourceIndexs;	// 0x3455ad11
// declared property getter: - (unsigned)regionalResourceIndexsCount;	// 0x3455ad01
// declared property setter: - (void)setAttributionBadgeIndex:(unsigned)index;	// 0x3455b081
- (void)setAttributionIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455b1c9
- (void)setFontIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455abe1
// declared property setter: - (void)setHasAttributionBadgeIndex:(BOOL)index;	// 0x3455b0a9
- (void)setIconIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455ace9
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x3455cc0d
- (void)setRegionalResourceIndexs:(XXStruct_3azwpD *)indexs count:(unsigned)count;	// 0x3455af29
- (void)setStyleSheetIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455a9d1
- (void)setTextureIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455aad9
- (void)setTileSets:(NSRange *)sets count:(unsigned)count;	// 0x3455a895
- (void)setXmlIndexs:(unsigned *)indexs count:(unsigned)count;	// 0x3455b069
- (unsigned)styleSheetIndexAtIndex:(unsigned)index;	// 0x3455a92d
// declared property getter: - (unsigned *)styleSheetIndexs;	// 0x3455a8f5
// declared property getter: - (unsigned)styleSheetIndexsCount;	// 0x3455a8e1
- (unsigned)textureIndexAtIndex:(unsigned)index;	// 0x3455aa35
// declared property getter: - (unsigned *)textureIndexs;	// 0x3455a9fd
// declared property getter: - (unsigned)textureIndexsCount;	// 0x3455a9e9
- (NSRange)tileSetAtIndex:(unsigned)index;	// 0x3455a7e1
// declared property getter: - (NSRange *)tileSets;	// 0x3455a6b5
// declared property getter: - (unsigned)tileSetsCount;	// 0x3455a6a5
- (void)writeTo:(id)to;	// 0x3455c185
- (unsigned)xmlIndexAtIndex:(unsigned)index;	// 0x3455afc5
// declared property getter: - (unsigned *)xmlIndexs;	// 0x3455af8d
// declared property getter: - (unsigned)xmlIndexsCount;	// 0x3455af79
@end
