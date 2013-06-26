/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class BRWindow, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRPopUpManager : BRSingleton {
	NSMutableArray *_queuedPopUps;	// 4 = 0x4
	BRWindow *_popUpContainerWindow;	// 8 = 0x8
	double _lastUpdate;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x3f8021
+ (id)singleton;	// 0x3f8031
- (id)init;	// 0x3f8041
- (void)_addControlToQueue:(id)queue;	// 0x3f8b11
- (void)_animateRemovePopupWithIdentifier:(id)identifier;	// 0x3f8439
- (BOOL)_canDisplay;	// 0x3f8a89
- (void)_displayPopUp:(id)up;	// 0x3f8849
- (id)_popUpForIdentifier:(id)identifier;	// 0x3f89d9
- (void)_processPopUps;	// 0x3f87a9
- (void)_removeAnimationFinished:(id)finished;	// 0x3f86ed
- (void)_removeControlFromQueue:(id)queue;	// 0x3f8b7d
- (void)_removePopup:(id)popup;	// 0x3f860d
- (void)_removePopupWithIdentifier:(id)identifier;	// 0x3f85c1
- (void)_updateActivity;	// 0x3f8ac9
- (void)dealloc;	// 0x3f80dd
- (void)postPopUpWithControl:(id)control identifier:(id)identifier position:(unsigned)position size:(CGSize)size options:(id)options;	// 0x3f8181
- (void)removePopUpWithIdentifier:(id)identifier;	// 0x3f8425
@end
