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
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x30c4ca15; S=0x30c4ca25; @synthesize=_backgroundColor
@property(readonly, assign, nonatomic) NSURL *stylesheetURL;	// G=0x30c4ca35; @synthesize=_stylesheetURL
+ (id)backgroundColor;	// 0x30c4c709
+ (id)foregroundColor;	// 0x30c4c751
- (id)init;	// 0x30c4c5fd
- (id)_dictionaryForString:(id)string;	// 0x30c4c799
// declared property getter: - (id)backgroundColor;	// 0x30c4ca15
- (void)dealloc;	// 0x30c4c691
- (BOOL)hasMarkupForString:(id)string;	// 0x30c4c8b5
- (unsigned)languageDirectionForString:(id)string;	// 0x30c4c9c9
- (id)markupForString:(id)string;	// 0x30c4c97d
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x30c4ca25
// declared property getter: - (id)stylesheetURL;	// 0x30c4ca35
@end

