/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"
#import "BRProvider.h"

@class BRTypesetter, NSAttributedString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : NSObject <BRProvider> {
@private
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x302c20e9; S=0x302c208d; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x302c1f55
- (id)init;	// 0x302c1fb5
- (void)_updateTypesetter;	// 0x302c21a1
// converted property getter: - (id)attributedString;	// 0x302c20e9
- (id)controlFactory;	// 0x302c214d
- (id)dataAtIndex:(long)index;	// 0x302c217d
- (long)dataCount;	// 0x302c215d
- (void)dealloc;	// 0x302c2019
- (id)hashForDataAtIndex:(long)index;	// 0x302c219d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x302c208d
- (void)setTextBoxSize:(CGSize)size;	// 0x302c20f9
@end
