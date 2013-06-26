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
@property(copy, nonatomic) id cancelHandler;	// G=0xec061; S=0xec075; @synthesize=_cancelHandler
@property(retain, nonatomic) BRMerchant *merchant;	// G=0xec041; S=0xec051; @synthesize=_merchant
@property(assign, nonatomic) int viewAvailability;	// G=0xec085; S=0xec095; @synthesize=_viewAvailability
- (id)initWithLoadHandler:(id)loadHandler loadCompletionHandler:(id)handler;	// 0xebb69
- (void)_performLoadCompletion;	// 0xebe95
- (void)_showSpinner:(id)spinner;	// 0xec001
- (id)_waitContent;	// 0xebef1
// declared property getter: - (id)cancelHandler;	// 0xec061
- (void)dealloc;	// 0xebbe1
- (void)loadCompleted;	// 0xebde1
// declared property getter: - (id)merchant;	// 0xec041
// declared property setter: - (void)setCancelHandler:(id)handler;	// 0xec075
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xec051
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0xec095
// declared property getter: - (int)viewAvailability;	// 0xec085
- (void)wasPopped;	// 0xebd49
- (void)wasPushed;	// 0xebc59
@end
