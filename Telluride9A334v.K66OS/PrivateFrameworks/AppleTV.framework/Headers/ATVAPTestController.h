/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRAirportNetwork, BRWaitSpinnerControl, BRHeaderControl;
@protocol ATVAPTestResultDelegate;

@interface ATVAPTestController : BRController {
@private
	BRWaitSpinnerControl *_spinner;	// 80 = 0x50
	BRAirportNetwork *_network;	// 84 = 0x54
	BOOL _testFailed;	// 88 = 0x58
	id<ATVAPTestResultDelegate> _delegate;	// 92 = 0x5c
	BRHeaderControl *_header;	// 96 = 0x60
	BRTextControl *_prompt;	// 100 = 0x64
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x3310f0dd
- (void)_testFinished:(id)finished;	// 0x3310f681
- (void)_testInternetConnection;	// 0x3310f649
- (void)dealloc;	// 0x3310f325
- (void)setFrame:(CGRect)frame;	// 0x3310f3f1
- (void)wasExhumed;	// 0x3310f609
- (void)wasPushed;	// 0x3310f5c9
@end

