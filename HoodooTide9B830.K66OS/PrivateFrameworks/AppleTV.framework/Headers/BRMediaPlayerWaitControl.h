/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRTransportControl, BRWaitSpinnerControl, BRDescriptionOverlayControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
@private
	id<BRMediaAsset> _asset;	// 48 = 0x30
	BRDescriptionOverlayControl *_descriptionControl;	// 52 = 0x34
	BRTextControl *_loadingControl;	// 56 = 0x38
	BRWaitSpinnerControl *_loadingSpinner;	// 60 = 0x3c
	BRTextControl *_readyToPlayInNMinsControl;	// 64 = 0x40
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 68 = 0x44
	BRTextControl *_bandwidthHintControl;	// 72 = 0x48
	BRTextControl *_readyToPlayControl;	// 76 = 0x4c
	BRTextControl *_authorizingControl;	// 80 = 0x50
	BRWaitSpinnerControl *_authorizingSpinner;	// 84 = 0x54
	BRTransportControl *_transport;	// 88 = 0x58
}
- (id)initWithAsset:(id)asset;	// 0x329ba181
- (void)_addFadeAnimationToControl:(id)control;	// 0x329bb481
- (void)dealloc;	// 0x329ba7a9
- (void)layoutSubcontrols;	// 0x329baedd
- (void)setAuthorizing;	// 0x329bae21
- (void)setBandwidthHintForPreview:(BOOL)preview;	// 0x329ba8bd
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x329baac5
- (void)setReadyToPlay;	// 0x329bad7d
@end
