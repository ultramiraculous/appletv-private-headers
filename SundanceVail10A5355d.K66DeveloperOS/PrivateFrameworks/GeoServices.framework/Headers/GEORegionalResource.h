/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable {
	XXStruct_1aFH4A *_tileRanges;	// 4 = 0x4
	unsigned _tileRangesCount;	// 8 = 0x8
	unsigned _tileRangesSpace;	// 12 = 0xc
	XXStruct_stqouA _validSubManifestVersions;	// 16 = 0x10
	NSMutableArray *_attributions;	// 28 = 0x1c
	NSMutableArray *_icons;	// 32 = 0x20
	unsigned _x;	// 36 = 0x24
	unsigned _y;	// 40 = 0x28
	unsigned _z;	// 44 = 0x2c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 48 = 0x30
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x3457e93d; S=0x3457e94d; @synthesize=_attributions
@property(assign, nonatomic) BOOL hasX;	// G=0x3457cfd9; S=0x3457cfbd; 
@property(assign, nonatomic) BOOL hasY;	// G=0x3457d035; S=0x3457d015; 
@property(assign, nonatomic) BOOL hasZ;	// G=0x3457d091; S=0x3457d071; 
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x3457e91d; S=0x3457e92d; @synthesize=_icons
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *tileRanges;	// G=0x3457d24d; 
@property(readonly, assign, nonatomic) unsigned tileRangesCount;	// G=0x3457d23d; 
@property(readonly, assign, nonatomic) unsigned *validSubManifestVersions;	// G=0x3457d4d1; 
@property(readonly, assign, nonatomic) unsigned validSubManifestVersionsCount;	// G=0x3457d4bd; 
@property(assign, nonatomic) unsigned x;	// G=0x3457e8ed; S=0x3457cf95; @synthesize=_x
@property(assign, nonatomic) unsigned y;	// G=0x3457e8fd; S=0x3457cfed; @synthesize=_y
@property(assign, nonatomic) unsigned z;	// G=0x3457e90d; S=0x3457d049; @synthesize=_z
- (void)addAttribution:(id)attribution;	// 0x3457d191
- (void)addIcon:(id)icon;	// 0x3457d0c5
- (void)addTileRange:(XXStruct_1aFH4A)range;	// 0x3457d299
- (void)addValidSubManifestVersion:(unsigned)version;	// 0x3457d4f5
- (id)attributionAtIndex:(unsigned)index;	// 0x3457d21d
// declared property getter: - (id)attributions;	// 0x3457e93d
- (unsigned)attributionsCount;	// 0x3457d1fd
- (void)clearAttributions;	// 0x3457d171
- (void)clearIcons;	// 0x3457d0a5
- (void)clearTileRanges;	// 0x3457d25d
- (void)clearValidSubManifestVersions;	// 0x3457d4e1
- (void)copyTo:(id)to;	// 0x3457e35d
- (void)dealloc;	// 0x3457cf19
- (id)description;	// 0x3457d5c5
- (id)dictionaryRepresentation;	// 0x3457d635
// declared property getter: - (BOOL)hasX;	// 0x3457cfd9
// declared property getter: - (BOOL)hasY;	// 0x3457d035
// declared property getter: - (BOOL)hasZ;	// 0x3457d091
- (unsigned)hash;	// 0x3457e7c9
- (id)iconAtIndex:(unsigned)index;	// 0x3457d151
// declared property getter: - (id)icons;	// 0x3457e91d
- (unsigned)iconsCount;	// 0x3457d131
- (BOOL)isEqual:(id)equal;	// 0x3457e631
- (BOOL)readFrom:(id)from;	// 0x3457dfd5
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x3457e94d
// declared property setter: - (void)setHasX:(BOOL)x;	// 0x3457cfbd
// declared property setter: - (void)setHasY:(BOOL)y;	// 0x3457d015
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x3457d071
// declared property setter: - (void)setIcons:(id)icons;	// 0x3457e92d
- (void)setTileRanges:(XXStruct_1aFH4A *)ranges count:(unsigned)count;	// 0x3457d46d
- (void)setValidSubManifestVersions:(unsigned *)versions count:(unsigned)count;	// 0x3457d5ad
// declared property setter: - (void)setX:(unsigned)x;	// 0x3457cf95
// declared property setter: - (void)setY:(unsigned)y;	// 0x3457cfed
// declared property setter: - (void)setZ:(unsigned)z;	// 0x3457d049
- (XXStruct_1aFH4A)tileRangeAtIndex:(unsigned)index;	// 0x3457d3a5
// declared property getter: - (XXStruct_1aFH4A *)tileRanges;	// 0x3457d24d
// declared property getter: - (unsigned)tileRangesCount;	// 0x3457d23d
- (unsigned)validSubManifestVersionAtIndex:(unsigned)index;	// 0x3457d509
// declared property getter: - (unsigned *)validSubManifestVersions;	// 0x3457d4d1
// declared property getter: - (unsigned)validSubManifestVersionsCount;	// 0x3457d4bd
- (void)writeTo:(id)to;	// 0x3457dfe1
// declared property getter: - (unsigned)x;	// 0x3457e8ed
// declared property getter: - (unsigned)y;	// 0x3457e8fd
// declared property getter: - (unsigned)z;	// 0x3457e90d
@end

