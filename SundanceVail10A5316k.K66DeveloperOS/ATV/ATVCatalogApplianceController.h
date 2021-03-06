/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRAsynchronousControllerViewLoading.h"
#import "BRController.h"

@class BRPanelControl, NSTimer, ATVURLDocument, BRMerchant, BRControl;

__attribute__((visibility("hidden")))
@interface ATVCatalogApplianceController : BRController <BRSecureResource, BRAsynchronousControllerViewLoading> {
	BRPanelControl *_contentContainer;	// 96 = 0x60
	id _storeObject;	// 100 = 0x64
	BRControl *_catalogControl;	// 104 = 0x68
	BOOL _controllerToSwapOnActivate;	// 108 = 0x6c
	long _state;	// 112 = 0x70
	NSTimer *_timer;	// 116 = 0x74
	BOOL _isDirty;	// 120 = 0x78
	BOOL _isVolatile;	// 121 = 0x79
	BOOL _autoPlay;	// 122 = 0x7a
	BRMerchant *_merchant;	// 124 = 0x7c
	Class _catalogAgent;	// 128 = 0x80
	ATVURLDocument *_document;	// 132 = 0x84
	BOOL requiresAuthentication;	// 136 = 0x88
	BOOL _shouldStartWaitPromptTimerOnActivate;	// 137 = 0x89
	int _viewAvailability;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x104c71; S=0x104c81; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x104d01; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x104cf1; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x104861; S=0x1047d5; 
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x104c91; S=0x104ca1; @synthesize
@property(assign, nonatomic) BOOL shouldStartWaitPromptTimerOnActivate;	// G=0x104cb1; S=0x104cc1; @synthesize=_shouldStartWaitPromptTimerOnActivate
@property(retain) id storeObject;	// G=0x1049d9; S=0x104999; converted property
@property(assign, nonatomic) int viewAvailability;	// G=0x104cd1; S=0x104ce1; @synthesize=_viewAvailability
+ (id)control;	// 0x104145
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x1040f1
+ (void)initialize;	// 0x104041
- (id)init;	// 0x10417d
- (void)_controlCreated:(id)created;	// 0x105b11
- (void)_controlNeedsAuth:(id)auth;	// 0x105f59
- (void)_enterCompleteState;	// 0x1055d5
- (void)_enterErrorState;	// 0x1053f9
- (void)_enterWaitingForAuthState;	// 0x105475
- (void)_enterWaitingForControlState;	// 0x105489
- (void)_enterWaitingForInitialState;	// 0x105375
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x105815
- (void)_handleWindowMaxBoundsChanged;	// 0x104541
- (void)_setState:(int)state;	// 0x105309
- (void)_showWaitTimer:(id)timer;	// 0x1057c5
- (void)_swapInNewController:(id)newController;	// 0x1058c5
- (void)_updateStateForAction:(int)action;	// 0x105859
- (id)accessibilityLabel;	// 0x104ae9
- (void)addControls;	// 0x105065
// declared property getter: - (BOOL)autoPlay;	// 0x104c71
// converted property getter: - (id)catalogControl;	// 0x104d01
// converted property getter: - (id)contentContainer;	// 0x104cf1
- (void)controlWasActivated;	// 0x104349
- (void)controlWasDeactivated;	// 0x1044ed
- (void)dealloc;	// 0x104291
- (void)didEnterErrorState;	// 0x1052fd
- (id)errorContent;	// 0x104f05
- (BOOL)isNetworkDependent;	// 0x1047d1
- (void)layoutSubcontrols;	// 0x104a35
- (void)markAsDirty;	// 0x104a11
// declared property getter: - (id)merchant;	// 0x104861
- (BOOL)recreateOnReselect;	// 0x1049f9
- (void)refreshDirtyPage;	// 0x105239
// declared property getter: - (BOOL)requiresAuthentication;	// 0x104c91
- (id)secureResourceAuthenticator;	// 0x104bf9
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x104c81
- (void)setCatalogAgent:(Class)agent;	// 0x104a25
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1047d5
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x104ca1
// declared property setter: - (void)setShouldStartWaitPromptTimerOnActivate:(BOOL)startWaitPromptTimerOnActivate;	// 0x104cc1
// converted property setter: - (void)setStoreObject:(id)object;	// 0x104999
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x104d11
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x104871
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x104ce1
- (BOOL)shouldAllowControllerContent;	// 0x105305
- (BOOL)shouldAllowTransitionOnSwap;	// 0x105301
- (BOOL)shouldShowWaitContent;	// 0x104f01
// declared property getter: - (BOOL)shouldStartWaitPromptTimerOnActivate;	// 0x104cb1
- (BOOL)showsHeader;	// 0x104669
- (id)storeMerchant;	// 0x1049e9
// converted property getter: - (id)storeObject;	// 0x1049d9
- (void)updateContent:(id)content;	// 0x105069
// declared property getter: - (int)viewAvailability;	// 0x104cd1
- (id)waitContent;	// 0x104e29
- (void)wasPopped;	// 0x104605
- (void)wasPushed;	// 0x1045b1
- (void)willEnterCompleteState;	// 0x1052f9
@end

