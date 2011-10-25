/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIDelayedAction;

@interface UIKeyboardPreferencesController : NSObject {
	UIDelayedAction *m_synchronizePreferencesAction;	// 4 = 0x4
@private
	BOOL dontSynchronizePreferences;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL dontSynchronizePreferences;	// G=0x354228a9; S=0x354228b9; @synthesize
+ (void)preferencesChangedCallback:(id)callback;	// 0x354220d9
+ (id)sharedPreferencesController;	// 0x350e1a81
- (id)init;	// 0x3512d8f9
- (BOOL)boolForKey:(int)key;	// 0x350e1ab5
- (void)clearSynchronizePreferencesTimer;	// 0x3542238d
- (BOOL)costlyCapture;	// 0x35422875
- (void)dealloc;	// 0x3542228d
- (id)defaultForKey:(int)key;	// 0x3512d9dd
- (XXStruct_AL9G4C *)domainForType:(int)type;	// 0x350e1ba5
- (XXStruct_AL9G4C *)domains;	// 0x350e1c11
// declared property getter: - (BOOL)dontSynchronizePreferences;	// 0x354228a9
- (XXStruct_N0zFsC *)preferences;	// 0x350e1b95
- (void)releaseDontSynchronizePreferences;	// 0x354223d1
- (void)saveInputModes:(id)modes;	// 0x354225b9
// declared property setter: - (void)setDontSynchronizePreferences:(BOOL)preferences;	// 0x354228b9
- (void)setInputModeLastUsed:(id)used;	// 0x354226b5
- (void)setValue:(id)value forKey:(int)key;	// 0x35422539
- (void)synchronizePreferences;	// 0x354223e5
- (void)touchSynchronizePreferencesTimer;	// 0x354224b9
- (BOOL)typologyEnabled;	// 0x35422841
- (id)valueForKey:(int)key;	// 0x350e1add
@end

