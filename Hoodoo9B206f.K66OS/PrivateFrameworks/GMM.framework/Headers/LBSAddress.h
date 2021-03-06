/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface LBSAddress : PBCodable {
	NSString *_rawText;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
	BOOL _hasIsPhysical;	// 12 = 0xc
	BOOL _isPhysical;	// 13 = 0xd
	BOOL _hasIsMailing;	// 14 = 0xe
	BOOL _isMailing;	// 15 = 0xf
	NSMutableArray *_crossStreets;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x33cd68e1; S=0x33cd68f1; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *crossStreets;	// G=0x33cd6975; S=0x33cd6985; @synthesize=_crossStreets
@property(assign, nonatomic) BOOL hasIsMailing;	// G=0x33cd6945; S=0x33cd6955; @synthesize=_hasIsMailing
@property(assign, nonatomic) BOOL hasIsPhysical;	// G=0x33cd6915; S=0x33cd6925; @synthesize=_hasIsPhysical
@property(readonly, assign, nonatomic) BOOL hasRawText;	// G=0x33cd6025; 
@property(assign, nonatomic) BOOL isMailing;	// G=0x33cd6965; S=0x33cd6105; @synthesize=_isMailing
@property(assign, nonatomic) BOOL isPhysical;	// G=0x33cd6935; S=0x33cd60e1; @synthesize=_isPhysical
@property(retain, nonatomic) NSString *rawText;	// G=0x33cd68ad; S=0x33cd68bd; @synthesize=_rawText
- (void)addComponent:(id)component;	// 0x33cd603d
- (void)addCrossStreet:(id)street;	// 0x33cd6129
- (id)componentAtIndex:(unsigned)index;	// 0x33cd60c1
// declared property getter: - (id)components;	// 0x33cd68e1
- (unsigned)componentsCount;	// 0x33cd60a1
- (id)crossStreetAtIndex:(unsigned)index;	// 0x33cd61ad
// declared property getter: - (id)crossStreets;	// 0x33cd6975
- (unsigned)crossStreetsCount;	// 0x33cd618d
- (void)dealloc;	// 0x33cd5fb9
- (id)description;	// 0x33cd61cd
- (id)dictionaryRepresentation;	// 0x33cd623d
// declared property getter: - (BOOL)hasIsMailing;	// 0x33cd6945
// declared property getter: - (BOOL)hasIsPhysical;	// 0x33cd6915
// declared property getter: - (BOOL)hasRawText;	// 0x33cd6025
// declared property getter: - (BOOL)isMailing;	// 0x33cd6965
// declared property getter: - (BOOL)isPhysical;	// 0x33cd6935
// declared property getter: - (id)rawText;	// 0x33cd68ad
- (BOOL)readFrom:(id)from;	// 0x33cd6399
// declared property setter: - (void)setComponents:(id)components;	// 0x33cd68f1
// declared property setter: - (void)setCrossStreets:(id)streets;	// 0x33cd6985
// declared property setter: - (void)setHasIsMailing:(BOOL)mailing;	// 0x33cd6955
// declared property setter: - (void)setHasIsPhysical:(BOOL)physical;	// 0x33cd6925
// declared property setter: - (void)setIsMailing:(BOOL)mailing;	// 0x33cd6105
// declared property setter: - (void)setIsPhysical:(BOOL)physical;	// 0x33cd60e1
// declared property setter: - (void)setRawText:(id)text;	// 0x33cd68bd
- (void)writeTo:(id)to;	// 0x33cd6615
@end

