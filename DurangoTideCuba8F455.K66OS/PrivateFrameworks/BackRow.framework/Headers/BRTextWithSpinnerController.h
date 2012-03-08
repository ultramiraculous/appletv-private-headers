/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRController.h"

@class NSTimer, BRWaitPromptControl;

@interface BRTextWithSpinnerController : BRController {
@private
	NSTimer *_revealTimer;	// 60 = 0x3c
	double _revealInterval;	// 64 = 0x40
	BRWaitPromptControl *_prompt;	// 72 = 0x48
	BOOL _isNetworkDependent;	// 76 = 0x4c
}
@property(readonly, assign) BOOL isNetworkDependent;	// G=0x32f30429; converted property
- (id)initWithTitle:(id)title text:(id)text;	// 0x32f303bd
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent;	// 0x32f303e9
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent revealAfter:(double)after;	// 0x32f4fb8d
- (id)initWithTitle:(id)title text:(id)text revealAfter:(double)after;	// 0x32f4fb11
- (void)_checkActivationState:(id)state;	// 0x32f4fa39
- (void)controlWasActivated;	// 0x32f3088d
- (void)controlWasDeactivated;	// 0x32f4fb3d
- (void)dealloc;	// 0x32f30d49
// converted property getter: - (BOOL)isNetworkDependent;	// 0x32f30429
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x32f4fa35
@end
