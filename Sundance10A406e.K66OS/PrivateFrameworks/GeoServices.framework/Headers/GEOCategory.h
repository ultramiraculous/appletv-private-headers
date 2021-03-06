/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOCategory : PBCodable {
	long long _geoOntologyId;	// 4 = 0x4
	NSString *_alias;	// 12 = 0xc
	int _level;	// 16 = 0x10
	NSMutableArray *_localizedNames;	// 20 = 0x14
	XXStruct_ec15KC _has;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *alias;	// G=0x379ecc1d; S=0x379ecc2d; @synthesize=_alias
@property(assign, nonatomic) long long geoOntologyId;	// G=0x379ecc5d; S=0x379ec02d; @synthesize=_geoOntologyId
@property(assign, nonatomic) BOOL hasGeoOntologyId;	// G=0x379ec07d; S=0x379ec061; 
@property(assign, nonatomic) int level;	// G=0x379ecc3d; S=0x379ecc4d; @synthesize=_level
@property(retain, nonatomic) NSMutableArray *localizedNames;	// G=0x379ecc75; S=0x379ecc85; @synthesize=_localizedNames
- (void)addLocalizedNames:(id)names;	// 0x379ec0b1
// declared property getter: - (id)alias;	// 0x379ecc1d
- (void)clearLocalizedNames;	// 0x379ec091
- (void)copyTo:(id)to;	// 0x379ec971
- (void)dealloc;	// 0x379ebfd5
- (id)description;	// 0x379ec15d
- (id)dictionaryRepresentation;	// 0x379ec1cd
// declared property getter: - (long long)geoOntologyId;	// 0x379ecc5d
// declared property getter: - (BOOL)hasGeoOntologyId;	// 0x379ec07d
- (unsigned)hash;	// 0x379ecb7d
- (BOOL)isEqual:(id)equal;	// 0x379eca7d
// declared property getter: - (int)level;	// 0x379ecc3d
// declared property getter: - (id)localizedNames;	// 0x379ecc75
- (id)localizedNamesAtIndex:(unsigned)index;	// 0x379ec13d
- (unsigned)localizedNamesCount;	// 0x379ec11d
- (BOOL)readFrom:(id)from;	// 0x379ec79d
// declared property setter: - (void)setAlias:(id)alias;	// 0x379ecc2d
// declared property setter: - (void)setGeoOntologyId:(long long)anId;	// 0x379ec02d
// declared property setter: - (void)setHasGeoOntologyId:(BOOL)anId;	// 0x379ec061
// declared property setter: - (void)setLevel:(int)level;	// 0x379ecc4d
// declared property setter: - (void)setLocalizedNames:(id)names;	// 0x379ecc85
- (void)writeTo:(id)to;	// 0x379ec7a9
@end

