/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIFingerInfo : NSObject {
@private
	CFDictionaryRef _fingers;	// 4 = 0x4
	int _activeFinger;	// 8 = 0x8
	BOOL _activeFingerLocked;	// 12 = 0xc
}
- (BOOL)chordChanged:(XXStruct_N9tTZA)changed withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x354c1e4d
- (void)dealloc;	// 0x354c1c35
- (BOOL)fingersMoved:(XXStruct_N9tTZA)moved withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x354c1f41
- (BOOL)hasActiveFinger;	// 0x354c20a1
- (void)startTouch:(XXStruct_N9tTZA)touch withEvent:(GSEventRef)event adjustLocation:(BOOL)location;	// 0x354c1c79
@end
