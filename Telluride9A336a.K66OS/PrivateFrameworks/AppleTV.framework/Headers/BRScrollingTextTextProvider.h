/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSAttributedString, BRTypesetter;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : NSObject <BRProvider> {
@private
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x33ab7479; S=0x33ab741d; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x33ab72e5
- (id)init;	// 0x33ab7345
- (void)_updateTypesetter;	// 0x33ab7531
// converted property getter: - (id)attributedString;	// 0x33ab7479
- (id)controlFactory;	// 0x33ab74dd
- (id)dataAtIndex:(long)index;	// 0x33ab750d
- (long)dataCount;	// 0x33ab74ed
- (void)dealloc;	// 0x33ab73a9
- (id)hashForDataAtIndex:(long)index;	// 0x33ab752d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x33ab741d
- (void)setTextBoxSize:(CGSize)size;	// 0x33ab7489
@end

