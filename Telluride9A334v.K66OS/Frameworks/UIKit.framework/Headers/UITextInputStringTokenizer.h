/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"

@class UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
@private
	UIResponder<UITextInput> *_textInput;	// 4 = 0x4
}
- (id)initWithTextInput:(id)textInput;	// 0x3031d689
- (NSRange)_getClosestTokenRangeForPosition:(id)position granularity:(int)granularity downstream:(BOOL)downstream;	// 0x3031d6cd
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x3031d819
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x3031d975
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x3031d8b5
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x3031da01
@end

