/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSArray;

@interface PSLanguageSelector : NSObject {
	NSString *_language;	// 4 = 0x4
	NSMutableArray *_supportedLanguages;	// 8 = 0x8
	NSArray *_supportedKeyboards;	// 12 = 0xc
}
@property(readonly, retain) NSMutableArray *supportedLanguages;	// G=0x352fd1f1; converted property
+ (id)sharedInstance;	// 0x352fc775
- (BOOL)_adjustLanguageIndices;	// 0x352fc865
- (void)_loadSupportedLanguages;	// 0x352fc8f5
- (void)_setLanguage:(id)language;	// 0x352fc821
- (id)currentLanguage;	// 0x352fcd45
- (void)dealloc;	// 0x352fc7bd
- (void)setLanguage:(id)language;	// 0x352fcde9
// converted property getter: - (id)supportedLanguages;	// 0x352fd1f1
@end
