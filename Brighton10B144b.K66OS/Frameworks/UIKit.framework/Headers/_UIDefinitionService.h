/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIColor, NSURL, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDefinitionService : NSObject <UIWebViewDelegate> {
	NSArray *_dictionaries;	// 4 = 0x4
	UIColor *_backgroundColor;	// 8 = 0x8
	NSURL *_stylesheetURL;	// 12 = 0xc
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x32e8303d; S=0x32e8304d; @synthesize=_backgroundColor
@property(readonly, assign, nonatomic) NSURL *stylesheetURL;	// G=0x32e8305d; @synthesize=_stylesheetURL
+ (id)backgroundColor;	// 0x32e82d31
+ (id)foregroundColor;	// 0x32e82d79
- (id)init;	// 0x32e82c25
- (id)_dictionaryForString:(id)string;	// 0x32e82dc1
// declared property getter: - (id)backgroundColor;	// 0x32e8303d
- (void)dealloc;	// 0x32e82cb9
- (BOOL)hasMarkupForString:(id)string;	// 0x32e82edd
- (unsigned)languageDirectionForString:(id)string;	// 0x32e82ff1
- (id)markupForString:(id)string;	// 0x32e82fa5
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x32e8304d
// declared property getter: - (id)stylesheetURL;	// 0x32e8305d
@end

