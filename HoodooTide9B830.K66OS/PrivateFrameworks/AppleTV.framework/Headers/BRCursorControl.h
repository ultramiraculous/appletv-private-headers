/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 48 = 0x30
	BRControl *_previousTrackedControl;	// 52 = 0x34
	BRCursorLayer *_cursorLayer;	// 56 = 0x38
	int _style;	// 60 = 0x3c
	BOOL _cursorInactive;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_previousBadge;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_badge;	// 72 = 0x48
	NSTimer *_removePreviousBadgeTimer;	// 76 = 0x4c
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 80 = 0x50
}
@property(assign) BOOL cursorInactive;	// G=0x329c89c9; S=0x329c890d; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x329c89d9; converted property
@property(assign) int cursorStyle;	// G=0x329c88fd; S=0x329c8839; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x329c8bb9; S=0x329c8bc9; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x329c85ad
- (void)_addCursor;	// 0x329c8bd9
- (void)_cursorFrameChanged:(id)changed;	// 0x329c95b1
- (void)_focusChanged:(id)changed;	// 0x329c9621
- (void)_removeCursor;	// 0x329c8ce1
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x329c9aa1
- (void)_removePreviousTrackedControl;	// 0x329c9b01
- (void)_trackFocusedControl:(id)control;	// 0x329c9369
- (void)_trackedBadgeUpdated:(id)updated;	// 0x329c95c1
- (void)_updateBadgeForTrackedControl;	// 0x329c9a71
- (void)_updateCursorPositioning;	// 0x329c8d55
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x329c96a5
- (void)_updatePreviousBadge;	// 0x329c9a41
- (void)controlWasActivated;	// 0x329c89e9
// converted property getter: - (BOOL)cursorInactive;	// 0x329c89c9
// converted property getter: - (id)cursorLayer;	// 0x329c89d9
// converted property getter: - (int)cursorStyle;	// 0x329c88fd
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x329c8bb9
- (void)dealloc;	// 0x329c86b9
- (void)layoutSubcontrols;	// 0x329c8a2d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x329c8a3d
- (id)preferredActionForKey:(id)key;	// 0x329c8ae1
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x329c890d
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x329c8839
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x329c8bc9
- (void)setOpacity:(float)opacity;	// 0x329c91fd
@end

