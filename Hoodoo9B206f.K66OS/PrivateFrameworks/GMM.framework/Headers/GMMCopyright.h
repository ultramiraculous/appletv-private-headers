/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMCopyright : PBCodable {
	NSMutableArray *_mapDataCopyrights;	// 4 = 0x4
	NSMutableArray *_imageryCopyrights;	// 8 = 0x8
	BOOL _hasCopyrightYear;	// 12 = 0xc
	int _copyrightYear;	// 16 = 0x10
}
@property(assign, nonatomic) int copyrightYear;	// G=0x33ce675d; S=0x33ce62dd; @synthesize=_copyrightYear
@property(assign, nonatomic) BOOL hasCopyrightYear;	// G=0x33ce673d; S=0x33ce674d; @synthesize=_hasCopyrightYear
@property(retain, nonatomic) NSMutableArray *imageryCopyrights;	// G=0x33ce6709; S=0x33ce6719; @synthesize=_imageryCopyrights
@property(retain, nonatomic) NSMutableArray *mapDataCopyrights;	// G=0x33ce66d5; S=0x33ce66e5; @synthesize=_mapDataCopyrights
- (void)addImageryCopyright:(id)copyright;	// 0x33ce6239
- (void)addMapDataCopyright:(id)copyright;	// 0x33ce6195
// declared property getter: - (int)copyrightYear;	// 0x33ce675d
- (void)dealloc;	// 0x33ce613d
- (id)description;	// 0x33ce6301
- (id)dictionaryRepresentation;	// 0x33ce6371
// declared property getter: - (BOOL)hasCopyrightYear;	// 0x33ce673d
- (id)imageryCopyrightAtIndex:(unsigned)index;	// 0x33ce62bd
// declared property getter: - (id)imageryCopyrights;	// 0x33ce6709
- (unsigned)imageryCopyrightsCount;	// 0x33ce629d
- (id)mapDataCopyrightAtIndex:(unsigned)index;	// 0x33ce6219
// declared property getter: - (id)mapDataCopyrights;	// 0x33ce66d5
- (unsigned)mapDataCopyrightsCount;	// 0x33ce61f9
- (BOOL)readFrom:(id)from;	// 0x33ce6449
// declared property setter: - (void)setCopyrightYear:(int)year;	// 0x33ce62dd
// declared property setter: - (void)setHasCopyrightYear:(BOOL)year;	// 0x33ce674d
// declared property setter: - (void)setImageryCopyrights:(id)copyrights;	// 0x33ce6719
// declared property setter: - (void)setMapDataCopyrights:(id)copyrights;	// 0x33ce66e5
- (void)writeTo:(id)to;	// 0x33ce6561
@end
