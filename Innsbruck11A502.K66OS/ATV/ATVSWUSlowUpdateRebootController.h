/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface ATVSWUSlowUpdateRebootController : BRViewController {
	BOOL _attemptingToReboot;	// 104 = 0x68
	id _rebootBlock;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL attemptingToReboot;	// G=0x2492e9; S=0x2492f9; @synthesize=_attemptingToReboot
@property(copy, nonatomic) id rebootBlock;	// G=0x2492c5; S=0x2492d9; @synthesize=_rebootBlock
- (id)init;	// 0x248e75
- (id)initWithRebootBlock:(id)rebootBlock;	// 0x248e81
- (void).cxx_destruct;	// 0x249309
// declared property getter: - (BOOL)attemptingToReboot;	// 0x2492e9
- (BOOL)brEventAction:(id)action;	// 0x2491f5
- (void)dealloc;	// 0x248ffd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x24912d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x249041
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x249129
// declared property getter: - (id)rebootBlock;	// 0x2492c5
// declared property setter: - (void)setAttemptingToReboot:(BOOL)reboot;	// 0x2492f9
// declared property setter: - (void)setRebootBlock:(id)block;	// 0x2492d9
- (void)wasPushed;	// 0x24925d
@end

