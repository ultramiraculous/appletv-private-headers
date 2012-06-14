/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, BRWindow;

__attribute__((visibility("hidden")))
@interface BRPopUpManager : BRSingleton {
	NSMutableArray *_queuedPopUps;	// 4 = 0x4
	BRWindow *_popUpContainerWindow;	// 8 = 0x8
	double _lastUpdate;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x33b29d
+ (id)singleton;	// 0x33b2ad
- (id)init;	// 0x33b2bd
- (void)_addControlToQueue:(id)queue;	// 0x33bd91
- (void)_animateRemovePopupWithIdentifier:(id)identifier;	// 0x33b6b9
- (BOOL)_canDisplay;	// 0x33bd09
- (void)_displayPopUp:(id)up;	// 0x33bac9
- (id)_popUpForIdentifier:(id)identifier;	// 0x33bc5d
- (void)_processPopUps;	// 0x33ba29
- (void)_removeAnimationFinished:(id)finished;	// 0x33b96d
- (void)_removeControlFromQueue:(id)queue;	// 0x33bdfd
- (void)_removePopup:(id)popup;	// 0x33b88d
- (void)_removePopupWithIdentifier:(id)identifier;	// 0x33b841
- (void)_updateActivity;	// 0x33bd49
- (void)dealloc;	// 0x33b359
- (void)postPopUpWithControl:(id)control identifier:(id)identifier position:(unsigned)position size:(CGSize)size options:(id)options;	// 0x33b401
- (void)removePopUpWithIdentifier:(id)identifier;	// 0x33b6a5
@end

