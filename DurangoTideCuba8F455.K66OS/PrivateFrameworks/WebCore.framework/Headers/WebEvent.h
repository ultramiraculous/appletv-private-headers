/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class NSString, NSArray;

@interface WebEvent : NSObject {
@private
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	int _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	unsigned short _keyCode;	// 38 = 0x26
	BOOL _tabKey;	// 40 = 0x28
	int _characterSet;	// 44 = 0x2c
	float _deltaX;	// 48 = 0x30
	float _deltaY;	// 52 = 0x34
	unsigned _touchCount;	// 56 = 0x38
	NSArray *_touchLocations;	// 60 = 0x3c
	NSArray *_touchGlobalLocations;	// 64 = 0x40
	NSArray *_touchIdentifiers;	// 68 = 0x44
	NSArray *_touchPhases;	// 72 = 0x48
	BOOL _isGesture;	// 76 = 0x4c
	float _gestureScale;	// 80 = 0x50
	float _gestureRotation;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x31b1dd5d; 
@property(readonly, retain, nonatomic) NSString *characters;	// G=0x31b1de3d; 
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x31b1de0d; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x31b1dd6d; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x31b1dd7d; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x31b1ddfd; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x31b1dded; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x31b1dddd; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x31b1dd3d; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x31b1dd2d; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x31776451; 
@property(readonly, assign, nonatomic) int modifierFlags;	// G=0x31b1dd1d; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x31b1dd4d; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x31776c59; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x31b1dd8d; 
@property(readonly, retain, nonatomic) NSArray *touchGlobalLocations;	// G=0x31b1ddad; 
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;	// G=0x31b1ddbd; 
@property(readonly, retain, nonatomic) NSArray *touchLocations;	// G=0x31b1dd9d; 
@property(readonly, retain, nonatomic) NSArray *touchPhases;	// G=0x31b1ddcd; 
@property(readonly, assign, nonatomic) int type;	// G=0x31776441; @synthesize=_type
- (id)initWithKeyEventType:(int)keyEventType withTimeStamp:(double)timeStamp withCharacters:(id)characters withCharactersIgnoringModifiers:(id)charactersIgnoringModifiers withModifiers:(int)modifiers isRepeating:(BOOL)repeating withKeyCode:(unsigned short)keyCode isTabKey:(BOOL)key withCharacterSet:(int)characterSet;	// 0x31b1e58d
- (id)initWithMouseEventType:(int)mouseEventType withTimeStamp:(double)timeStamp withLocation:(CGPoint)location;	// 0x31776175
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp withLocation:(CGPoint)location withDeltaX:(float)deltaX withDeltaY:(float)deltaY;	// 0x31b1e84d
- (id)initWithTouchEventType:(int)touchEventType withTimeStamp:(double)timeStamp withLocation:(CGPoint)location withTouchCount:(unsigned)touchCount withTouchLocations:(id)touchLocations withTouchGlobalLocations:(id)touchGlobalLocations withTouchIdentifiers:(id)touchIdentifiers withTouchPhases:(id)touchPhases isGesture:(BOOL)gesture withGestureScale:(float)gestureScale withGestureRotation:(float)gestureRotation;	// 0x31b1e6c5
- (id)_characterSetDescription;	// 0x31b1dc71
- (id)_eventDescription;	// 0x31b1def9
- (id)_modiferFlagsDescription;	// 0x31b1dbe5
- (id)_touchIdentifiersDescription;	// 0x31b1e311
- (id)_touchLocationsDescription:(id)description;	// 0x31b1e455
- (id)_touchPhaseDescription:(int)description;	// 0x31b1dcd1
- (id)_touchPhasesDescription;	// 0x31b1e1bd
- (id)_typeDescription;	// 0x31b1db59
// declared property getter: - (int)characterSet;	// 0x31b1dd5d
// declared property getter: - (id)characters;	// 0x31b1de3d
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x31b1de0d
- (void)dealloc;	// 0x31779721
// declared property getter: - (float)deltaX;	// 0x31b1dd6d
// declared property getter: - (float)deltaY;	// 0x31b1dd7d
- (id)description;	// 0x31b1de6d
// declared property getter: - (float)gestureRotation;	// 0x31b1ddfd
// declared property getter: - (float)gestureScale;	// 0x31b1dded
// declared property getter: - (BOOL)isGesture;	// 0x31b1dddd
// declared property getter: - (BOOL)isKeyRepeating;	// 0x31b1dd2d
// declared property getter: - (BOOL)isTabKey;	// 0x31b1dd4d
// declared property getter: - (unsigned short)keyCode;	// 0x31b1dd3d
// declared property getter: - (CGPoint)locationInWindow;	// 0x31776451
// declared property getter: - (int)modifierFlags;	// 0x31b1dd1d
// declared property getter: - (double)timestamp;	// 0x31776c59
// declared property getter: - (unsigned)touchCount;	// 0x31b1dd8d
// declared property getter: - (id)touchGlobalLocations;	// 0x31b1ddad
// declared property getter: - (id)touchIdentifiers;	// 0x31b1ddbd
// declared property getter: - (id)touchLocations;	// 0x31b1dd9d
// declared property getter: - (id)touchPhases;	// 0x31b1ddcd
// declared property getter: - (int)type;	// 0x31776441
@end
