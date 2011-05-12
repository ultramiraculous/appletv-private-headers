/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LBSAddress : PBCodable {
@private
	NSString *_raw_text;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
	BOOL _is_physical;	// 12 = 0xc
	BOOL _hasIs_physical;	// 13 = 0xd
	BOOL _is_mailing;	// 14 = 0xe
	BOOL _hasIs_mailing;	// 15 = 0xf
	NSMutableArray *_cross_streets;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x32ba4b8d; S=0x32ba55d9; @synthesize=_components
@property(readonly, assign, nonatomic) int componentsCount;	// G=0x32ba5521; 
@property(retain, nonatomic) NSMutableArray *cross_streets;	// G=0x32ba4b3d; S=0x32ba5601; @synthesize=_cross_streets
@property(readonly, assign, nonatomic) int cross_streetsCount;	// G=0x32ba5401; 
@property(readonly, assign, nonatomic) BOOL hasIs_mailing;	// G=0x32ba4b4d; @synthesize=_hasIs_mailing
@property(readonly, assign, nonatomic) BOOL hasIs_physical;	// G=0x32ba4b6d; @synthesize=_hasIs_physical
@property(readonly, assign, nonatomic) BOOL hasRaw_text;	// G=0x32ba4af1; 
@property(assign, nonatomic) BOOL is_mailing;	// G=0x32ba4b5d; S=0x32ba4b21; @synthesize=_is_mailing
@property(assign, nonatomic) BOOL is_physical;	// G=0x32ba4b7d; S=0x32ba4b05; @synthesize=_is_physical
@property(retain, nonatomic) NSString *raw_text;	// G=0x32ba4b9d; S=0x32ba55b1; @synthesize=_raw_text
- (id)init;	// 0x32ba4bad
- (void)addComponent:(id)component;	// 0x32ba5425
- (void)addCross_street:(id)street;	// 0x32ba5305
- (id)componentAtIndex:(unsigned)index;	// 0x32ba5455
// declared property getter: - (id)components;	// 0x32ba4b8d
// declared property getter: - (int)componentsCount;	// 0x32ba5521
- (id)cross_streetAtIndex:(unsigned)index;	// 0x32ba5335
// declared property getter: - (id)cross_streets;	// 0x32ba4b3d
// declared property getter: - (int)cross_streetsCount;	// 0x32ba5401
- (void)dealloc;	// 0x32ba5545
- (id)description;	// 0x32ba4d09
- (id)dictionaryRepresentation;	// 0x32ba4bd9
// declared property getter: - (BOOL)hasIs_mailing;	// 0x32ba4b4d
// declared property getter: - (BOOL)hasIs_physical;	// 0x32ba4b6d
// declared property getter: - (BOOL)hasRaw_text;	// 0x32ba4af1
// declared property getter: - (BOOL)is_mailing;	// 0x32ba4b5d
// declared property getter: - (BOOL)is_physical;	// 0x32ba4b7d
// declared property getter: - (id)raw_text;	// 0x32ba4b9d
- (BOOL)readFrom:(id)from;	// 0x32ba50ed
- (void)setComponent:(id)component atIndex:(unsigned)index;	// 0x32ba54b9
// declared property setter: - (void)setComponents:(id)components;	// 0x32ba55d9
- (void)setCross_street:(id)street atIndex:(unsigned)index;	// 0x32ba5399
// declared property setter: - (void)setCross_streets:(id)streets;	// 0x32ba5601
// declared property setter: - (void)setIs_mailing:(BOOL)mailing;	// 0x32ba4b21
// declared property setter: - (void)setIs_physical:(BOOL)physical;	// 0x32ba4b05
// declared property setter: - (void)setRaw_text:(id)text;	// 0x32ba55b1
- (void)writeTo:(id)to;	// 0x32ba4e85
@end
