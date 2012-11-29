/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextRange, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView {
	int _highlighted;	// 84 = 0x54
	NSTimer *_timer;	// 88 = 0x58
	UITextRange *_range;	// 92 = 0x5c
	id _placeholder;	// 96 = 0x60
	BOOL _didHaveText;	// 100 = 0x64
	BOOL _willInsertResult;	// 101 = 0x65
	float _diameter;	// 104 = 0x68
	float _margin;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL willInsertResult;	// G=0x33db01f9; S=0x33db0209; @synthesize=_willInsertResult
+ (id)activeInstance;	// 0x33daf575
+ (float)diameterForLineHeight:(float)lineHeight;	// 0x33daf479
+ (id)sharedInstance;	// 0x33daf521
+ (float)widthForLineHeight:(float)lineHeight;	// 0x33daf4b9
- (id)initWithFrame:(CGRect)frame;	// 0x33daf585
- (void)advanceLanding:(id)landing;	// 0x33daf811
- (void)dealloc;	// 0x33daf7d1
- (BOOL)delegateWasEmpty;	// 0x33dafa99
- (void)drawRect:(CGRect)rect;	// 0x33daf645
- (void)errorAnimationDidFinish;	// 0x33daff7d
- (void)placeDots;	// 0x33daf84d
// declared property setter: - (void)setWillInsertResult:(BOOL)insertResult;	// 0x33db0209
- (void)startLanding;	// 0x33dafac9
- (void)stopLanding;	// 0x33dafde1
- (void)stopLandingForError;	// 0x33daffb1
- (void)updatePosition;	// 0x33dafa89
// declared property getter: - (BOOL)willInsertResult;	// 0x33db01f9
@end
