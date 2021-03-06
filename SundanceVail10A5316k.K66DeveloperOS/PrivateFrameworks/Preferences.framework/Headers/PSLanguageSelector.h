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
@property(readonly, retain) NSMutableArray *supportedLanguages;	// G=0x372b5669; converted property
+ (id)sharedInstance;	// 0x372b4c15
- (BOOL)_adjustLanguageIndices;	// 0x372b4d05
- (void)_loadSupportedLanguages;	// 0x372b4d95
- (void)_setLanguage:(id)language;	// 0x372b4cc1
- (id)currentLanguage;	// 0x372b51e5
- (void)dealloc;	// 0x372b4c5d
- (void)setLanguage:(id)language;	// 0x372b5289
// converted property getter: - (id)supportedLanguages;	// 0x372b5669
@end

