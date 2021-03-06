/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class NSArray, NSDictionary;

@interface PSInternationalController : PSListController {
	CFLocaleRef _locale;	// 288 = 0x120
	double _sampleTime;	// 292 = 0x124
	NSArray *_voiceControlTitles;	// 300 = 0x12c
	NSDictionary *_voiceControlShortTitles;	// 304 = 0x130
	NSArray *_voiceControlValues;	// 308 = 0x134
}
@property(readonly, retain) NSDictionary *voiceControlShortTitles;	// G=0x31625ba9; converted property
+ (id)capitalizeFirstPartOfCountry:(id)country;	// 0x31625bf9
+ (void)setLanguage:(id)language;	// 0x316252d1
+ (void)setLocale:(id)locale;	// 0x31625399
+ (id)voiceControlLanguageData;	// 0x31625d1d
- (id)init;	// 0x31624411
- (void)_initVoiceControlData;	// 0x316259f5
- (void)_loadLocaleIfNeeded;	// 0x31624dd9
- (id)calendar:(id)calendar;	// 0x3162562d
- (void)dealloc;	// 0x316246c9
- (id)defaultCalendarForLocale:(id)locale;	// 0x3162593d
- (id)formattedDate:(id)date;	// 0x3162570d
- (id)formattedPhoneNumber:(id)number;	// 0x31625849
- (id)formattedTime:(id)time;	// 0x316257a1
- (id)language:(id)language;	// 0x316250f9
- (id)locale:(id)locale;	// 0x31625475
- (void)localeChangedAction;	// 0x31624401
- (id)localizedComponent:(id)component forDictionary:(id)dictionary;	// 0x316247c5
- (id)localizedLanguage:(id)language;	// 0x3162513d
- (void)reloadLocale;	// 0x316248a1
- (void)reloadSpecifiers;	// 0x31624859
- (void)setCalendar:(id)calendar specifier:(id)specifier;	// 0x316254fd
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x316252a5
- (void)setLocale:(id)locale specifier:(id)specifier;	// 0x3162536d
- (void)setVoiceControlLanguage:(id)language specifier:(id)specifier;	// 0x316251dd
- (void)showLanguageSheet:(id)sheet;	// 0x31625061
- (id)specifiers;	// 0x31624dfd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31624601
- (void)viewWillAppear:(BOOL)view;	// 0x31624771
- (id)voiceControlLanguage:(id)language;	// 0x3162520d
// converted property getter: - (id)voiceControlShortTitles;	// 0x31625ba9
- (id)voiceControlTitles:(id)titles;	// 0x31625b81
- (id)voiceControlValues:(id)values;	// 0x31625bd1
@end

