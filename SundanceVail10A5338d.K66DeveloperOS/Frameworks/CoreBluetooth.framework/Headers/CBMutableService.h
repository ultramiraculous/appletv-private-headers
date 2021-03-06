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
@property(retain) NSNumber *ID;	// G=0x37518c75; S=0x37518c89; @synthesize=_ID
@property(retain, nonatomic) CBUUID *UUID;
@property(retain) NSArray *characteristics;	// S=0x37518b85; 
@property(retain) NSArray *includedServices;
@property(assign, nonatomic) BOOL isPrimary;
- (id)initWithType:(id)type primary:(BOOL)primary;	// 0x37518a69
// declared property getter: - (id)ID;	// 0x37518c75
- (id)description;	// 0x37518acd
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x37518b85
// declared property setter: - (void)setID:(id)anId;	// 0x37518c89
@end

