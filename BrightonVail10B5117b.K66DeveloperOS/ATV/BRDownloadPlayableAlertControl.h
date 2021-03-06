/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRReflectedImageControl, BRDropShadowControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDownloadPlayableAlertControl : BRControl {
	BRDropShadowControl *_shadowControl;	// 84 = 0x54
	BRControl *_dialogBox;	// 88 = 0x58
	BRReflectedImageControl *_imageControl;	// 92 = 0x5c
	BRTextControl *_titleControl;	// 96 = 0x60
	BRTextControl *_clockStartWarningControl;	// 100 = 0x64
	BRTextControl *_directionsControl;	// 104 = 0x68
	id<BRMediaAsset> _asset;	// 108 = 0x6c
	double _activationTime;	// 112 = 0x70
}
+ (void)_imageLoadedOrErrored:(id)errored withImage:(id)image;	// 0x2d82c5
+ (void)_imageNotAvailable:(id)available;	// 0x2d8445
+ (void)_imageUpdated:(id)updated;	// 0x2d83cd
+ (void)_postPlayableAlertForAsset:(id)asset withAssetImage:(id)assetImage;	// 0x2d81a1
+ (void)postPlayableAlertForAsset:(id)asset;	// 0x2d70d1
- (id)init;	// 0x2d7249
- (BOOL)_dialogShouldBePosted;	// 0x2d7c99
- (BOOL)_isVideoPlayerControlActive;	// 0x2d7c55
- (void)_playAsset;	// 0x2d80f1
- (void)_postIfReady:(id)ready;	// 0x2d7b6d
- (void)_postWithControl:(id)control;	// 0x2d7d2d
- (void)_setAsset:(id)asset;	// 0x2d7e1d
- (void)_setImage:(id)image;	// 0x2d80d1
- (id)accessibilityLabel;	// 0x2d7b05
- (BOOL)brEventAction:(id)action;	// 0x2d76f5
- (void)controlWasActivated;	// 0x2d762d
- (void)dealloc;	// 0x2d7565
- (BOOL)isAccessibilityElement;	// 0x2d7b01
- (void)layoutSubcontrols;	// 0x2d77dd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d7671
@end

