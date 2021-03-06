/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <BBBulletin.h> // Unknown library


@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;	// 0x36394da5
- (id)actionBlockForButton:(id)button;	// 0x36395211
- (id)actionBlockForButton:(id)button withOrigin:(int)origin;	// 0x36395195
- (id)defaultActionBlock;	// 0x363951fd
- (id)defaultActionBlockWithOrigin:(int)origin;	// 0x3639510d
- (id)defaultActionBlockWithOrigin:(int)origin canBypassPinLock:(BOOL *)lock requiresUnlock:(BOOL *)unlock suitabilityFilter:(id)filter;	// 0x36394e51
- (void)killSound;	// 0x36394e15
- (BOOL)playSound;	// 0x36394ddd
@end

