/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingSuperTile : PBCodable {
	NSData *_superTileData;	// 4 = 0x4
}
@property(retain, nonatomic) NSData *superTileData;	// G=0x33ce9671; S=0x33ce9681; @synthesize=_superTileData
- (void)dealloc;	// 0x33ce946d
- (id)description;	// 0x33ce94b1
- (id)dictionaryRepresentation;	// 0x33ce9521
- (BOOL)readFrom:(id)from;	// 0x33ce9575
// declared property setter: - (void)setSuperTileData:(id)data;	// 0x33ce9681
// declared property getter: - (id)superTileData;	// 0x33ce9671
- (void)writeTo:(id)to;	// 0x33ce964d
@end
