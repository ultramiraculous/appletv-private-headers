/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, UIWindow, NSArray, UIView;

@interface UITouch : NSObject {
	float _movementMagnitudeSquared;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	int _phase;	// 16 = 0x10
	int _savedPhase;	// 20 = 0x14
	unsigned _tapCount;	// 24 = 0x18
	UIWindow *_window;	// 28 = 0x1c
	UIView *_view;	// 32 = 0x20
	UIView *_gestureView;	// 36 = 0x24
	UIView *_warpedIntoView;	// 40 = 0x28
	NSMutableArray *_gestureRecognizers;	// 44 = 0x2c
	NSMutableArray *_forwardingRecord;	// 48 = 0x30
	CGPoint _locationInWindow;	// 52 = 0x34
	CGPoint _previousLocationInWindow;	// 60 = 0x3c
	unsigned char _pathIndex;	// 68 = 0x44
	unsigned char _pathIdentity;	// 69 = 0x45
	float _pathMajorRadius;	// 72 = 0x48
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;	// 76 = 0x4c
	BOOL _eaten;	// 77 = 0x4d
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// G=0x3454df21; S=0x346885d1; @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x3454ffb9; S=0x3454df01; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x34666a41; S=0x3454def1; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x34666a51; S=0x3454df11; @synthesize
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x345505d1; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x3454e8dd; S=0x3454df79; 
@property(assign) BOOL isDelayed;	// G=0x3454fc39; S=0x34658cf1; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x3454ffcd; S=0x3454e40d; 
@property(readonly, assign, nonatomic) int phase;	// G=0x3454e529; 
@property(assign, nonatomic) int phase;	// S=0x3454dd15; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x3454ffe5; S=0x3454fffd; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x34626ed5; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x3454e42d; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x346661b9; 
@property(assign, nonatomic) double timestamp;	// S=0x3454dd01; 
@property(retain, nonatomic) UIView *view;	// S=0x3454df35; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3454e829; 
@property(retain, nonatomic) UIView *warpedIntoView;	// G=0x3454dfbd; S=0x34620bcd; 
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x3454e381; 
@property(retain, nonatomic) UIWindow *window;	// S=0x3454dd25; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x34796eb1
- (void)_addGestureRecognizer:(id)recognizer;	// 0x34620c9d
- (void)_clearGestureRecognizers;	// 0x346885e5
- (int)_compareIndex:(id)index;	// 0x347971f1
- (float)_distanceFrom:(id)from inView:(id)view;	// 0x348c41e9
- (id)_forwardingRecord;	// 0x3455024d
- (id)_gestureRecognizers;	// 0x3454f6e5
// declared property getter: - (BOOL)_isEaten;	// 0x3454df21
- (BOOL)_isFirstTouchForView;	// 0x34622575
- (BOOL)_isStationaryRelativeToTouches:(id)touches;	// 0x34797321
- (void)_loadStateFromTouch:(id)touch;	// 0x34658be9
- (CGPoint)_locationInWindow:(id)window;	// 0x34657619
// declared property getter: - (unsigned char)_pathIdentity;	// 0x3454ffb9
// declared property getter: - (unsigned char)_pathIndex;	// 0x34666a41
// declared property getter: - (float)_pathMajorRadius;	// 0x34666a51
- (id)_phaseDescription;	// 0x34796fe9
- (void)_popPhase;	// 0x347971d1
- (CGPoint)_previousLocationInWindow:(id)window;	// 0x346c0add
- (void)_pushPhase:(int)phase;	// 0x347971ad
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x34622c4d
// declared property setter: - (void)_setEaten:(BOOL)eaten;	// 0x346885d1
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x3454e441
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x3454dfe5
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x3454df01
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x3454def1
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x3454df11
- (void)_updateMovementMagnitudeForLocation:(CGPoint)location;	// 0x347972d1
- (BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;	// 0x3467df29
- (void)dealloc;	// 0x345506a5
- (id)description;	// 0x34797051
// declared property getter: - (id)gestureRecognizers;	// 0x345505d1
// declared property getter: - (id)gestureView;	// 0x3454e8dd
- (int)info;	// 0x34796da9
// converted property getter: - (BOOL)isDelayed;	// 0x3454fc39
// declared property getter: - (BOOL)isTap;	// 0x3454ffcd
- (CGPoint)locationInView:(id)view;	// 0x3454feb9
// declared property getter: - (int)phase;	// 0x3454e529
- (CGPoint)previousLocationInView:(id)view;	// 0x34796db1
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x3454ffe5
// declared property setter: - (void)setGestureView:(id)view;	// 0x3454df79
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x34658cf1
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x3454e40d
// declared property setter: - (void)setPhase:(int)phase;	// 0x3454dd15
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x3454fffd
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x3454e42d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3454dd01
// declared property setter: - (void)setView:(id)view;	// 0x3454df35
// declared property setter: - (void)setWarpedIntoView:(id)view;	// 0x34620bcd
// declared property setter: - (void)setWindow:(id)window;	// 0x3454dd25
// declared property getter: - (unsigned)tapCount;	// 0x34626ed5
// declared property getter: - (double)timestamp;	// 0x346661b9
// declared property getter: - (id)view;	// 0x3454e829
// declared property getter: - (id)warpedIntoView;	// 0x3454dfbd
// declared property getter: - (id)window;	// 0x3454e381
@end

