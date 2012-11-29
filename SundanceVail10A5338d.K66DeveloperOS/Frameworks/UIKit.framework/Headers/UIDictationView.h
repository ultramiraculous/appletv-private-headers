/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardDicationBackground, UIButton, UIDictationMeterView;

__attribute__((visibility("hidden")))
@interface UIDictationView : UIView {
	UIKeyboardDicationBackground *_background;	// 84 = 0x54
	UIDictationMeterView *_meterView;	// 88 = 0x58
	UIButton *_endpointButton;	// 92 = 0x5c
	UIButton *_endpointButtonLandscape;	// 96 = 0x60
	int _state;	// 100 = 0x64
	BOOL _keyboardInTransition;	// 104 = 0x68
	BOOL _automaticAppearanceWasEnabled;	// 105 = 0x69
}
@property(readonly, retain) UIButton *endpointButton;	// G=0x30fb20f1; converted property
+ (id)activeInstance;	// 0x30fb1d61
+ (Class)dictationViewClass;	// 0x30fb1c69
+ (CGSize)layoutSize;	// 0x30fb236d
+ (id)sharedInstance;	// 0x30fb1cc9
- (id)initWithFrame:(CGRect)frame;	// 0x30fb2619
- (void)applicationEnteredBackground;	// 0x30fb2309
- (CGPoint)backgroundOffset;	// 0x30fb23b1
- (CGPoint)contentOffset;	// 0x30fb2399
- (id)createEndpointButtonWithRect:(CGRect)rect action:(SEL)action;	// 0x30fb2175
- (CGSize)currentScreenSize;	// 0x30fb2251
- (void)dealloc;	// 0x30fb2e59
- (BOOL)drawsOwnBackground;	// 0x30fb28d9
// converted property getter: - (id)endpointButton;	// 0x30fb20f1
- (id)endpointButtonImageWithRect:(CGRect)rect pressed:(BOOL)pressed;	// 0x30fb1d71
- (void)endpointButtonPressed;	// 0x30fb2f11
- (void)finishReturnToKeyboard;	// 0x30fb24b5
- (void)keyboardDidShow:(id)keyboard;	// 0x30fb23c9
- (void)layoutSubviews;	// 0x30fb28e1
- (CGPoint)positionForShow;	// 0x30fb2355
- (void)prepareForReturnToKeyboard;	// 0x30fb2419
- (void)returnToKeyboard;	// 0x30fb24f9
- (void)setState:(int)state;	// 0x30fb257d
- (void)show;	// 0x30fb2351
- (BOOL)visible;	// 0x30fb2f45
@end
