/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVBSRManager : BRSingleton {
@private
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x330bf68d
+ (id)singleton;	// 0x330bf67d
- (id)init;	// 0x330bf69d
- (void)_performResetFromIR;	// 0x330bf7ed
- (void)_showBSRScreenWithController:(id)controller;	// 0x330bf8c5
- (void)dealloc;	// 0x330bf719
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x330bf775
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x330bf7b1
@end

