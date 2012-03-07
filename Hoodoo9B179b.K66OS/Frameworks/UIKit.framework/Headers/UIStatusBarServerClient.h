/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"


@protocol UIStatusBarServerClient
- (void)statusBarServer:(id)server didReceiveDoubleHeightStatusString:(id)string forStyle:(int)style;
- (void)statusBarServer:(id)server didReceiveGlowAnimationState:(BOOL)state forStyle:(int)style;
- (void)statusBarServer:(id)server didReceiveStatusBarData:(XXStruct_rfflIA *)data withActions:(int)actions;
- (void)statusBarServer:(id)server didReceiveStyleOverrides:(int)overrides;
@end

