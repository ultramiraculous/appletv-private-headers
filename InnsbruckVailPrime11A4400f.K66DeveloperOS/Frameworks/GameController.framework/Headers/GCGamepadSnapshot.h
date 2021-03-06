/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameController.framework/GameController
 */

#import "GameController-Structs.h"
#import "GCGamepad.h"

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {
	NSData *snapshotData;	// 4 = 0x4
}
@property(copy) NSData *snapshotData;	// G=0x2dd88621; S=0x2dd88635; @synthesize
+ (id)allocWithZone:(NSZone *)zone;	// 0x2dd88839
- (id)init;	// 0x2dd88855
- (id)initWithController:(id)controller snapshotData:(id)data;	// 0x2dd88899
- (id)initWithSnapshotData:(id)snapshotData;	// 0x2dd88885
- (void).cxx_destruct;	// 0x2dd88929
// declared property setter: - (void)setSnapshotData:(id)data;	// 0x2dd88635
// declared property getter: - (id)snapshotData;	// 0x2dd88621
@end

