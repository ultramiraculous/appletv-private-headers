/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRTextControl, BRAsyncImageControl, NSString;

__attribute__((visibility("hidden")))
@interface ATVGameVersusPreview : BRControl <BRReady> {
@private
	BRTextControl *_centerTextControl;	// 48 = 0x30
	BOOL _isReady;	// 52 = 0x34
	BRAsyncImageControl *_backgroundImageControl;	// 56 = 0x38
	BRAsyncImageControl *_leftImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_rightImageControl;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRAsyncImageControl *backgroundImageControl;	// G=0x339e36f9; @synthesize=_backgroundImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x339e34b1; S=0x339e34e9; 
@property(readonly, assign) BOOL isReady;	// G=0x339e34a1; converted property
@property(readonly, assign, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x339e3709; @synthesize=_leftImageControl
@property(readonly, assign, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x339e3719; @synthesize=_rightImageControl
- (id)init;	// 0x339e3149
- (id)_centerTextAttributes;	// 0x339e3729
- (void)_imageLoadedNotification:(id)notification;	// 0x339e374d
- (void)_setHiddenOnSubcontrols:(BOOL)subcontrols;	// 0x339e3841
// declared property getter: - (id)backgroundImageControl;	// 0x339e36f9
// declared property getter: - (id)centerText;	// 0x339e34b1
- (void)dealloc;	// 0x339e3375
- (void)getReady;	// 0x339e342d
// converted property getter: - (BOOL)isReady;	// 0x339e34a1
- (void)layoutSubcontrols;	// 0x339e353d
// declared property getter: - (id)leftImageControl;	// 0x339e3709
// declared property getter: - (id)rightImageControl;	// 0x339e3719
// declared property setter: - (void)setCenterText:(id)text;	// 0x339e34e9
@end
