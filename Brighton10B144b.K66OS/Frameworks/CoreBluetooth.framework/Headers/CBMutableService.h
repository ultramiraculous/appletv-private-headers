/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBService.h"

@class CBUUID, NSArray, NSNumber;

@interface CBMutableService : CBService {
	NSNumber *_ID;	// 24 = 0x18
}
@property(retain) NSNumber *ID;	// G=0x30e7bf95; S=0x30e7bfa9; @synthesize=_ID
@property(retain, nonatomic) CBUUID *UUID;
@property(retain) NSArray *characteristics;	// S=0x30e7bea5; 
@property(retain) NSArray *includedServices;
@property(assign, nonatomic) BOOL isPrimary;
- (id)initWithType:(id)type primary:(BOOL)primary;	// 0x30e7bd89
// declared property getter: - (id)ID;	// 0x30e7bf95
- (id)description;	// 0x30e7bded
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x30e7bea5
// declared property setter: - (void)setID:(id)anId;	// 0x30e7bfa9
@end
