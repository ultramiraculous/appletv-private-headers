/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, UIKeyboardInputMode, NSString, NSArray;

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
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;	// G=0x33229001; 
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x32ee70cd; S=0x32f36119; 
@property(retain) NSString *currentLanguage;	// G=0x32f9f565; S=0x32f32a4d; @synthesize
@property(retain) NSString *currentLocale;	// G=0x32f9f551; S=0x32f32a29; @synthesize
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x32f320c5; 
@property(retain) NSArray *enabledInputModes;	// G=0x32f32a15; S=0x32f347c1; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x332291f1; 
@property(retain) NSArray *keyboardInputModes;	// G=0x332291c9; S=0x32f347e5; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x33229269; 
@property(retain) NSArray *normalizedInputModes;	// G=0x332291dd; S=0x32f3479d; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x32f3398d; 
+ (id)sharedInputModeController;	// 0x32ee70a1
- (id)activeInputModes;	// 0x33228fd1
- (void)clearCachedValues;	// 0x332290e1
// declared property getter: - (BOOL)containsDictationSupportedInputMode;	// 0x33229001
// declared property getter: - (id)currentInputMode;	// 0x32ee70cd
// declared property getter: - (id)currentLanguage;	// 0x32f9f565
// declared property getter: - (id)currentLocale;	// 0x32f9f551
- (void)dealloc;	// 0x33228e99
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x32f32411
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x32f320c5
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x32f320d9
// declared property getter: - (id)enabledInputModes;	// 0x32f32a15
- (id)inputModeWithIdentifier:(id)identifier;	// 0x32f34ac1
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x332291f1
// declared property getter: - (id)keyboardInputModes;	// 0x332291c9
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x33229269
// declared property getter: - (id)normalizedInputModes;	// 0x332291dd
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x32f36119
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x32f32a4d
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x32f32a29
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x32f347c1
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x32f347e5
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x32f3479d
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x32f3398d
@end

