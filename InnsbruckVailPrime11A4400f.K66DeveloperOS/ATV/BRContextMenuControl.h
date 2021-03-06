/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "ATVAutoDismissable.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRBoxListControl;

__attribute__((visibility("hidden")))
@interface BRContextMenuControl : BRControl <ATVAutoDismissable> {
	BRControl *_endPositionControl;	// 84 = 0x54
	BRControl *_startPositionControl;	// 88 = 0x58
	BRControl *_dimControl;	// 92 = 0x5c
	BRControl *_dimPanel;	// 96 = 0x60
	CGRect _endPositionControlFrame;	// 100 = 0x64
	CGRect _startPositionControlFrame;	// 116 = 0x74
	CGRect _dimControlFrame;	// 132 = 0x84
	BRControl *_container;	// 148 = 0x94
	BRBoxListControl *_contextBox;	// 152 = 0x98
	BRBoxListControl *_detailContextBox;	// 156 = 0x9c
	BOOL showingDetailContextBox;	// 160 = 0xa0
	int _dimOption;	// 164 = 0xa4
	NSTimer *_autoDismissTimer;	// 168 = 0xa8
	BOOL _allowAutoDismiss;	// 172 = 0xac
	long _autoDismissIdx;	// 176 = 0xb0
}
@property(retain) BRControl *dimControl;	// G=0x31c77d; S=0x31c741; converted property
@property(assign) int dimOption;	// G=0x31c7ad; S=0x31c78d; converted property
@property(retain) BRControl *endPositionControl;	// G=0x31c731; S=0x31c6f5; converted property
@property(assign) BOOL isVisible;	// G=0x31cd19; S=0x31cbe9; converted property
@property(retain) id providers;	// G=0x31c5e1; S=0x31c5a5; converted property
@property(retain) BRControl *startPositionControl;	// G=0x31c6e5; S=0x31c6a9; converted property
- (id)init;	// 0x31c211
- (void)_addAnimationsForDisplayState:(BOOL)displayState;	// 0x31cdf1
- (void)_autoDismissTimerFired:(id)fired;	// 0x31cd45
- (CGRect)_dimControlFrame;	// 0x31d645
- (void)_dissmissAnimationComplete;	// 0x31d415
- (CGRect)_endPositionControlFrame;	// 0x31d43d
- (void)_flipToContextMenu;	// 0x31d80d
- (void)_flipToDetailContextMenu;	// 0x31d749
- (CGRect)_startPositionControlFrame;	// 0x31d541
- (BOOL)autoDismiss;	// 0x31cd89
- (BOOL)brEventAction:(id)action;	// 0x31c489
- (void)controlWasDeactivated;	// 0x31c435
- (void)dealloc;	// 0x31c36d
- (void)didMoveToSuperview;	// 0x31cce1
// converted property getter: - (id)dimControl;	// 0x31c77d
// converted property getter: - (int)dimOption;	// 0x31c7ad
// converted property getter: - (id)endPositionControl;	// 0x31c731
// converted property getter: - (BOOL)isVisible;	// 0x31cd19
- (void)layoutSubcontrols;	// 0x31c7bd
// converted property getter: - (id)providers;	// 0x31c5e1
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x31cd69
- (void)setDetailProvider:(id)provider initialSelection:(long)selection;	// 0x31c601
// converted property setter: - (void)setDimControl:(id)control;	// 0x31c741
// converted property setter: - (void)setDimOption:(int)option;	// 0x31c78d
// converted property setter: - (void)setEndPositionControl:(id)control;	// 0x31c6f5
// converted property setter: - (void)setIsVisible:(BOOL)visible;	// 0x31cbe9
- (void)setProvider:(id)provider;	// 0x31c565
// converted property setter: - (void)setProviders:(id)providers;	// 0x31c5a5
// converted property setter: - (void)setStartPositionControl:(id)control;	// 0x31c6a9
// converted property getter: - (id)startPositionControl;	// 0x31c6e5
@end

