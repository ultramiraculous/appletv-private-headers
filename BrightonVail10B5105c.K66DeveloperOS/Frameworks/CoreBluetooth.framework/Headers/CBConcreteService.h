/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBService.h"

@class NSNumber;

@interface CBConcreteService : CBService {
	NSNumber *_startHandle;	// 24 = 0x18
	NSNumber *_endHandle;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSNumber *endHandle;	// G=0x305d37e1; @synthesize=_endHandle
@property(readonly, assign, nonatomic) NSNumber *startHandle;	// G=0x305d37d1; @synthesize=_startHandle
- (id)initWithPeripheral:(id)peripheral primary:(BOOL)primary UUID:(id)uuid startHandle:(id)handle endHandle:(id)handle5;	// 0x305d2f0d
- (void)dealloc;	// 0x305d2fe9
// declared property getter: - (id)endHandle;	// 0x305d37e1
- (id)handleCharacteristicsDiscovered:(id)discovered;	// 0x305d34e5
- (id)handleIncludedServicesDiscovered:(id)discovered;	// 0x305d3229
- (void)invalidate;	// 0x305d308d
// declared property getter: - (id)startHandle;	// 0x305d37d1
@end
