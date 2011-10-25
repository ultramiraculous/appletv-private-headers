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
+ (void)setSingleton:(id)singleton;	// 0x3394468d
+ (id)singleton;	// 0x3394467d
- (id)init;	// 0x3394469d
- (void)_performResetFromIR;	// 0x339447ed
- (void)_showBSRScreenWithController:(id)controller;	// 0x339448c5
- (void)dealloc;	// 0x33944719
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x33944775
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x339447b1
@end

