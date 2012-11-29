/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, Netflix, NSMutableDictionary, NSMutableArray, NSDictionary;

@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol> {
	Netflix *netflix_;	// 4 = 0x4
}
@property(readonly, assign) NSString *ESN;	// G=0x45ea45; 
@property(readonly, assign) NSString *ESNPrefix;	// G=0x45e9cd; 
@property(readonly, assign) unsigned PC_NATIVE;	// G=0x45f979; 
@property(readonly, assign) unsigned PC_NONE;	// G=0x45f971; 
@property(readonly, assign) unsigned PC_PIN;	// G=0x45f975; 
@property(readonly, assign) NSMutableDictionary *SDKVersion;	// G=0x45eabd; 
@property(copy) NSMutableArray *UILanguages;	// G=0x45fc05; S=0x45fc7d; 
@property(readonly, assign) NSDictionary *capability;	// G=0x45fa5d; 
@property(readonly, assign) unsigned certificationVersion;	// G=0x45e965; 
@property(readonly, assign) BOOL isScreenSaverOn;	// G=0x45fb4d; 
@property(readonly, assign) NSString *language;	// G=0x45f8f9; 
@property(retain) Netflix *netflix;	// G=0x4600d1; S=0x4600e5; @synthesize=netflix_
@property(readonly, assign) unsigned parentalControlOverrideType;	// G=0x45f9f5; 
@property(readonly, assign) NSString *parentalControlRating;	// G=0x45f97d; 
@property(readonly, assign) NSString *softwareVersion;	// G=0x45e8ed; 
@property(readonly, assign) NSDictionary *videoOutput;	// G=0x45fad5; 
+ (id)sharedInstance;	// 0x45e801
// declared property getter: - (id)ESN;	// 0x45ea45
// declared property getter: - (id)ESNPrefix;	// 0x45e9cd
// declared property getter: - (unsigned)PC_NATIVE;	// 0x45f979
// declared property getter: - (unsigned)PC_NONE;	// 0x45f971
// declared property getter: - (unsigned)PC_PIN;	// 0x45f975
// declared property getter: - (id)SDKVersion;	// 0x45eabd
// declared property getter: - (id)UILanguages;	// 0x45fc05
- (void)addEventListener:(id)listener name:(id)name;	// 0x460041
// declared property getter: - (id)capability;	// 0x45fa5d
// declared property getter: - (unsigned)certificationVersion;	// 0x45e965
// declared property getter: - (BOOL)isScreenSaverOn;	// 0x45fb4d
// declared property getter: - (id)language;	// 0x45f8f9
// declared property getter: - (id)netflix;	// 0x4600d1
// declared property getter: - (unsigned)parentalControlOverrideType;	// 0x45f9f5
// declared property getter: - (id)parentalControlRating;	// 0x45f97d
- (void)removeEventListener:(id)listener name:(id)name;	// 0x460089
// declared property setter: - (void)setNetflix:(id)netflix;	// 0x4600e5
// declared property setter: - (void)setUILanguages:(id)languages;	// 0x45fc7d
- (void)setUIVersion:(id)version;	// 0x45fbb5
// declared property getter: - (id)softwareVersion;	// 0x45e8ed
- (void)updateProperty:(id)property value:(id)value;	// 0x45fddd
// declared property getter: - (id)videoOutput;	// 0x45fad5
@end
