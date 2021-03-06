/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView {
}
+ (id)activeInstance;	// 0x3491db2d
+ (id)sharedInstance;	// 0x3491dad1
- (id)initWithFrame:(CGRect)frame;	// 0x3491d995
- (BOOL)centerPopUpOverKey;	// 0x3491db6d
- (void)cleanupForFadeOrHide;	// 0x3491e1f1
- (void)fade;	// 0x3491e27d
- (void)fadeWithDelay:(double)delay;	// 0x3491e2bd
- (void)hide;	// 0x3491e305
- (void)performShowAnimation;	// 0x3491dc29
- (CGSize)preferredSize;	// 0x3491db3d
- (void)setKeyboardDimmedForDictation:(BOOL)dictation;	// 0x3491db71
- (void)show;	// 0x3491e15d
- (BOOL)usesTable;	// 0x3491db69
@end

