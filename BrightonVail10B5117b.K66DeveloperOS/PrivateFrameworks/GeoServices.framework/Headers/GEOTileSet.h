/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable {
	NSString *_baseURL;	// 4 = 0x4
	NSString *_localizationURL;	// 8 = 0x8
	NSString *_multiTileURL;	// 12 = 0xc
	int _scale;	// 16 = 0x10
	int _size;	// 20 = 0x14
	int _style;	// 24 = 0x18
	NSMutableArray *_supportedLanguages;	// 28 = 0x1c
	NSMutableArray *_validVersions;	// 32 = 0x20
	BOOL _multiTileURLUsesStatusCodes;	// 36 = 0x24
	XXStruct_ec15KC _has;	// 37 = 0x25
}
@property(retain, nonatomic) NSString *baseURL;	// G=0x34181db5; S=0x34181dc5; @synthesize=_baseURL
@property(readonly, assign, nonatomic) BOOL hasBaseURL;	// G=0x341808cd; 
@property(readonly, assign, nonatomic) BOOL hasLocalizationURL;	// G=0x341809c9; 
@property(readonly, assign, nonatomic) BOOL hasMultiTileURL;	// G=0x341808e5; 
@property(assign, nonatomic) BOOL hasMultiTileURLUsesStatusCodes;	// G=0x34180af1; S=0x34180ad5; 
@property(retain, nonatomic) NSString *localizationURL;	// G=0x34181e75; S=0x34181e85; @synthesize=_localizationURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x34181dd5; S=0x34181de5; @synthesize=_multiTileURL
@property(assign, nonatomic) BOOL multiTileURLUsesStatusCodes;	// G=0x34181eb5; S=0x34180aad; @synthesize=_multiTileURLUsesStatusCodes
@property(assign, nonatomic) int scale;	// G=0x34181e35; S=0x34181e45; @synthesize=_scale
@property(assign, nonatomic) int size;	// G=0x34181e55; S=0x34181e65; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x34181df5; S=0x34181e05; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *supportedLanguages;	// G=0x34181e95; S=0x34181ea5; @synthesize=_supportedLanguages
@property(retain, nonatomic) NSMutableArray *validVersions;	// G=0x34181e15; S=0x34181e25; @synthesize=_validVersions
- (void)addSupportedLanguage:(id)language;	// 0x34180a01
- (void)addValidVersion:(id)version;	// 0x3418091d
// declared property getter: - (id)baseURL;	// 0x34181db5
- (void)clearSupportedLanguages;	// 0x341809e1
- (void)clearValidVersions;	// 0x341808fd
- (void)copyTo:(id)to;	// 0x34181875
- (void)dealloc;	// 0x34180839
- (id)description;	// 0x34180b05
- (id)dictionaryRepresentation;	// 0x34180b75
// declared property getter: - (BOOL)hasBaseURL;	// 0x341808cd
// declared property getter: - (BOOL)hasLocalizationURL;	// 0x341809c9
// declared property getter: - (BOOL)hasMultiTileURL;	// 0x341808e5
// declared property getter: - (BOOL)hasMultiTileURLUsesStatusCodes;	// 0x34180af1
- (unsigned)hash;	// 0x34181c81
- (BOOL)isEqual:(id)equal;	// 0x34181ad1
// declared property getter: - (id)localizationURL;	// 0x34181e75
// declared property getter: - (id)multiTileURL;	// 0x34181dd5
// declared property getter: - (BOOL)multiTileURLUsesStatusCodes;	// 0x34181eb5
- (BOOL)readFrom:(id)from;	// 0x34181509
// declared property getter: - (int)scale;	// 0x34181e35
// declared property setter: - (void)setBaseURL:(id)url;	// 0x34181dc5
// declared property setter: - (void)setHasMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x34180ad5
// declared property setter: - (void)setLocalizationURL:(id)url;	// 0x34181e85
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x34181de5
// declared property setter: - (void)setMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x34180aad
// declared property setter: - (void)setScale:(int)scale;	// 0x34181e45
// declared property setter: - (void)setSize:(int)size;	// 0x34181e65
// declared property setter: - (void)setStyle:(int)style;	// 0x34181e05
// declared property setter: - (void)setSupportedLanguages:(id)languages;	// 0x34181ea5
// declared property setter: - (void)setValidVersions:(id)versions;	// 0x34181e25
// declared property getter: - (int)size;	// 0x34181e55
// declared property getter: - (int)style;	// 0x34181df5
- (id)supportedLanguageAtIndex:(unsigned)index;	// 0x34180a8d
// declared property getter: - (id)supportedLanguages;	// 0x34181e95
- (unsigned)supportedLanguagesCount;	// 0x34180a6d
- (id)validVersionAtIndex:(unsigned)index;	// 0x341809a9
// declared property getter: - (id)validVersions;	// 0x34181e15
- (unsigned)validVersionsCount;	// 0x34180989
- (void)writeTo:(id)to;	// 0x34181515
@end

