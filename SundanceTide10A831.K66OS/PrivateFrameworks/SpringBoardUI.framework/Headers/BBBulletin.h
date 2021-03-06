/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <BBBulletin.h> // Unknown library


@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;	// 0x3779e939
- (id)actionBlockForButton:(id)button;	// 0x3779edc5
- (id)actionBlockForButton:(id)button withOrigin:(int)origin;	// 0x3779ed49
- (id)defaultActionBlock;	// 0x3779edb1
- (id)defaultActionBlockWithOrigin:(int)origin;	// 0x3779ecb9
- (id)defaultActionBlockWithOrigin:(int)origin canBypassPinLock:(BOOL *)lock requiresUnlock:(BOOL *)unlock shouldDeactivateAwayController:(BOOL *)controller suitabilityFilter:(id)filter;	// 0x3779e9e5
- (void)killSound;	// 0x3779e9a9
- (BOOL)playSound;	// 0x3779e971
@end

