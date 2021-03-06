/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextField.h"

@class UIThreePartImageView;

__attribute__((visibility("hidden")))
@interface UIAlertSheetTextField : UITextField {
@private
	UIThreePartImageView *_sheetBackgroundView;	// 288 = 0x120
}
@property(retain) id backgroundView;	// G=0x354017b1; S=0x3540176d; converted property
// converted property getter: - (id)backgroundView;	// 0x354017b1
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x354017c1
- (void)dealloc;	// 0x35401721
// converted property setter: - (void)setBackgroundView:(id)view;	// 0x3540176d
@end

