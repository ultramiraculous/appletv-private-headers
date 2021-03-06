/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRResponder.h"
#import "AppleTV-Structs.h"
#import "BRFocusContainer.h"
#import <NSObject.h> // Unknown library

@class CALayer, NSArray, NSMutableArray;
@protocol BREventDelegate;

@interface BRControl : NSObject <BRFocusContainer, BRResponder> {
@private
	CALayer *_backing;	// 4 = 0x4
	BRControl *_defaultFocus;	// 8 = 0x8
	BRControl *_focusedControl;	// 12 = 0xc
	BRControl *_previousFocus;	// 16 = 0x10
	BRControl *_keyEventTargetControl;	// 20 = 0x14
	unsigned _autoresizing;	// 24 = 0x18
	NSMutableArray *_subControls;	// 28 = 0x1c
	BOOL _dontAutoresizeSubviews;	// 32 = 0x20
	BOOL _acceptsFocus;	// 33 = 0x21
	BOOL _focused;	// 34 = 0x22
	BOOL _controlActive;	// 35 = 0x23
	BOOL _inhibitsFocusForChildren;	// 36 = 0x24
	BOOL _inhibitsScrollFocusForChildren;	// 37 = 0x25
	NSObject<BREventDelegate> *_brEventDelegate;	// 40 = 0x28
	BOOL _focusByDirectionEnabled;	// 44 = 0x2c
	BOOL _ignoreDirectionalInfoForFocus;	// 45 = 0x2d
}
@property(assign) BOOL acceptsFocus;	// G=0x3023b619; S=0x3023b5d9; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x3023fa6d; S=0x3023fac1; 
@property(retain) id actions;	// G=0x3023b84d; S=0x3023b82d; converted property
@property(assign) CGAffineTransform affineTransform;	// G=0x3023a2e5; S=0x3023a2a1; converted property
@property(assign) CGPoint anchorPoint;	// G=0x3023a271; S=0x3023a251; converted property
@property(assign) unsigned autoresizingMask;	// G=0x3023a52d; S=0x3023a51d; converted property
@property(assign) BOOL avoidsCursor;	// G=0x3023b6f1; S=0x3023b6ad; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x3023ae75; S=0x3023ae55; converted property
@property(assign) CGColorRef borderColor;	// G=0x3023b20d; S=0x3023b1ed; converted property
@property(assign) float borderWidth;	// G=0x3023b24d; S=0x3023b22d; converted property
@property(assign) CGRect bounds;	// G=0x3023a21d; S=0x3023a155; converted property
@property(assign) int contentMode;	// G=0x3023b00d; S=0x3023af19; converted property
@property(retain) id controls;	// G=0x3023acf9; S=0x3023ab15; converted property
@property(retain) BRControl *defaultFocus;	// G=0x3023b579; S=0x3023b4e5; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x30239fb1; S=0x30239fc5; @synthesize=_brEventDelegate
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x3023b69d; converted property
@property(retain) BRControl *focusedControl;	// G=0x3023b4d5; S=0x3023b3f5; converted property
@property(assign) CGRect frame;	// G=0x3023a0d1; S=0x3023a009; converted property
@property(assign, getter=isHidden) BOOL hidden;	// G=0x3023aef5; S=0x3023aed5; converted property
@property(retain) id identifier;	// G=0x30239a9d; S=0x30239a75; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x30239fe9; S=0x30239ff9; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x3023b65d; S=0x3023b629; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x3023b685; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x30239fa1; S=0x30239f09; converted property
@property(assign) BOOL masksToBounds;	// G=0x3023ae31; S=0x3023ae11; converted property
@property(retain) id name;	// G=0x3023a925; S=0x3023a905; converted property
@property(retain) id object;	// G=0x30239a4d; S=0x30239a25; converted property
@property(assign) float opacity;	// G=0x3023aeb5; S=0x3023ae95; converted property
@property(assign) CGPoint position;	// G=0x3023a125; S=0x3023a105; converted property
@property(retain) id selectionHandler;	// G=0x3023b761; S=0x3023b745; converted property
@property(copy, nonatomic) NSArray *subcontrols;	// G=0x3023aacd; S=0x3023ab05; 
+ (id)control;	// 0x30239729
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x30311a39
+ (Class)layerClass;	// 0x30239771
- (id)init;	// 0x3023978d
- (id)initWithLayout:(id)layout;	// 0x302395c5
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x3023fb99
- (id)_axSubviews;	// 0x3023fcf5
- (id)_axSuperviews;	// 0x3023fafd
- (BOOL)_changeFocusTo:(id)to;	// 0x3023c16d
- (void)_dumpControlTree;	// 0x3023c815
- (void)_dumpFocusTree;	// 0x3023c609
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x3023c075
- (BOOL)_focusControlTreeWithDefaults;	// 0x3023c00d
- (id)_focusedLeafControl;	// 0x3023c42d
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x3023befd
- (id)_initialFocus;	// 0x3023c4a1
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x3023b86d
- (id)_parentScrollControl;	// 0x302be42d
- (void)_reevaluateFocusTree;	// 0x3023c44d
- (void)_removeAllControls;	// 0x3023bb5d
- (void)_removeControl:(id)control;	// 0x3023ba3d
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x3023bbcd
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3023bc95
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x302be4b1
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x302be4e1
- (void)_scrollingCompleted;	// 0x302be2f5
- (void)_scrollingInitiated;	// 0x302be341
- (void)_setControlFocused:(BOOL)focused;	// 0x3023c38d
- (void)_setFocus:(id)focus;	// 0x3023c209
- (CGRect)_visibleRectOfControl:(id)control;	// 0x302be455
- (void)_visibleScrollRectChanged;	// 0x302be521
// converted property getter: - (BOOL)acceptsFocus;	// 0x3023b619
- (id)accessibilityAncestor:(Class)ancestor;	// 0x3023f9a9
- (id)accessibilityControls;	// 0x3023f94d
- (BOOL)accessibilityElementIsHidden;	// 0x3023f9f1
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x3023f95d
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x3023fa6d
- (id)actionForKey:(id)key;	// 0x3023b80d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x30239ec1
// converted property getter: - (id)actions;	// 0x3023b84d
- (BOOL)active;	// 0x3023a86d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x3023b78d
- (void)addControl:(id)control;	// 0x3023a97d
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x3023a2e5
// converted property getter: - (CGPoint)anchorPoint;	// 0x3023a271
- (id)animationForKey:(id)key;	// 0x3023b7ad
// converted property getter: - (unsigned)autoresizingMask;	// 0x3023a52d
// converted property getter: - (BOOL)avoidsCursor;	// 0x3023b6f1
// converted property getter: - (CGColorRef)backgroundColor;	// 0x3023ae75
- (id)badge;	// 0x30286f65
// converted property getter: - (CGColorRef)borderColor;	// 0x3023b20d
// converted property getter: - (float)borderWidth;	// 0x3023b24d
// converted property getter: - (CGRect)bounds;	// 0x3023a21d
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x3023c539
- (BOOL)brEventAction:(id)action;	// 0x30239ac5
- (BOOL)brKeyEvent:(id)event;	// 0x30239d21
// converted property getter: - (int)contentMode;	// 0x3023b00d
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x3023a315
- (long)controlCount;	// 0x3023ad25
- (void)controlDidDisplayAsModalDialog;	// 0x30327575
- (id)controlForPoint:(CGPoint)point;	// 0x3023b785
- (void)controlWasActivated;	// 0x3023a87d
- (void)controlWasDeactivated;	// 0x3023a8c1
- (void)controlWasFocused;	// 0x3023b695
- (void)controlWasUnfocused;	// 0x3023b699
// converted property getter: - (id)controls;	// 0x3023acf9
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x3023a671
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x3023a6cd
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x3023a729
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x3023a78d
- (void)dealloc;	// 0x3023981d
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x3023c605
// converted property getter: - (id)defaultFocus;	// 0x3023b579
- (void)drawInContext:(CGContextRef)context;	// 0x3023ae0d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x30239ead
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x3023c585
// declared property getter: - (id)eventDelegate;	// 0x30239fb1
- (id)firstControlNamed:(id)named;	// 0x3023a945
- (id)focusCandidates;	// 0x3023c4f5
- (CGRect)focusCursorFrame;	// 0x3023b721
- (id)focusObjectForCandidate:(id)candidate;	// 0x3023c571
// converted property getter: - (id)focusedControl;	// 0x3023b4d5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3023b589
// converted property getter: - (CGRect)frame;	// 0x3023a0d1
- (BOOL)handlePlayButton:(id)button;	// 0x3018fd85
// converted property getter: - (id)identifier;	// 0x30239a9d
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x30239fe9
- (id)inheritedValueForKey:(id)key;	// 0x30239d91
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x3023b65d
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x3023b685
- (id)initialFocus;	// 0x3023b31d
- (void)insertControl:(id)control above:(id)above;	// 0x3023aa01
- (void)insertControl:(id)control atIndex:(long)index;	// 0x3023a9c1
- (void)insertControl:(id)control below:(id)below;	// 0x3023aa75
// converted property getter: - (BOOL)isFocused;	// 0x3023b69d
// converted property getter: - (BOOL)isHidden;	// 0x3023aef5
// converted property getter: - (id)keyEventTargetControl;	// 0x30239fa1
- (id)layer;	// 0x30239a15
- (id)layerForBacking;	// 0x302399bd
- (void)layoutSubcontrols;	// 0x3023adad
- (void)layoutSublayersOfLayer:(id)layer;	// 0x30239ed5
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x3017d669
// converted property getter: - (BOOL)masksToBounds;	// 0x3023ae31
// converted property getter: - (id)name;	// 0x3023a925
// converted property getter: - (id)object;	// 0x30239a4d
// converted property getter: - (float)opacity;	// 0x3023aeb5
- (id)parent;	// 0x3023a835
- (id)parentScrollControl;	// 0x302be409
// converted property getter: - (CGPoint)position;	// 0x3023a125
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x3023c515
- (id)preferredActionForKey:(id)key;	// 0x3023b789
- (float)preferredCursorRadius;	// 0x30286f61
- (void)removeAllAnimations;	// 0x3023b7ed
- (void)removeAnimationForKey:(id)key;	// 0x3023b7cd
- (void)removeFromParent;	// 0x3023ad5d
- (id)root;	// 0x3023a7f1
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x302be421
- (void)scrollPoint:(CGPoint)point;	// 0x302be38d
- (void)scrollRectToVisible:(CGRect)visible;	// 0x302be3a9
- (void)scrollingCompleted;	// 0x302be419
- (void)scrollingInitiated;	// 0x302be41d
// converted property getter: - (id)selectionHandler;	// 0x3023b761
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x3023b5d9
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x3023fac1
// converted property setter: - (void)setActions:(id)actions;	// 0x3023b82d
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x3023a2a1
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x3023a251
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x3023a51d
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x3023b6ad
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3023ae55
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x3023b1ed
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x3023b22d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3023a155
// converted property setter: - (void)setContentMode:(int)mode;	// 0x3023af19
// converted property setter: - (void)setControls:(id)controls;	// 0x3023ab15
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x3023b4e5
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x3023b781
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x30239fc5
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3038ddbd
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x3023b3f5
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3023a009
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3023aed5
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x30239a75
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x30239ff9
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x3023b629
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x3023b66d
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x30239f09
// converted property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x3023ae11
// converted property setter: - (void)setName:(id)name;	// 0x3023a905
- (void)setNeedsDisplay;	// 0x3023adb1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3023add1
- (void)setNeedsLayout;	// 0x3023ad8d
// converted property setter: - (void)setObject:(id)object;	// 0x30239a25
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3023ae95
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3023a105
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x3023b745
// declared property setter: - (void)setSubcontrols:(id)subcontrols;	// 0x3023ab05
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x30239dd9
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x30239d71
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3023a53d
- (void)sizeToFit;	// 0x3023a575
// declared property getter: - (id)subcontrols;	// 0x3023aacd
- (int)touchSensitivity;	// 0x3023b77d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30239d51
- (CGRect)visibleScrollRect;	// 0x302be3e1
- (void)visibleScrollRectChanged;	// 0x302be3d1
- (void)windowMaxBoundsChanged;	// 0x3023b26d
@end

