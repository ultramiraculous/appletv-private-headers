/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GMMIncomingTile : PBCodable {
	int _zoom;	// 4 = 0x4
	int _numHorizontalTiles;	// 8 = 0x8
	int _numVerticalTiles;	// 12 = 0xc
	NSMutableArray *_tiles;	// 16 = 0x10
}
@property(assign, nonatomic) int numHorizontalTiles;	// G=0x30b71b1d; S=0x30b71b2d; @synthesize=_numHorizontalTiles
@property(assign, nonatomic) int numVerticalTiles;	// G=0x30b71b3d; S=0x30b71b4d; @synthesize=_numVerticalTiles
@property(retain, nonatomic) NSMutableArray *tiles;	// G=0x30b71b5d; S=0x30b71b6d; @synthesize=_tiles
@property(assign, nonatomic) int zoom;	// G=0x30b71afd; S=0x30b71b0d; @synthesize=_zoom
- (void)addTile:(id)tile;	// 0x30b7163d
- (void)dealloc;	// 0x30b715f9
- (id)description;	// 0x30b716e1
- (id)dictionaryRepresentation;	// 0x30b71751
// declared property getter: - (int)numHorizontalTiles;	// 0x30b71b1d
// declared property getter: - (int)numVerticalTiles;	// 0x30b71b3d
- (BOOL)readFrom:(id)from;	// 0x30b7184d
// declared property setter: - (void)setNumHorizontalTiles:(int)tiles;	// 0x30b71b2d
// declared property setter: - (void)setNumVerticalTiles:(int)tiles;	// 0x30b71b4d
// declared property setter: - (void)setTiles:(id)tiles;	// 0x30b71b6d
// declared property setter: - (void)setZoom:(int)zoom;	// 0x30b71b0d
- (id)tileAtIndex:(unsigned)index;	// 0x30b716c1
// declared property getter: - (id)tiles;	// 0x30b71b5d
- (unsigned)tilesCount;	// 0x30b716a1
- (void)writeTo:(id)to;	// 0x30b719d5
// declared property getter: - (int)zoom;	// 0x30b71afd
@end

