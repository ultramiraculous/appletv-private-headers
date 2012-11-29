/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayoutProtocol.h"
#import "UIView.h"

@class UITouch, NSMutableArray;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray *_uncommittedTouches;	// 84 = 0x54
	UITouch *_activeTouch;	// 88 = 0x58
	UITouch *_shiftKeyTouch;	// 92 = 0x5c
	int _orientation;	// 96 = 0x60
	int m_orientation;	// 100 = 0x64
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x3466cff1; S=0x3466792d; @synthesize=_activeTouch
@property(assign) int orientation;	// G=0x3464591d; S=0x3463a15d; @synthesize=m_orientation
@property(retain, nonatomic) UITouch *shiftKeyTouch;	// G=0x3478d355; S=0x346455f1; @synthesize=_shiftKeyTouch
- (id)initWithFrame:(CGRect)frame;	// 0x34639c85
- (id)activationIndicatorView;	// 0x3478d0f5
// declared property getter: - (id)activeTouch;	// 0x3466cff1
- (void)addSwipeRecognizer;	// 0x3478ced1
- (void)addWipeRecognizer;	// 0x3478cffd
- (id)baseKeyForString:(id)string;	// 0x3478d32d
- (BOOL)canProduceString:(id)string;	// 0x3478d0fd
- (id)candidateList;	// 0x3478d0c9
- (void)changeToKeyplane:(id)keyplane;	// 0x3478d339
- (void)clearAllKeyDelegates;	// 0x3478d0f1
- (void)clearUnusedObjects:(BOOL)objects;	// 0x3478d095
- (void)commitTouchesBeforeTouch:(id)touch;	// 0x346654f1
- (void)deactivateActiveKeys;	// 0x3478d099
- (void)dealloc;	// 0x346e4899
- (void)didClearInput;	// 0x34664121
- (BOOL)doesKeyCharging;	// 0x3478d0b9
- (CGSize)dragGestureSize;	// 0x3478d2f9
- (float)flickDistance;	// 0x3478d2b1
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x3478d305
- (SEL)handlerForNotification:(id)notification;	// 0x3478d329
- (BOOL)hasCandidateKeys;	// 0x3478d0cd
- (float)hitBuffer;	// 0x3478d2ad
- (BOOL)ignoresShiftState;	// 0x3478d0a5
- (BOOL)isShiftKeyBeingHeld;	// 0x3478d0b1
- (BOOL)isShiftKeyPlaneChooser;	// 0x3478d0b5
- (id)keyplaneForKey:(id)key;	// 0x3478d331
- (id)keyplaneNamed:(id)named;	// 0x3478d335
- (void)longPressAction;	// 0x3478d0bd
// declared property getter: - (int)orientation;	// 0x3464591d
- (BOOL)performReturnAction;	// 0x3478d0c1
- (BOOL)performSpaceAction;	// 0x3478d0c5
- (void)phraseBoundaryDidChange;	// 0x3478d2a9
- (void)restoreDefaultsForAllKeys;	// 0x3478d0e5
- (void)restoreDefaultsForKey:(id)key;	// 0x3478d0e1
- (void)setAction:(SEL)action forKey:(id)key;	// 0x3478d0d9
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x3466792d
- (void)setAutoshift:(BOOL)autoshift;	// 0x3478d0ad
- (void)setDelegate:(id)delegate forKey:(id)key;	// 0x3478d0e9
- (void)setLabel:(id)label forKey:(id)key;	// 0x3478d0d1
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x3478d0dd
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3463a15d
- (void)setShift:(BOOL)shift;	// 0x3478d0a9
// declared property setter: - (void)setShiftKeyTouch:(id)touch;	// 0x346455f1
- (void)setTarget:(id)target forKey:(id)key;	// 0x3478d0d5
// declared property getter: - (id)shiftKeyTouch;	// 0x3478d355
- (BOOL)shouldShowIndicator;	// 0x3478d0f9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x3478d091
- (id)simulateTouch:(CGPoint)touch;	// 0x3478d33d
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x3478d349
- (void)swipeGestureRecognized:(id)recognized;	// 0x3478cecd
- (void)touchCancelled:(id)cancelled;	// 0x3478d10d
- (void)touchDown:(id)down;	// 0x3478d101
- (void)touchDragged:(id)dragged;	// 0x3478d105
- (void)touchUp:(id)up;	// 0x3478d109
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3466534d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3478d111
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3466793d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x346a1009
- (BOOL)updateKeysWithDelegates;	// 0x3478d0ed
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x3478d09d
- (BOOL)usesAutoShift;	// 0x3478d0a1
- (void)wipeGestureRecognized:(id)recognized;	// 0x3478cfa9
@end
