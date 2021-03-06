/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRCursorLayer, BRHorizontalSegmentedWidget, NSTimer;

__attribute__((visibility("hidden")))
@interface BRCursorControl : BRControl {
	BRControl *_trackedControl;	// 84 = 0x54
	BRControl *_previousTrackedControl;	// 88 = 0x58
	BRCursorLayer *_cursorLayer;	// 92 = 0x5c
	int _style;	// 96 = 0x60
	BOOL _cursorInactive;	// 100 = 0x64
	BRHorizontalSegmentedWidget *_previousBadge;	// 104 = 0x68
	BRHorizontalSegmentedWidget *_badge;	// 108 = 0x6c
	NSTimer *_removePreviousBadgeTimer;	// 112 = 0x70
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 116 = 0x74
}
@property(assign) BOOL cursorInactive;	// G=0x3593d9; S=0x35931d; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x3593e9; converted property
@property(assign) int cursorStyle;	// G=0x35930d; S=0x359245; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x3595c9; S=0x3595d9; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x358fc9
- (void)_addCursor;	// 0x3595e9
- (void)_cursorFrameChanged:(id)changed;	// 0x359fd9
- (void)_focusChanged:(id)changed;	// 0x35a049
- (void)_removeCursor;	// 0x3596d9
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x35a4d9
- (void)_removePreviousTrackedControl;	// 0x35a535
- (void)_trackFocusedControl:(id)control;	// 0x359d99
- (void)_trackedBadgeUpdated:(id)updated;	// 0x359fe9
- (void)_updateBadgeForTrackedControl;	// 0x35a4a5
- (void)_updateCursorPositioning;	// 0x359749
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x35a0d9
- (void)_updatePreviousBadge;	// 0x35a471
- (void)controlWasActivated;	// 0x3593f9
// converted property getter: - (BOOL)cursorInactive;	// 0x3593d9
// converted property getter: - (id)cursorLayer;	// 0x3593e9
// converted property getter: - (int)cursorStyle;	// 0x35930d
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x3595c9
- (void)dealloc;	// 0x3590d1
- (void)layoutSubcontrols;	// 0x35943d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35944d
- (id)preferredActionForKey:(id)key;	// 0x3594f1
- (void)setAlpha:(float)alpha;	// 0x359c11
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x35931d
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x359245
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x3595d9
@end

