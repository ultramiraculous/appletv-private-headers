/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRResponder.h"
#import "BRFocusContainer.h"

@class NSObject;
@protocol BREventDelegate;

__attribute__((visibility("hidden")))
@interface BRControl : XXUnknownSuperclass <BRFocusContainer, BRResponder> {
	BOOL _useUIViewAnimations;	// 48 = 0x30
	BRControl *_defaultFocus;	// 52 = 0x34
	BRControl *_focusedControl;	// 56 = 0x38
	BRControl *_keyEventTargetControl;	// 60 = 0x3c
	BOOL _acceptsFocus;	// 64 = 0x40
	BOOL _focused;	// 65 = 0x41
	BOOL _controlActive;	// 66 = 0x42
	BOOL _inhibitsFocusForChildren;	// 67 = 0x43
	BOOL _inhibitsScrollFocusForChildren;	// 68 = 0x44
	NSObject<BREventDelegate> *_brEventDelegate;	// 72 = 0x48
	BOOL _focusByDirectionEnabled;	// 76 = 0x4c
	XXStruct_qlg9jA _focusCursorHaloAdjustment;	// 80 = 0x50
	BOOL _ignoreDirectionalInfoForFocus;	// 84 = 0x54
	BRControl *__previousFocus;	// 88 = 0x58
	id _eventHandlerBlock;	// 92 = 0x5c
}
@property(retain, nonatomic) BRControl *_previousFocus;	// G=0x2780dd; S=0x2780ed; @synthesize=__previousFocus
@property(assign) BOOL acceptsFocus;	// G=0x278ebd; S=0x278e79; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x282d89; S=0x282dd9; 
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x282cfd; S=0x282d4d; 
@property(retain) id actions;	// G=0x279165; S=0x279139; converted property
@property(assign) CGPoint anchorPoint;	// G=0x278151; S=0x278121; converted property
@property(assign) BOOL avoidsCursor;	// G=0x278f95; S=0x278f51; converted property
@property(assign) CGColorRef borderColor;	// G=0x278a65; S=0x278a39; converted property
@property(assign) float borderWidth;	// G=0x278ab9; S=0x278a8d; converted property
@property(retain) BRControl *defaultFocus;	// G=0x278e0d; S=0x278d7d; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x278099; S=0x2780ad; @synthesize=_brEventDelegate
@property(copy, nonatomic) id eventHandlerBlock;	// G=0x2780fd; S=0x278111; @synthesize=_eventHandlerBlock
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x278f41; converted property
@property(retain) BRControl *focusedControl;	// G=0x278d6d; S=0x278ca9; converted property
@property(retain) id identifier;	// G=0x277ae9; S=0x277ab1; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x2780bd; S=0x2780cd; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x278f01; S=0x278ecd; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x278f29; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x278089; S=0x277ff5; converted property
@property(retain) id name;	// G=0x2785d1; S=0x2785a5; converted property
@property(retain) id object;	// G=0x277a7d; S=0x277a45; converted property
@property(retain) id selectionHandler;	// G=0x279031; S=0x279015; converted property
+ (id)control;	// 0x277895
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x34c295
+ (Class)layerClass;	// 0x2778dd
- (id)init;	// 0x2778f9
- (id)initWithLayout:(id)layout;	// 0x277731
- (void)_addChainedAnimation:(id)animation preemptedAnimation:(id)animation2 timeOffset:(double)offset forKey:(id)key;	// 0x3f1bc9
- (void)_addChainedAnimation:(id)animation preemptedDuration:(double)duration forKey:(id)key;	// 0x3f1eb1
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x282eb5
- (id)_axSubviews;	// 0x28302d
- (id)_axSuperviews;	// 0x282e15
- (BOOL)_changeFocusTo:(id)to;	// 0x279559
- (void)_didRemoveSubcontrol:(id)subcontrol;	// 0x27918d
- (void)_dumpFocusTree;	// 0x2799dd
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x2793b9
- (BOOL)_focusControlTreeWithDefaults;	// 0x279351
- (id)_focusedLeafControl;	// 0x2797f9
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x279241
- (id)_initialFocus;	// 0x27986d
- (id)_parentScrollControl;	// 0x2f68f9
// declared property getter: - (id)_previousFocus;	// 0x2780dd
- (void)_reevaluateFocusTree;	// 0x279819
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x2f697d
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x2f69ad
- (void)_scrollingCompleted;	// 0x2f67c1
- (void)_scrollingInitiated;	// 0x2f680d
- (void)_setControlFocused:(BOOL)focused;	// 0x279775
- (void)_setFocus:(id)focus;	// 0x2795f5
- (double)_timeOffsetForExistingAnimationForKey:(id)key preemptedAnimation:(id *)animation;	// 0x3f19b9
- (CGRect)_visibleRectOfControl:(id)control;	// 0x2f6921
- (void)_visibleScrollRectChanged;	// 0x2f69ed
// converted property getter: - (BOOL)acceptsFocus;	// 0x278ebd
- (id)accessibilityAncestor:(Class)ancestor;	// 0x282919
- (id)accessibilityControls;	// 0x282891
- (BOOL)accessibilityElementIsHidden;	// 0x282965
- (CGRect)accessibilityFrame;	// 0x2827bd
- (BOOL)accessibilityIgnoresControlReload;	// 0x28288d
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x2828c9
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x282d89
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x282cfd
- (unsigned long long)accessibilityTraits;	// 0x2829e5
- (id)actionForKey:(id)key;	// 0x27910d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x277f69
// converted property getter: - (id)actions;	// 0x279165
- (BOOL)active;	// 0x278435
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x27905d
// converted property getter: - (CGPoint)anchorPoint;	// 0x278151
- (id)animationForKey:(id)key;	// 0x27908d
// converted property getter: - (BOOL)avoidsCursor;	// 0x278f95
- (id)badge;	// 0x2c58d1
// converted property getter: - (CGColorRef)borderColor;	// 0x278a65
// converted property getter: - (float)borderWidth;	// 0x278ab9
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x279909
- (BOOL)brEventAction:(id)action;	// 0x277b1d
- (BOOL)brKeyEvent:(id)event;	// 0x277da1
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x27818d
- (long)controlCount;	// 0x27894d
- (void)controlDidDisplayAsModalDialog;	// 0x35f579
- (id)controlForPoint:(CGPoint)point;	// 0x279055
- (void)controlWasActivated;	// 0x278445
- (void)controlWasDeactivated;	// 0x2784f5
- (void)controlWasFocused;	// 0x278f39
- (void)controlWasUnfocused;	// 0x278f3d
- (void)dealloc;	// 0x277975
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x2799d9
// converted property getter: - (id)defaultFocus;	// 0x278e0d
- (void)didAddSubview:(id)subview;	// 0x278695
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x279959
// declared property getter: - (id)eventDelegate;	// 0x278099
// declared property getter: - (id)eventHandlerBlock;	// 0x2780fd
- (id)firstControlNamed:(id)named;	// 0x2785f9
- (id)focusCandidates;	// 0x2798bd
- (CGRect)focusCursorFrame;	// 0x278fc5
- (XXStruct_qlg9jA)focusCursorHaloAdjutment;	// 0x278ff9
- (id)focusObjectForCandidate:(id)candidate;	// 0x279945
// converted property getter: - (id)focusedControl;	// 0x278d6d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x278e1d
- (BOOL)handlePlayButton:(id)button;	// 0x1ef989
// converted property getter: - (id)identifier;	// 0x277ae9
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x2780bd
- (id)inheritedValueForKey:(id)key;	// 0x277e2d
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x278f01
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x278f29
- (id)initialFocus;	// 0x278bbd
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x278635
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x278665
// converted property getter: - (BOOL)isFocused;	// 0x278f41
// converted property getter: - (id)keyEventTargetControl;	// 0x278089
- (void)layoutSubcontrols;	// 0x278a35
- (void)layoutSubviews;	// 0x277fbd
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x1dcfe1
// converted property getter: - (id)name;	// 0x2785d1
// converted property getter: - (id)object;	// 0x277a7d
- (id)parent;	// 0x2783e5
- (id)parentScrollControl;	// 0x2f68d5
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x2798e5
- (id)preferredActionForKey:(id)key;	// 0x279059
- (float)preferredCursorRadius;	// 0x2c58cd
- (void)removeAllAnimations;	// 0x2790e5
- (void)removeAnimationForKey:(id)key;	// 0x2790b9
- (void)removeFromSuperview;	// 0x278985
- (id)root;	// 0x2783b9
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x2f68ed
- (void)scrollPoint:(CGPoint)point;	// 0x2f6859
- (void)scrollRectToVisible:(CGRect)visible;	// 0x2f6875
- (void)scrollingCompleted;	// 0x2f68e5
- (void)scrollingInitiated;	// 0x2f68e9
// converted property getter: - (id)selectionHandler;	// 0x279031
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x278e79
// declared property setter: - (void)setAccessibilityOutputsRange:(BOOL)range;	// 0x282dd9
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x282d4d
// converted property setter: - (void)setActions:(id)actions;	// 0x279139
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x278121
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x278f51
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x278a39
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x278a8d
- (void)setControls:(id)controls;	// 0x278759
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x278d7d
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x279051
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x2780ad
// declared property setter: - (void)setEventHandlerBlock:(id)block;	// 0x278111
- (void)setFocusCursorHaloAdjustment:(XXStruct_qlg9jA)adjustment;	// 0x278fe9
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x310fc1
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x278ca9
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x277ab1
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x2780cd
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x278ecd
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x278f11
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x277ff5
// converted property setter: - (void)setName:(id)name;	// 0x2785a5
// converted property setter: - (void)setObject:(id)object;	// 0x277a45
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x279015
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x277e79
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x277dfd
// declared property setter: - (void)set_previousFocus:(id)focus;	// 0x2780ed
- (int)touchSensitivity;	// 0x27904d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x277dd1
- (CGRect)visibleScrollRect;	// 0x2f68ad
- (void)visibleScrollRectChanged;	// 0x2f689d
- (void)windowMaxBoundsChanged;	// 0x278ae1
@end
