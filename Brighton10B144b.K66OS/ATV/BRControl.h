/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
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
	id _eventHandlerBlock;	// 88 = 0x58
	BRControl *__previousFocus;	// 92 = 0x5c
}
@property(retain, nonatomic) BRControl *_previousFocus;	// G=0x287911; S=0x287921; @synthesize=__previousFocus
@property(assign) BOOL acceptsFocus;	// G=0x2886cd; S=0x288689; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x2927f1; S=0x292841; 
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x292765; S=0x2927b5; 
@property(retain) id actions;	// G=0x288a01; S=0x2889d5; converted property
@property(assign) CGPoint anchorPoint;	// G=0x287961; S=0x287931; converted property
@property(assign) BOOL avoidsCursor;	// G=0x2887a5; S=0x288761; converted property
@property(assign) CGColorRef borderColor;	// G=0x288275; S=0x288249; converted property
@property(assign) float borderWidth;	// G=0x2882c9; S=0x28829d; converted property
@property(retain) BRControl *defaultFocus;	// G=0x28861d; S=0x28858d; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x2878a9; S=0x2878bd; @synthesize=_brEventDelegate
@property(copy, nonatomic) id eventHandlerBlock;	// G=0x2878ed; S=0x287901; @synthesize=_eventHandlerBlock
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x288751; converted property
@property(retain) BRControl *focusedControl;	// G=0x28857d; S=0x2884b9; converted property
@property(retain) id identifier;	// G=0x2872b9; S=0x287281; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x2878cd; S=0x2878dd; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x288711; S=0x2886dd; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x288739; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x287859; S=0x2877c5; converted property
@property(retain) id name;	// G=0x287de1; S=0x287db5; converted property
@property(retain) id object;	// G=0x28724d; S=0x287215; converted property
@property(retain) id selectionHandler;	// G=0x288841; S=0x288825; converted property
+ (id)control;	// 0x287065
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x35e531
+ (Class)layerClass;	// 0x2870ad
- (id)init;	// 0x2870c9
- (id)initWithLayout:(id)layout;	// 0x286f01
- (void)_addChainedAnimation:(id)animation preemptedAnimation:(id)animation2 timeOffset:(double)offset forKey:(id)key;	// 0x408f39
- (void)_addChainedAnimation:(id)animation preemptedDuration:(double)duration forKey:(id)key;	// 0x409221
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x29291d
- (id)_axSubviews;	// 0x292a95
- (id)_axSuperviews;	// 0x29287d
- (BOOL)_changeFocusTo:(id)to;	// 0x288df5
- (void)_didRemoveSubcontrol:(id)subcontrol;	// 0x288a29
- (void)_dumpFocusTree;	// 0x289279
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x288c55
- (BOOL)_focusControlTreeWithDefaults;	// 0x288bed
- (id)_focusedLeafControl;	// 0x289095
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x288add
- (id)_initialFocus;	// 0x289109
- (id)_parentScrollControl;	// 0x3076b9
// declared property getter: - (id)_previousFocus;	// 0x287911
- (void)_reevaluateFocusTree;	// 0x2890b5
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x30773d
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x30776d
- (void)_scrollingCompleted;	// 0x307581
- (void)_scrollingInitiated;	// 0x3075cd
- (void)_setControlFocused:(BOOL)focused;	// 0x289011
- (void)_setFocus:(id)focus;	// 0x288e91
- (double)_timeOffsetForExistingAnimationForKey:(id)key preemptedAnimation:(id *)animation;	// 0x408d29
- (CGRect)_visibleRectOfControl:(id)control;	// 0x3076e1
- (void)_visibleScrollRectChanged;	// 0x3077ad
// converted property getter: - (BOOL)acceptsFocus;	// 0x2886cd
- (id)accessibilityAncestor:(Class)ancestor;	// 0x292381
- (id)accessibilityControls;	// 0x2922f9
- (BOOL)accessibilityElementIsHidden;	// 0x2923cd
- (CGRect)accessibilityFrame;	// 0x292225
- (BOOL)accessibilityIgnoresControlReload;	// 0x2922f5
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x292331
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x2927f1
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x292765
- (unsigned long long)accessibilityTraits;	// 0x29244d
- (id)actionForKey:(id)key;	// 0x2889a9
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x287739
// converted property getter: - (id)actions;	// 0x288a01
- (BOOL)active;	// 0x287c45
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x2888f9
// converted property getter: - (CGPoint)anchorPoint;	// 0x287961
- (id)animationForKey:(id)key;	// 0x288929
// converted property getter: - (BOOL)avoidsCursor;	// 0x2887a5
- (id)badge;	// 0x2d6451
// converted property getter: - (CGColorRef)borderColor;	// 0x288275
// converted property getter: - (float)borderWidth;	// 0x2882c9
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x2891a5
- (BOOL)brEventAction:(id)action;	// 0x2872ed
- (BOOL)brKeyEvent:(id)event;	// 0x287571
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x28799d
- (long)controlCount;	// 0x28815d
- (void)controlDidDisplayAsModalDialog;	// 0x371dd1
- (id)controlForPoint:(CGPoint)point;	// 0x288865
- (id)controlSearchOrderInProximityToControl:(id)control;	// 0x411c95
- (void)controlWasActivated;	// 0x287c55
- (void)controlWasDeactivated;	// 0x287d05
- (void)controlWasFocused;	// 0x288749
- (void)controlWasUnfocused;	// 0x28874d
- (void)dealloc;	// 0x287145
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x289275
// converted property getter: - (id)defaultFocus;	// 0x28861d
- (id)description;	// 0x288869
- (void)didAddSubview:(id)subview;	// 0x287ea5
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x2891f5
// declared property getter: - (id)eventDelegate;	// 0x2878a9
// declared property getter: - (id)eventHandlerBlock;	// 0x2878ed
- (id)firstControlNamed:(id)named;	// 0x287e09
- (id)focusCandidates;	// 0x289159
- (CGRect)focusCursorFrame;	// 0x2887d5
- (XXStruct_qlg9jA)focusCursorHaloAdjutment;	// 0x288809
- (id)focusObjectForCandidate:(id)candidate;	// 0x2891e1
// converted property getter: - (id)focusedControl;	// 0x28857d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x28862d
- (BOOL)handlePlayButton:(id)button;	// 0x1fc479
// converted property getter: - (id)identifier;	// 0x2872b9
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x2878cd
- (id)inheritedValueForKey:(id)key;	// 0x2875fd
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x288711
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x288739
- (id)initialFocus;	// 0x2883cd
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x287e45
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x287e75
// converted property getter: - (BOOL)isFocused;	// 0x288751
- (BOOL)isRandomNavigationCandidate;	// 0x2878a5
// converted property getter: - (id)keyEventTargetControl;	// 0x287859
- (void)layoutSubcontrols;	// 0x288245
- (void)layoutSubviews;	// 0x28778d
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x1ea095
// converted property getter: - (id)name;	// 0x287de1
// converted property getter: - (id)object;	// 0x28724d
- (id)parent;	// 0x287bf5
- (id)parentScrollControl;	// 0x307695
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x289181
- (id)preferredActionForKey:(id)key;	// 0x2888f5
- (float)preferredCursorRadius;	// 0x2d644d
- (id)randomNavigationLabel;	// 0x287869
- (void)removeAllAnimations;	// 0x288981
- (void)removeAnimationForKey:(id)key;	// 0x288955
- (void)removeFromSuperview;	// 0x288195
- (id)root;	// 0x287bc9
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x3076ad
- (void)scrollPoint:(CGPoint)point;	// 0x307619
- (void)scrollRectToVisible:(CGRect)visible;	// 0x307635
- (void)scrollingCompleted;	// 0x3076a5
- (void)scrollingInitiated;	// 0x3076a9
// converted property getter: - (id)selectionHandler;	// 0x288841
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x288689
// declared property setter: - (void)setAccessibilityOutputsRange:(BOOL)range;	// 0x292841
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x2927b5
// converted property setter: - (void)setActions:(id)actions;	// 0x2889d5
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x287931
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x288761
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x288249
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x28829d
- (void)setControls:(id)controls;	// 0x287f69
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x28858d
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x288861
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x2878bd
// declared property setter: - (void)setEventHandlerBlock:(id)block;	// 0x287901
- (void)setFocusCursorHaloAdjustment:(XXStruct_qlg9jA)adjustment;	// 0x2887f9
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x321939
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x2884b9
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x287281
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x2878dd
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x2886dd
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x288721
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x2877c5
// converted property setter: - (void)setName:(id)name;	// 0x287db5
// converted property setter: - (void)setObject:(id)object;	// 0x287215
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x288825
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x287649
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x2875cd
// declared property setter: - (void)set_previousFocus:(id)focus;	// 0x287921
- (int)touchSensitivity;	// 0x28885d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x2875a1
- (CGRect)visibleScrollRect;	// 0x30766d
- (void)visibleScrollRectChanged;	// 0x30765d
- (void)windowMaxBoundsChanged;	// 0x2882f1
@end
