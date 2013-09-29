/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDropShadowControl, BRTextControl, BRReflectedImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreDownloadFailurePopup : BRControl {
	BRControl *_boundingControl;	// 84 = 0x54
	BRTextControl *_directionsTextCtl;	// 88 = 0x58
	BRTextControl *_messageTextCtl;	// 92 = 0x5c
	BRTextControl *_optionsTextCtl;	// 96 = 0x60
	BRReflectedImageControl *_warningImage;	// 100 = 0x64
	BRDropShadowControl *_shadow;	// 104 = 0x68
	CGSize _size;	// 108 = 0x6c
}
+ (void)_postDialog:(id)dialog;	// 0x1e89f9
+ (void)_postDialogWhenReady:(id)ready;	// 0x1e8949
+ (void)postDownloadFailurePopup:(id)popup;	// 0x1e8831
- (id)_initWithAsset:(id)asset;	// 0x1e8a5d
- (BOOL)brEventAction:(id)action;	// 0x1e9161
- (void)layoutSubcontrols;	// 0x1e9191
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1e901d
@end
