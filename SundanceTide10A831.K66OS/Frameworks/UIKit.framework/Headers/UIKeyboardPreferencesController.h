/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIDelayedAction;

@interface UIKeyboardPreferencesController : NSObject {
	UIDelayedAction *m_synchronizePreferencesAction;	// 4 = 0x4
	BOOL dontSynchronizePreferences;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL dontSynchronizePreferences;	// G=0x32020e55; S=0x32020e65; @synthesize
@property(readonly, assign) BOOL isInternalInstall;	// G=0x31cad665; 
+ (void)handleSpecificHardwareKeyboard;	// 0x320209c5
+ (void)preferencesChangedCallback:(id)callback;	// 0x3201ff31
+ (id)sharedPreferencesController;	// 0x31c49aa1
- (id)init;	// 0x31c49ad5
- (BOOL)boolForKey:(int)key;	// 0x31cabc29
- (void)clearSynchronizePreferencesTimer;	// 0x320202bd
- (BOOL)costlyCapture;	// 0x320207d5
- (void)dealloc;	// 0x3202014d
- (id)defaultForKey:(int)key;	// 0x31cabc51
- (XXStruct_7wOxJB *)domainForType:(int)type;	// 0x31c49d25
- (XXStruct_7wOxJB *)domains;	// 0x31c49c05
// declared property getter: - (BOOL)dontSynchronizePreferences;	// 0x32020e55
// declared property getter: - (BOOL)isInternalInstall;	// 0x31cad665
- (XXStruct_N0zFsC *)preferences;	// 0x31c49d15
- (void)releaseDontSynchronizePreferences;	// 0x320202fd
- (float)rivenSizeFactor:(float)factor;	// 0x32020809
- (void)saveInputModes:(id)modes;	// 0x32020511
// declared property setter: - (void)setDontSynchronizePreferences:(BOOL)preferences;	// 0x32020e65
- (void)setInputModeLastUsed:(id)used;	// 0x3202060d
- (void)setValue:(id)value forKey:(int)key;	// 0x32020479
- (BOOL)spaceConfirmationEnabled;	// 0x32020919
- (void)synchronizePreferences;	// 0x32020311
- (void)touchSynchronizePreferencesTimer;	// 0x320203f9
- (BOOL)typologyEnabled;	// 0x320207a1
- (id)valueForKey:(int)key;	// 0x31c49c11
@end

