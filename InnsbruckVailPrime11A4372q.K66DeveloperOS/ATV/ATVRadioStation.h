/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class RadioStation, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioStation : XXUnknownSuperclass {
	BOOL _isPreviewStation;	// 4 = 0x4
	RadioStation *_radioStation;	// 8 = 0x8
	NSDictionary *_stationDict;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isPreviewStation;	// G=0x72cdd; S=0x72ced; @synthesize=_isPreviewStation
@property(retain, nonatomic) RadioStation *radioStation;	// G=0x72c6d; S=0x72c7d; @synthesize=_radioStation
@property(retain, nonatomic) NSDictionary *stationDict;	// G=0x72ca5; S=0x72cb5; @synthesize=_stationDict
- (id)initWithDataClient:(id)dataClient radioStation:(id)station;	// 0x71ed5
- (id)initWithDataClient:(id)dataClient radioStation:(id)station stationDict:(id)dict;	// 0x71f3d
- (void).cxx_destruct;	// 0x72cfd
- (id)_streamCertificateURL;	// 0x72bdd
- (id)_streamKeyURL;	// 0x72c25
- (id)_streamURL;	// 0x72b95
- (id)concreteValueForProperty:(id)property;	// 0x7227d
- (void)dealloc;	// 0x71fa9
- (id)description;	// 0x721bd
- (unsigned)hash;	// 0x72141
- (BOOL)isEqual:(id)equal;	// 0x71fed
// declared property getter: - (BOOL)isPreviewStation;	// 0x72cdd
// declared property getter: - (id)radioStation;	// 0x72c6d
// declared property setter: - (void)setIsPreviewStation:(BOOL)station;	// 0x72ced
// declared property setter: - (void)setRadioStation:(id)station;	// 0x72c7d
// declared property setter: - (void)setStationDict:(id)dict;	// 0x72cb5
// declared property getter: - (id)stationDict;	// 0x72ca5
@end

