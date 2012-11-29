/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAsynchronousControllerViewLoading.h"
#import "BRViewController.h"

@class NSTimer, BRMerchant;

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
@property(copy, nonatomic) id cancelHandler;	// G=0x131a7d; S=0x131a91; @synthesize=_cancelHandler
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x131a5d; S=0x131a6d; @synthesize=_merchant
@property(assign, nonatomic) int viewAvailability;	// G=0x131aa1; S=0x131ab1; @synthesize=_viewAvailability
- (id)initWithLoadHandler:(id)loadHandler loadCompletionHandler:(id)handler;	// 0x131589
- (void)_performLoadCompletion;	// 0x1318b1
- (void)_showSpinner:(id)spinner;	// 0x131a1d
- (id)_waitContent;	// 0x13190d
// declared property getter: - (id)cancelHandler;	// 0x131a7d
- (void)dealloc;	// 0x131601
- (void)loadCompleted;	// 0x1317fd
// declared property getter: - (id)merchant;	// 0x131a5d
// declared property setter: - (void)setCancelHandler:(id)handler;	// 0x131a91
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x131a6d
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x131ab1
// declared property getter: - (int)viewAvailability;	// 0x131aa1
- (void)wasPopped;	// 0x131765
- (void)wasPushed;	// 0x131679
@end
