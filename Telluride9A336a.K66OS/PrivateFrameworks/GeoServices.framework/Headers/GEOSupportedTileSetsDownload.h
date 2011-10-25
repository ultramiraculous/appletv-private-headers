/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable {
	GEOSupportedTileSets *_tileSets;	// 4 = 0x4
	GEODownloadMetadata *_metadata;	// 8 = 0x8
}
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x36718a59; S=0x36718a69; @synthesize=_metadata
@property(retain, nonatomic) GEOSupportedTileSets *tileSets;	// G=0x36718a25; S=0x36718a35; @synthesize=_tileSets
- (void)dealloc;	// 0x3671859d
- (id)description;	// 0x367185f5
- (id)dictionaryRepresentation;	// 0x36718665
// declared property getter: - (id)metadata;	// 0x36718a59
- (BOOL)readFrom:(id)from;	// 0x36718709
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x36718a69
// declared property setter: - (void)setTileSets:(id)sets;	// 0x36718a35
// declared property getter: - (id)tileSets;	// 0x36718a25
- (void)writeTo:(id)to;	// 0x36718915
@end

