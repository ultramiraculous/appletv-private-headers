/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRAsynchronousControllerViewLoading.h"

@class BRMerchant, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVProxyViewController : BRViewController <BRAsynchronousControllerViewLoading> {
	id _loadHandler;	// 104 = 0x68
	id _loadCompletionHandler;	// 108 = 0x6c
	NSTimer *_spinnerTimer;	// 112 = 0x70
	BOOL _loadPerformed;	// 116 = 0x74
	BRMerchant *_merchant;	// 120 = 0x78
	id _cancelHandler;	// 124 = 0x7c
	int _viewAvailability;	// 128 = 0x80
}
@property(copy, nonatomic) id cancelHandler;	// G=0x12cf3d; S=0x12cf51; @synthesize=_cancelHandler
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x12cf1d; S=0x12cf2d; @synthesize=_merchant
@property(assign, nonatomic) int viewAvailability;	// G=0x12cf61; S=0x12cf71; @synthesize=_viewAvailability
- (id)initWithLoadHandler:(id)loadHandler loadCompletionHandler:(id)handler;	// 0x12ca49
- (void)_performLoadCompletion;	// 0x12cd71
- (void)_showSpinner:(id)spinner;	// 0x12cedd
- (id)_waitContent;	// 0x12cdcd
// declared property getter: - (id)cancelHandler;	// 0x12cf3d
- (void)dealloc;	// 0x12cac1
- (void)loadCompleted;	// 0x12ccbd
// declared property getter: - (id)merchant;	// 0x12cf1d
// declared property setter: - (void)setCancelHandler:(id)handler;	// 0x12cf51
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x12cf2d
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x12cf71
// declared property getter: - (int)viewAvailability;	// 0x12cf61
- (void)wasPopped;	// 0x12cc25
- (void)wasPushed;	// 0x12cb39
@end

