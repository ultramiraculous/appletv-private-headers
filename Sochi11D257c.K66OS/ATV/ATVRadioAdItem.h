/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioAdItem : XXUnknownSuperclass {
	BOOL _hasStartedPlaying;	// 4 = 0x4
	NSMutableDictionary *_adData;	// 8 = 0x8
	int _lastStateRecorded;	// 12 = 0xc
	int _adType;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableDictionary *adData;	// G=0x663a5; S=0x663b5; @synthesize=_adData
@property(assign, nonatomic) int adType;	// G=0x6641d; S=0x6642d; @synthesize=_adType
@property(assign, nonatomic) BOOL hasStartedPlaying;	// G=0x663dd; S=0x663ed; @synthesize=_hasStartedPlaying
@property(assign, nonatomic) int lastStateRecorded;	// G=0x663fd; S=0x6640d; @synthesize=_lastStateRecorded
+ (id)_preferredVideoFormats;	// 0x6566d
+ (id)_videoAssetWithAdData:(id)adData;	// 0x65781
- (id)initWithDataClient:(id)dataClient adData:(id)data adType:(int)type;	// 0x65ac9
- (void).cxx_destruct;	// 0x6643d
// declared property getter: - (id)adData;	// 0x663a5
// declared property getter: - (int)adType;	// 0x6641d
- (id)concreteValueForProperty:(id)property;	// 0x65b49
// declared property getter: - (BOOL)hasStartedPlaying;	// 0x663dd
// declared property getter: - (int)lastStateRecorded;	// 0x663fd
// declared property setter: - (void)setAdData:(id)data;	// 0x663b5
// declared property setter: - (void)setAdType:(int)type;	// 0x6642d
// declared property setter: - (void)setHasStartedPlaying:(BOOL)playing;	// 0x663ed
// declared property setter: - (void)setLastStateRecorded:(int)recorded;	// 0x6640d
@end

