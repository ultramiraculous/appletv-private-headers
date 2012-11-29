/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVHardwareUtility : BRSingleton {
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x17105d
+ (id)configurationInfo;	// 0x171279
+ (BOOL)isEmbeddedHardwareDevice;	// 0x171029
+ (id)mediaFolderPath;	// 0x171061
+ (BOOL)performObliteratePreservingPaths:(id)paths;	// 0x1710b1
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x1715c1
+ (void)setSILState_HardwareProblem;	// 0x170ff5
+ (void)setSILState_Off;	// 0x170f25
+ (void)setSILState_On;	// 0x170f59
+ (void)setSILState_RejectedCommand;	// 0x170fc1
+ (void)setSILState_Starting;	// 0x170f8d
+ (void)setSingleton:(id)singleton;	// 0x170f15
+ (id)singleton;	// 0x170f05
- (id)init;	// 0x171751
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x1717b5
- (BOOL)_isEmbeddedHardwareDevice;	// 0x1717a5
@end
