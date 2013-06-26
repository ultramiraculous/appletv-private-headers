/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import "SpringBoardUIServices-Structs.h"
#import "SBUIPasscodeNumberPadButton.h"
#import <TelephonyUI/TPNumberPadDarkStyleButton.h>


@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {
}
+ (float)_numberPadButtonOuterCircleDiameter;	// 0x3279ade1
+ (float)_numberPadButtonPaddingHeight;	// 0x3279ad51
+ (float)_numberPadButtonPaddingWidth;	// 0x3279ad95
+ (CGSize)defaultSize;	// 0x3279ac71
+ (UIEdgeInsets)paddingOutsideRing;	// 0x3279acf5
- (id)initForCharacter:(unsigned)character;	// 0x3279a979
- (int)characterType;	// 0x3279aa61
- (id)stringCharacter;	// 0x3279aa8d
@end
