/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
	NSDictionary *_itemDictionary;	// 80 = 0x50
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x1d8ba1
- (id)initWithDictionary:(id)dictionary;	// 0x1d8bdd
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1d9d39
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1d9df9
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1d9cad
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x1d9ee9
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x1d9f11
- (id)accessibilityLabel;	// 0x1d9c91
- (void)dealloc;	// 0x1d8c35
- (void)layoutSubcontrols;	// 0x1d8c81
@end

