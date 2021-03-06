/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
	id _touchTarget;	// 56 = 0x38
	SEL _touchAction;	// 60 = 0x3c
	unsigned _passedHitTest : 1;	// 64 = 0x40
	unsigned _defaultPrevented : 1;	// 64 = 0x40
	unsigned _inJavaScriptGesture : 1;	// 64 = 0x40
	float _originalGestureDistance;	// 68 = 0x44
	float _originalGestureAngle;	// 72 = 0x48
	int _type;	// 76 = 0x4c
	CGPoint _locationInWindow;	// 80 = 0x50
	NSMutableArray *_touchLocations;	// 88 = 0x58
	NSMutableArray *_touchIdentifiers;	// 92 = 0x5c
	NSMutableArray *_touchPhases;	// 96 = 0x60
	float _scale;	// 100 = 0x64
	float _rotation;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;	// G=0x34881241; S=0x34881255; @synthesize=_defaultPrevented
@property(readonly, assign, nonatomic) BOOL inJavaScriptGesture;	// G=0x348812cd; @synthesize=_inJavaScriptGesture
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x34881285; @synthesize=_locationInWindow
@property(readonly, assign, nonatomic) float rotation;	// G=0x348812f1; @synthesize=_rotation
@property(readonly, assign, nonatomic) float scale;	// G=0x348812e1; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *touchIdentifiers;	// G=0x348812ad; S=0x345f3215; @synthesize=_touchIdentifiers
@property(retain, nonatomic) NSMutableArray *touchLocations;	// G=0x3488129d; S=0x345f3205; @synthesize=_touchLocations
@property(retain, nonatomic) NSMutableArray *touchPhases;	// G=0x348812bd; S=0x345f3225; @synthesize=_touchPhases
@property(readonly, assign, nonatomic) int type;	// G=0x34881275; @synthesize=_type
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x345f2f85
- (unsigned)_getNextTouchIdentifier;	// 0x34880ac5
- (BOOL)_hitTestTouches:(id)touches;	// 0x346b14dd
- (id)_identifiersDescription;	// 0x348806d1
- (id)_locationsDescription;	// 0x34880561
- (id)_phaseDescription:(int)description;	// 0x348807fd
- (id)_phasesDescription;	// 0x34880855
- (void)_processTouches:(id)touches withEvent:(id)event type:(int)type;	// 0x34880f89
- (void)_recordTouches:(id)touches type:(int)type;	// 0x34880b21
- (void)_reset;	// 0x346b1751
- (void)_resetGestureRecognizer;	// 0x346b170d
- (id)_typeDescription;	// 0x34880505
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x34881185
- (void)dealloc;	// 0x34880499
- (id)description;	// 0x34880991
// declared property getter: - (BOOL)inJavaScriptGesture;	// 0x348812cd
// declared property getter: - (BOOL)isDefaultPrevented;	// 0x34881241
// declared property getter: - (CGPoint)locationInWindow;	// 0x34881285
// declared property getter: - (float)rotation;	// 0x348812f1
// declared property getter: - (float)scale;	// 0x348812e1
// declared property setter: - (void)setDefaultPrevented:(BOOL)prevented;	// 0x34881255
// declared property setter: - (void)setTouchIdentifiers:(id)identifiers;	// 0x345f3215
// declared property setter: - (void)setTouchLocations:(id)locations;	// 0x345f3205
// declared property setter: - (void)setTouchPhases:(id)phases;	// 0x345f3225
// declared property getter: - (id)touchIdentifiers;	// 0x348812ad
// declared property getter: - (id)touchLocations;	// 0x3488129d
// declared property getter: - (id)touchPhases;	// 0x348812bd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x346b1419
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34881205
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x348811c9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3488118d
// declared property getter: - (int)type;	// 0x34881275
@end

