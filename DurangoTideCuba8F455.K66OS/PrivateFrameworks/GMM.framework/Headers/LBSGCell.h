/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGCell : PBCodable {
@private
	int _lac;	// 4 = 0x4
	int _cellid;	// 8 = 0x8
	int _mnc;	// 12 = 0xc
	BOOL _hasMnc;	// 16 = 0x10
	int _mcc;	// 20 = 0x14
	BOOL _hasMcc;	// 24 = 0x18
	int _rssi;	// 28 = 0x1c
	BOOL _hasRssi;	// 32 = 0x20
	int _age;	// 36 = 0x24
	BOOL _hasAge;	// 40 = 0x28
	int _timingAdvance;	// 44 = 0x2c
	BOOL _hasTimingAdvance;	// 48 = 0x30
	int _primaryScramblingCode;	// 52 = 0x34
	BOOL _hasPrimaryScramblingCode;	// 56 = 0x38
}
@property(assign, nonatomic) int age;	// G=0x3445e6dd; S=0x3445e639; @synthesize=_age
@property(assign, nonatomic) int cellid;	// G=0x3445e74d; S=0x3445e75d; @synthesize=_cellid
@property(readonly, assign, nonatomic) BOOL hasAge;	// G=0x3445e6cd; @synthesize=_hasAge
@property(readonly, assign, nonatomic) BOOL hasMcc;	// G=0x3445e70d; @synthesize=_hasMcc
@property(readonly, assign, nonatomic) BOOL hasMnc;	// G=0x3445e72d; @synthesize=_hasMnc
@property(readonly, assign, nonatomic) BOOL hasPrimaryScramblingCode;	// G=0x3445e68d; @synthesize=_hasPrimaryScramblingCode
@property(readonly, assign, nonatomic) BOOL hasRssi;	// G=0x3445e6ed; @synthesize=_hasRssi
@property(readonly, assign, nonatomic) BOOL hasTimingAdvance;	// G=0x3445e6ad; @synthesize=_hasTimingAdvance
@property(assign, nonatomic) int lac;	// G=0x3445e76d; S=0x3445e77d; @synthesize=_lac
@property(assign, nonatomic) int mcc;	// G=0x3445e71d; S=0x3445e601; @synthesize=_mcc
@property(assign, nonatomic) int mnc;	// G=0x3445e73d; S=0x3445e5e5; @synthesize=_mnc
@property(assign, nonatomic) int primaryScramblingCode;	// G=0x3445e69d; S=0x3445e671; @synthesize=_primaryScramblingCode
@property(assign, nonatomic) int rssi;	// G=0x3445e6fd; S=0x3445e61d; @synthesize=_rssi
@property(assign, nonatomic) int timingAdvance;	// G=0x3445e6bd; S=0x3445e655; @synthesize=_timingAdvance
- (id)init;	// 0x3445ee95
// declared property getter: - (int)age;	// 0x3445e6dd
// declared property getter: - (int)cellid;	// 0x3445e74d
- (void)dealloc;	// 0x3445e78d
- (id)description;	// 0x3445e98d
- (id)dictionaryRepresentation;	// 0x3445e7b9
// declared property getter: - (BOOL)hasAge;	// 0x3445e6cd
// declared property getter: - (BOOL)hasMcc;	// 0x3445e70d
// declared property getter: - (BOOL)hasMnc;	// 0x3445e72d
// declared property getter: - (BOOL)hasPrimaryScramblingCode;	// 0x3445e68d
// declared property getter: - (BOOL)hasRssi;	// 0x3445e6ed
// declared property getter: - (BOOL)hasTimingAdvance;	// 0x3445e6ad
// declared property getter: - (int)lac;	// 0x3445e76d
// declared property getter: - (int)mcc;	// 0x3445e71d
// declared property getter: - (int)mnc;	// 0x3445e73d
// declared property getter: - (int)primaryScramblingCode;	// 0x3445e69d
- (BOOL)readFrom:(id)from;	// 0x3445ece5
// declared property getter: - (int)rssi;	// 0x3445e6fd
// declared property setter: - (void)setAge:(int)age;	// 0x3445e639
// declared property setter: - (void)setCellid:(int)cellid;	// 0x3445e75d
// declared property setter: - (void)setLac:(int)lac;	// 0x3445e77d
// declared property setter: - (void)setMcc:(int)mcc;	// 0x3445e601
// declared property setter: - (void)setMnc:(int)mnc;	// 0x3445e5e5
// declared property setter: - (void)setPrimaryScramblingCode:(int)code;	// 0x3445e671
// declared property setter: - (void)setRssi:(int)rssi;	// 0x3445e61d
// declared property setter: - (void)setTimingAdvance:(int)advance;	// 0x3445e655
// declared property getter: - (int)timingAdvance;	// 0x3445e6bd
- (void)writeTo:(id)to;	// 0x3445eb9d
@end
