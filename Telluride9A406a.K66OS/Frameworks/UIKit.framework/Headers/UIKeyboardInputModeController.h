/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKeyboardInputMode, NSString, NSMutableArray, NSArray;

@interface UIKeyboardInputModeController : NSObject {
@private
	UIKeyboardInputMode *_currentInputMode;	// 4 = 0x4
	NSMutableArray *_supportedInputModeIdentifiers;	// 8 = 0x8
	NSArray *_inputModesWithoutHardwareSupport;	// 12 = 0xc
	NSString *currentLocale;	// 16 = 0x10
	NSString *currentLanguage;	// 20 = 0x14
	NSArray *keyboardInputModes;	// 24 = 0x18
	NSArray *enabledInputModes;	// 28 = 0x1c
	NSArray *normalizedInputModes;	// 32 = 0x20
}
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x356a09c1; S=0x356f0bd9; 
@property(retain) NSString *currentLanguage;	// G=0x3575916d; S=0x356ed505; @synthesize
@property(retain) NSString *currentLocale;	// G=0x35759159; S=0x356ed4e1; @synthesize
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x356ecb7d; 
@property(retain) NSArray *enabledInputModes;	// G=0x356ed4cd; S=0x356ef279; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x359dce21; 
@property(retain) NSArray *keyboardInputModes;	// G=0x359dcdf9; S=0x356ef29d; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x359dce99; 
@property(retain) NSArray *normalizedInputModes;	// G=0x359dce0d; S=0x356ef255; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x356ee445; 
+ (id)sharedInputModeController;	// 0x356a0995
- (id)activeInputModes;	// 0x359dcce1
- (void)clearCachedValues;	// 0x359dcd11
// declared property getter: - (id)currentInputMode;	// 0x356a09c1
// declared property getter: - (id)currentLanguage;	// 0x3575916d
// declared property getter: - (id)currentLocale;	// 0x35759159
- (void)dealloc;	// 0x359dcba9
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x356ecec9
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x356ecb7d
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x356ecb91
// declared property getter: - (id)enabledInputModes;	// 0x356ed4cd
- (id)inputModeWithIdentifier:(id)identifier;	// 0x356ef579
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x359dce21
// declared property getter: - (id)keyboardInputModes;	// 0x359dcdf9
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x359dce99
// declared property getter: - (id)normalizedInputModes;	// 0x359dce0d
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x356f0bd9
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x356ed505
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x356ed4e1
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x356ef279
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x356ef29d
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x356ef255
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x356ee445
@end
