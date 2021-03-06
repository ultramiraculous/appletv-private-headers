/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
@private
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x31c7decd; S=0x31c7d6d9; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x31c7de75; S=0x31c7d735; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x31c7de8d; S=0x31c7d789; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x31c7debd; S=0x31c7d831; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x31c7dea5; S=0x31c7d7dd; @synthesize=_locationSpeed
- (id)init;	// 0x31c7d27d
- (void)appendSimulatedLocation:(id)location;	// 0x31c7d8b5
- (id)availableScenarios;	// 0x31c7d3e5
- (void)clearSimulatedCells;	// 0x31c7dbbd
- (void)clearSimulatedLocations;	// 0x31c7d87d
- (void)flush;	// 0x31c7de3d
- (void)loadScenarioFromURL:(id)url;	// 0x31c7d595
- (id)localizedNameForScenario:(id)scenario;	// 0x31c7d50d
// declared property getter: - (int)locationDeliveryBehavior;	// 0x31c7decd
// declared property getter: - (double)locationDistance;	// 0x31c7de75
// declared property getter: - (double)locationInterval;	// 0x31c7de8d
// declared property getter: - (int)locationRepeatBehavior;	// 0x31c7debd
// declared property getter: - (double)locationSpeed;	// 0x31c7dea5
- (id)scenariosPath;	// 0x31c7d30d
- (void)selectScenario:(id)scenario;	// 0x31c7d511
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x31c7d6d9
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x31c7d735
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x31c7d789
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x31c7d831
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x31c7d7dd
- (void)setSimulatedCell:(id)cell;	// 0x31c7dbf5
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x31c7dcfd
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x31c7de01
- (void)setWifiScanResults:(id)results;	// 0x31c7dd39
- (void)startCellSimulation;	// 0x31c7dc8d
- (void)startLocationSimulation;	// 0x31c7db4d
- (void)startWifiSimulation;	// 0x31c7dd91
- (void)stopCellSimulation;	// 0x31c7dcc5
- (void)stopLocationSimulation;	// 0x31c7db85
- (void)stopWifiSimulation;	// 0x31c7ddc9
@end

