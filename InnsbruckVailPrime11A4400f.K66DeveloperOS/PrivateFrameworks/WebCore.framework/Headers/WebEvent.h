/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>

@class NSArray, NSString;

@interface WebEvent : NSObject {
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	unsigned _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	BOOL _popupVariant;	// 37 = 0x25
	unsigned _keyboardFlags;	// 40 = 0x28
	unsigned short _keyCode;	// 44 = 0x2c
	BOOL _tabKey;	// 46 = 0x2e
	int _characterSet;	// 48 = 0x30
	float _deltaX;	// 52 = 0x34
	float _deltaY;	// 56 = 0x38
	unsigned _touchCount;	// 60 = 0x3c
	NSArray *_touchLocations;	// 64 = 0x40
	NSArray *_touchIdentifiers;	// 68 = 0x44
	NSArray *_touchPhases;	// 72 = 0x48
	BOOL _isGesture;	// 76 = 0x4c
	float _gestureScale;	// 80 = 0x50
	float _gestureRotation;	// 84 = 0x54
	BOOL _wasHandled;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x3305da45; 
@property(readonly, assign, nonatomic) NSString *characters;	// G=0x3305c4d5; 
@property(readonly, assign, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x3305c50d; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x337ee355; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x337ee365; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x33059115; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x33059105; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x33059125; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x3305c9fd; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x3305ca0d; 
@property(readonly, assign, nonatomic) unsigned keyboardFlags;	// G=0x337ee345; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x3304fcfd; 
@property(readonly, assign, nonatomic) unsigned modifierFlags;	// G=0x330590e5; 
@property(readonly, assign, nonatomic, getter=isPopupVariant) BOOL popupVariant;	// G=0x3305dc05; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x3305da35; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x337ee375; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x330590f5; 
@property(readonly, assign, nonatomic) NSArray *touchIdentifiers;	// G=0x33059145; 
@property(readonly, assign, nonatomic) NSArray *touchLocations;	// G=0x33059135; 
@property(readonly, assign, nonatomic) NSArray *touchPhases;	// G=0x33059155; 
@property(readonly, assign, nonatomic) int type;	// G=0x3304fced; @synthesize=_type
@property(assign, nonatomic) BOOL wasHandled;	// G=0x337ee38d; S=0x337ee39d; @synthesize=_wasHandled
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating isPopupVariant:(BOOL)variant keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x3305b5d5
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating withFlags:(unsigned)flags keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x337ed88d
- (id)initWithMouseEventType:(int)mouseEventType timeStamp:(double)stamp location:(CGPoint)location;	// 0x3304fa71
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp location:(CGPoint)location deltaX:(float)x deltaY:(float)y;	// 0x337ed7e5
- (id)initWithTouchEventType:(int)touchEventType timeStamp:(double)stamp location:(CGPoint)location modifiers:(unsigned)modifiers touchCount:(unsigned)count touchLocations:(id)locations touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;	// 0x33058801
- (id).cxx_construct;	// 0x3304fa6d
- (id)_characterSetDescription;	// 0x337edb35
- (id)_eventDescription;	// 0x337edfd5
- (id)_modiferFlagsDescription;	// 0x337eda91
- (id)_touchIdentifiersDescription;	// 0x337edd11
- (id)_touchLocationsDescription:(id)description;	// 0x337edba9
- (id)_touchPhaseDescription:(int)description;	// 0x337ede3d
- (id)_touchPhasesDescription;	// 0x337ede95
- (id)_typeDescription;	// 0x337ed9ed
// declared property getter: - (int)characterSet;	// 0x3305da45
// declared property getter: - (id)characters;	// 0x3305c4d5
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x3305c50d
- (void)dealloc;	// 0x330504ad
// declared property getter: - (float)deltaX;	// 0x337ee355
// declared property getter: - (float)deltaY;	// 0x337ee365
- (id)description;	// 0x337ee2b5
// declared property getter: - (float)gestureRotation;	// 0x33059115
// declared property getter: - (float)gestureScale;	// 0x33059105
// declared property getter: - (BOOL)isGesture;	// 0x33059125
// declared property getter: - (BOOL)isKeyRepeating;	// 0x3305ca0d
// declared property getter: - (BOOL)isPopupVariant;	// 0x3305dc05
// declared property getter: - (BOOL)isTabKey;	// 0x3305da35
// declared property getter: - (unsigned short)keyCode;	// 0x3305c9fd
// declared property getter: - (unsigned)keyboardFlags;	// 0x337ee345
// declared property getter: - (CGPoint)locationInWindow;	// 0x3304fcfd
// declared property getter: - (unsigned)modifierFlags;	// 0x330590e5
// declared property setter: - (void)setWasHandled:(BOOL)handled;	// 0x337ee39d
// declared property getter: - (double)timestamp;	// 0x337ee375
// declared property getter: - (unsigned)touchCount;	// 0x330590f5
// declared property getter: - (id)touchIdentifiers;	// 0x33059145
// declared property getter: - (id)touchLocations;	// 0x33059135
// declared property getter: - (id)touchPhases;	// 0x33059155
// declared property getter: - (int)type;	// 0x3304fced
// declared property getter: - (BOOL)wasHandled;	// 0x337ee38d
@end
