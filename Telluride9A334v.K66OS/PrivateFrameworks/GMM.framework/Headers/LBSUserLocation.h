/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSPoint, NSMutableArray, LBSAddress, NSString;

@interface LBSUserLocation : PBCodable {
	LBSPoint *_latLng;	// 4 = 0x4
	NSString *_source;	// 8 = 0x8
	BOOL _hasAccuracy;	// 12 = 0xc
	int _accuracy;	// 16 = 0x10
	BOOL _hasConfidence;	// 20 = 0x14
	int _confidence;	// 24 = 0x18
	LBSAddress *_address;	// 28 = 0x1c
	NSString *_misc;	// 32 = 0x20
	BOOL _hasObsolete;	// 36 = 0x24
	BOOL _obsolete;	// 37 = 0x25
	NSMutableArray *_features;	// 40 = 0x28
	NSString *_locationString;	// 44 = 0x2c
	long long _timestamp;	// 48 = 0x30
	BOOL _hasLocType;	// 56 = 0x38
	int _locType;	// 60 = 0x3c
}
@property(assign, nonatomic) int accuracy;	// G=0x35ba1bdd; S=0x35ba0f39; @synthesize=_accuracy
@property(retain, nonatomic) LBSAddress *address;	// G=0x35ba1c1d; S=0x35ba1c2d; @synthesize=_address
@property(assign, nonatomic) int confidence;	// G=0x35ba1c0d; S=0x35ba0f5d; @synthesize=_confidence
@property(retain, nonatomic) NSMutableArray *features;	// G=0x35ba1cb5; S=0x35ba1cc5; @synthesize=_features
@property(assign, nonatomic) BOOL hasAccuracy;	// G=0x35ba1bbd; S=0x35ba1bcd; @synthesize=_hasAccuracy
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x35ba0f81; 
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x35ba1bed; S=0x35ba1bfd; @synthesize=_hasConfidence
@property(readonly, assign, nonatomic) BOOL hasLatLng;	// G=0x35ba0f09; 
@property(assign, nonatomic) BOOL hasLocType;	// G=0x35ba1d49; S=0x35ba1d59; @synthesize=_hasLocType
@property(readonly, assign, nonatomic) BOOL hasLocationString;	// G=0x35ba1079; 
@property(readonly, assign, nonatomic) BOOL hasMisc;	// G=0x35ba0f99; 
@property(assign, nonatomic) BOOL hasObsolete;	// G=0x35ba1c85; S=0x35ba1c95; @synthesize=_hasObsolete
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x35ba0f21; 
@property(retain, nonatomic) LBSPoint *latLng;	// G=0x35ba1b55; S=0x35ba1b65; @synthesize=_latLng
@property(assign, nonatomic) int locType;	// G=0x35ba1d69; S=0x35ba1091; @synthesize=_locType
@property(retain, nonatomic) NSString *locationString;	// G=0x35ba1ce9; S=0x35ba1cf9; @synthesize=_locationString
@property(retain, nonatomic) NSString *misc;	// G=0x35ba1c51; S=0x35ba1c61; @synthesize=_misc
@property(assign, nonatomic) BOOL obsolete;	// G=0x35ba1ca5; S=0x35ba0fb1; @synthesize=_obsolete
@property(retain, nonatomic) NSString *source;	// G=0x35ba1b89; S=0x35ba1b99; @synthesize=_source
@property(assign, nonatomic) long long timestamp;	// G=0x35ba1d1d; S=0x35ba1d35; @synthesize=_timestamp
// declared property getter: - (int)accuracy;	// 0x35ba1bdd
- (void)addFeature:(id)feature;	// 0x35ba0fd5
// declared property getter: - (id)address;	// 0x35ba1c1d
// declared property getter: - (int)confidence;	// 0x35ba1c0d
- (void)dealloc;	// 0x35ba0e61
- (id)description;	// 0x35ba10b5
- (id)dictionaryRepresentation;	// 0x35ba1125
- (id)featureAtIndex:(unsigned)index;	// 0x35ba1059
// declared property getter: - (id)features;	// 0x35ba1cb5
- (unsigned)featuresCount;	// 0x35ba1039
// declared property getter: - (BOOL)hasAccuracy;	// 0x35ba1bbd
// declared property getter: - (BOOL)hasAddress;	// 0x35ba0f81
// declared property getter: - (BOOL)hasConfidence;	// 0x35ba1bed
// declared property getter: - (BOOL)hasLatLng;	// 0x35ba0f09
// declared property getter: - (BOOL)hasLocType;	// 0x35ba1d49
// declared property getter: - (BOOL)hasLocationString;	// 0x35ba1079
// declared property getter: - (BOOL)hasMisc;	// 0x35ba0f99
// declared property getter: - (BOOL)hasObsolete;	// 0x35ba1c85
// declared property getter: - (BOOL)hasSource;	// 0x35ba0f21
// declared property getter: - (id)latLng;	// 0x35ba1b55
// declared property getter: - (int)locType;	// 0x35ba1d69
// declared property getter: - (id)locationString;	// 0x35ba1ce9
// declared property getter: - (id)misc;	// 0x35ba1c51
// declared property getter: - (BOOL)obsolete;	// 0x35ba1ca5
- (BOOL)readFrom:(id)from;	// 0x35ba13f9
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x35ba0f39
// declared property setter: - (void)setAddress:(id)address;	// 0x35ba1c2d
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x35ba0f5d
// declared property setter: - (void)setFeatures:(id)features;	// 0x35ba1cc5
// declared property setter: - (void)setHasAccuracy:(BOOL)accuracy;	// 0x35ba1bcd
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x35ba1bfd
// declared property setter: - (void)setHasLocType:(BOOL)type;	// 0x35ba1d59
// declared property setter: - (void)setHasObsolete:(BOOL)obsolete;	// 0x35ba1c95
// declared property setter: - (void)setLatLng:(id)lng;	// 0x35ba1b65
// declared property setter: - (void)setLocType:(int)type;	// 0x35ba1091
// declared property setter: - (void)setLocationString:(id)string;	// 0x35ba1cf9
// declared property setter: - (void)setMisc:(id)misc;	// 0x35ba1c61
// declared property setter: - (void)setObsolete:(BOOL)obsolete;	// 0x35ba0fb1
// declared property setter: - (void)setSource:(id)source;	// 0x35ba1b99
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x35ba1d35
// declared property getter: - (id)source;	// 0x35ba1b89
// declared property getter: - (long long)timestamp;	// 0x35ba1d1d
- (void)writeTo:(id)to;	// 0x35ba17c9
@end

