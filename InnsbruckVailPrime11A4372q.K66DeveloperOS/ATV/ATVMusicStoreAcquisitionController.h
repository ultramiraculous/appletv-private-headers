/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRSecureResource.h"

@class BRWaitPromptControl, BRMediaPlayerWaitControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <BRSecureResource> {
	NSDictionary *_offer;	// 100 = 0x64
	BRMediaPlayerWaitControl *_loadingControl;	// 104 = 0x68
	BRWaitPromptControl *_waitPrompt;	// 108 = 0x6c
	BOOL _initiatePlaybackOnCompletion;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL initiatePlaybackOnCompletion;	// G=0x1c6211; S=0x1c6221; @synthesize=_initiatePlaybackOnCompletion
- (id)initWithOffer:(id)offer;	// 0x1c5d6d
- (id)initWithOffer:(id)offer initiatePlaybackOnCompletion:(BOOL)completion;	// 0x1c5d81
- (void)_acquire;	// 0x1c6231
- (void)_acquisitionFailed:(id)failed;	// 0x1c6569
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x1c68c5
- (void)_attemptPlaybackOfPurchase:(id)purchase;	// 0x1c6b11
- (void)_dismiss:(id)dismiss;	// 0x1c6729
- (void)_dismissAfterPlayerIsActivated;	// 0x1c67a5
- (void)_enablePrompt:(id)prompt;	// 0x1c6445
- (void)_mediaPlayerControllerActivated:(id)activated;	// 0x1c681d
- (void)_purchaseAcquired:(id)acquired;	// 0x1c6539
- (void)_redownloadAcquired:(id)acquired;	// 0x1c6879
- (void)_rentalAcquired:(id)acquired;	// 0x1c6499
- (void)dealloc;	// 0x1c6005
// declared property getter: - (BOOL)initiatePlaybackOnCompletion;	// 0x1c6211
- (id)secureResourceAuthenticator;	// 0x1c6095
// declared property setter: - (void)setInitiatePlaybackOnCompletion:(BOOL)completion;	// 0x1c6221
- (void)wasPopped;	// 0x1c61b5
- (void)wasPushed;	// 0x1c6185
@end

