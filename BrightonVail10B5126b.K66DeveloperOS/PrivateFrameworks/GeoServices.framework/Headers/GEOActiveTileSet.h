/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable {
	XXStruct_1aFH4A *_availableTiles;	// 4 = 0x4
	unsigned _availableTilesCount;	// 8 = 0x8
	unsigned _availableTilesSpace;	// 12 = 0xc
	NSString *_baseURL;	// 16 = 0x10
	NSString *_localizationURL;	// 20 = 0x14
	NSString *_multiTileURL;	// 24 = 0x18
	int _scale;	// 28 = 0x1c
	NSMutableArray *_sentinelTiles;	// 32 = 0x20
	int _size;	// 36 = 0x24
	int _style;	// 40 = 0x28
	NSMutableArray *_supportedLanguages;	// 44 = 0x2c
	unsigned _timeToLiveSeconds;	// 48 = 0x30
	unsigned _version;	// 52 = 0x34
	BOOL _multiTileURLUsesStatusCodes;	// 56 = 0x38
	XXStruct_$8RKkA _has;	// 57 = 0x39
}
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *availableTiles;	// G=0x33f4f0c1; 
@property(readonly, assign, nonatomic) unsigned availableTilesCount;	// G=0x33f4f0b1; 
@property(retain, nonatomic) NSString *baseURL;	// G=0x33fc5c21; S=0x33f71a35; @synthesize=_baseURL
@property(readonly, assign, nonatomic) BOOL hasBaseURL;	// G=0x33fc4a45; 
@property(readonly, assign, nonatomic) BOOL hasLocalizationURL;	// G=0x33fc4d51; 
@property(readonly, assign, nonatomic) BOOL hasMultiTileURL;	// G=0x33fc4a5d; 
@property(assign, nonatomic) BOOL hasMultiTileURLUsesStatusCodes;	// G=0x33fc4e11; S=0x33fc4df1; 
@property(assign, nonatomic) BOOL hasTimeToLiveSeconds;	// G=0x33fc4ab9; S=0x33fc4a9d; 
@property(retain, nonatomic) NSString *localizationURL;	// G=0x33fc5c91; S=0x33f71af5; @synthesize=_localizationURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x33fc5c31; S=0x33f71a45; @synthesize=_multiTileURL
@property(assign, nonatomic) BOOL multiTileURLUsesStatusCodes;	// G=0x33fc5cb1; S=0x33fc4dc9; @synthesize=_multiTileURLUsesStatusCodes
@property(assign, nonatomic) int scale;	// G=0x33f4ecf1; S=0x33fc5c51; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *sentinelTiles;	// G=0x33f65b39; S=0x33f71a91; @synthesize=_sentinelTiles
@property(assign, nonatomic) int size;	// G=0x33f4efb1; S=0x33fc5c61; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x33f4ece1; S=0x33fc5c41; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *supportedLanguages;	// G=0x33fc5ca1; S=0x33f71b05; @synthesize=_supportedLanguages
@property(assign, nonatomic) unsigned timeToLiveSeconds;	// G=0x33f74205; S=0x33fc4a75; @synthesize=_timeToLiveSeconds
@property(assign, nonatomic) unsigned version;	// G=0x33fc5c71; S=0x33fc5c81; @synthesize=_version
- (void)_resetBestLanguage;	// 0x33fbbf9d
- (void)addAvailableTiles:(XXStruct_1aFH4A)tiles;	// 0x33fc4acd
- (void)addSentinelTile:(id)tile;	// 0x33f4def5
- (void)addSupportedLanguage:(id)language;	// 0x33f4e165
// declared property getter: - (XXStruct_1aFH4A *)availableTiles;	// 0x33f4f0c1
- (XXStruct_1aFH4A)availableTilesAtIndex:(unsigned)index;	// 0x33fc4bd9
// declared property getter: - (unsigned)availableTilesCount;	// 0x33f4f0b1
// declared property getter: - (id)baseURL;	// 0x33fc5c21
- (id)bestLanguage;	// 0x33fbbd61
- (void)clearAvailableTiles;	// 0x33f71a55
- (void)clearSentinelTiles;	// 0x33fc4cf1
- (void)clearSupportedLanguages;	// 0x33fc4d69
- (void)copyTo:(id)to;	// 0x33fc56e9
- (id)dataForGenericTileType:(int)genericTileType;	// 0x33f65a19
- (void)dealloc;	// 0x33f71991
- (id)description;	// 0x33fc4e25
- (id)dictionaryRepresentation;	// 0x33fc4e95
// declared property getter: - (BOOL)hasBaseURL;	// 0x33fc4a45
// declared property getter: - (BOOL)hasLocalizationURL;	// 0x33fc4d51
// declared property getter: - (BOOL)hasMultiTileURL;	// 0x33fc4a5d
// declared property getter: - (BOOL)hasMultiTileURLUsesStatusCodes;	// 0x33fc4e11
// declared property getter: - (BOOL)hasTimeToLiveSeconds;	// 0x33fc4ab9
- (unsigned)hash;	// 0x33fc5a69
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x33fbbc75
- (BOOL)isEqual:(id)equal;	// 0x33f71539
- (unsigned)largestZoomLevelLEQ:(unsigned)leq inRect:(XXStruct_03F4WD)rect;	// 0x33f4f5fd
// declared property getter: - (id)localizationURL;	// 0x33fc5c91
- (unsigned)maximumZoomLevelInRect:(XXStruct_03F4WD)rect;	// 0x33f4f2a1
- (unsigned)minimumZoomLevelInRect:(XXStruct_03F4WD)rect;	// 0x33f4f00d
// declared property getter: - (id)multiTileURL;	// 0x33fc5c31
// declared property getter: - (BOOL)multiTileURLUsesStatusCodes;	// 0x33fc5cb1
- (BOOL)readFrom:(id)from;	// 0x33fc52ed
// declared property getter: - (int)scale;	// 0x33f4ecf1
- (id)sentinelTileAtIndex:(unsigned)index;	// 0x33fc4d31
// declared property getter: - (id)sentinelTiles;	// 0x33f65b39
- (unsigned)sentinelTilesCount;	// 0x33fc4d11
- (void)setAvailableTiles:(XXStruct_1aFH4A *)tiles count:(unsigned)count;	// 0x33fc4ca1
// declared property setter: - (void)setBaseURL:(id)url;	// 0x33f71a35
// declared property setter: - (void)setHasMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x33fc4df1
// declared property setter: - (void)setHasTimeToLiveSeconds:(BOOL)liveSeconds;	// 0x33fc4a9d
// declared property setter: - (void)setLocalizationURL:(id)url;	// 0x33f71af5
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x33f71a45
// declared property setter: - (void)setMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x33fc4dc9
// declared property setter: - (void)setScale:(int)scale;	// 0x33fc5c51
// declared property setter: - (void)setSentinelTiles:(id)tiles;	// 0x33f71a91
// declared property setter: - (void)setSize:(int)size;	// 0x33fc5c61
// declared property setter: - (void)setStyle:(int)style;	// 0x33fc5c41
// declared property setter: - (void)setSupportedLanguages:(id)languages;	// 0x33f71b05
// declared property setter: - (void)setTimeToLiveSeconds:(unsigned)liveSeconds;	// 0x33fc4a75
// declared property setter: - (void)setVersion:(unsigned)version;	// 0x33fc5c81
// declared property getter: - (int)size;	// 0x33f4efb1
// declared property getter: - (int)style;	// 0x33f4ece1
- (id)supportedLanguageAtIndex:(unsigned)index;	// 0x33fc4da9
// declared property getter: - (id)supportedLanguages;	// 0x33fc5ca1
- (unsigned)supportedLanguagesCount;	// 0x33fc4d89
// declared property getter: - (unsigned)timeToLiveSeconds;	// 0x33f74205
// declared property getter: - (unsigned)version;	// 0x33fc5c71
- (void)writeTo:(id)to;	// 0x33fc52f9
@end
